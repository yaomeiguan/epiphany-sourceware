// sidcpuutil.h - Elements common to CPU models.  -*- C++ -*-

// Copyright (C) 1999, 2000, 2001, 2002, 2003 Red Hat.
// This file is part of SID and is licensed under the GPL.
// See the file COPYING.SID for conditions for redistribution.

#ifndef SIDCPUUTIL_H
#define SIDCPUUTIL_H

#include <sidattrutil.h>
#include <sidpinutil.h>
#include <sidbusutil.h>
#include <sidcomputil.h>
#include <sidmiscutil.h>
#include <sidwatchutil.h>
#include <sidschedutil.h>

using std::string;

namespace sidutil
{
  // kinds of endianness
  enum endian 
  {
    endian_unknown = 0,
    endian_big = 1,
    endian_little = 2
  };
  
  inline
    std::ostream& operator << (std::ostream& o, const endian& e)
      {
	switch (e) 
	  {
	  default: 
	  case endian_unknown: o << "unknown"; break;
	  case endian_big: o << "big"; break;
	  case endian_little: o << "little"; break;
	  }
	return o;
      }
  
  
  inline
    std::istream& operator >> (std::istream& i, endian& e)
      {
	std::string s;
	i >> s;
	if (s == "unknown" || s == "0") { e = endian_unknown; }
	else if (s == "big" || s == "1") { e = endian_big; }
	else if (s == "little" || s == "2") { e = endian_little; }
	else { i.setstate(std::ios::badbit); e = endian_unknown; }
	return i;
      }

  // ------------------------------------------------------------------------

  class cpu_exception {};

  class cpu_memory_fault: public cpu_exception
  {
  public:
    sid::host_int_4 pc;
    sid::host_int_4 address;
    sid::bus::status status;
    const char* operation;
    
    cpu_memory_fault (sid::host_int_4 p, sid::host_int_4 a, sid::bus::status s, const char* o):
      pc(p), address(a), status(s), operation(o) 
      {}
  };
  

  // ------------------------------------------------------------------------


  // Values travelling through the trap-type pin.
  // Additional "arguments" are sent through the trap-code pin.
  enum cpu_trap_type {
    cpu_trap_software = 1,      // trap instruction hit
    cpu_trap_breakpoint = 2,    // breakpoint instruction hit
    cpu_trap_syscall = 3,       // system call instruction hit
    cpu_trap_invalid_insn = 4,  // invalid instruction hit
    cpu_trap_memory_fault = 5,  // memory fault encountered
    cpu_trap_overflow = 6,      // arithmetic overflow
    cpu_trap_stepped = 7,       // single-step completed
  };


  // Possible trap disposition codes
  enum cpu_trap_disposition 
  {
    cpu_trap_unhandled = 0,     // dispatch to hardware fault handling
    cpu_trap_handled = 1,       // supervisor handled faulting instruction
    cpu_trap_reissue = 2,       // rerun faulting instruction
    cpu_trap_skip = 3,          // skip faulting instruction
  };


  // ------------------------------------------------------------------------


  class basic_cpu: public virtual sid::component,
		   protected fixed_pin_map_component,
		   protected fixed_accessor_map_component,
		   protected fixed_attribute_map_component,
		   protected fixed_relation_map_component,
		   protected fixed_bus_map_component
  {
    // custom memory allocators for poisioning freshly-allocated memory
  public:
    void* operator new (size_t sz)
    {
      void* p = ::operator new (sz);
      // Initialize the object with garbage, to ease detection of missing initialization.
      char* q = (char*) p;
      char deadbeef[] = { 0xde, 0xad, 0xbe, 0xef };
      for (unsigned i=0; i<sz; i++)
	*q++ = deadbeef[i % 4];
      return p;
    }
    void operator delete (void* p)
    {
      ::operator delete (p);
    }

    // recursion protection
  protected:
    recursion_limited step_limit;

    // scheduler querying
  protected:
    friend class scheduler_time_query<basic_cpu>;
    scheduler_time_query<basic_cpu> sched_query;

    // triggerpoint support
  protected:
    friend class self_watcher<basic_cpu>;
    self_watcher<basic_cpu> triggerpoint_manager;
    // Virtual pin interfaces between self_watcher and fixed_pin_map_component
    sid::component::status pin_factory (const std::string& name)
      {
	return this->triggerpoint_manager.create_virtual_pin (name);
      }
    void pin_junkyard (const std::string& name)
      {
	return this->triggerpoint_manager.destroy_virtual_pin (name);
      }
  // Helper functions for target view support
  template <class PinType>
  void add_watchable_pin (const std::string& name, PinType* pin)
    {
      this->add_pin (name, pin);
      this->add_attribute (name, pin, "pin");
      this->triggerpoint_manager.add_watchable_attribute (name);
      this->categorize (name, "watchable");
    }

  template <class ValueType>
  void add_watchable_register (const std::string& name, ValueType* value)
    {
      this->add_attribute (name, value, "register");
      this->triggerpoint_manager.add_watchable_value (name, value);
      this->categorize (name, "watchable");
    }

  template <class Class, typename Getter, typename Setter>
  void add_watchable_register (const std::string& name,
                               Class* receiver,
                               Getter getter,
                               Setter setter)
    {
      this->add_attribute_virtual (name, receiver, getter, setter, "register");
      this->triggerpoint_manager.add_watchable_attribute (name);
      this->categorize (name, "watchable");
    }

  template <class Class, typename Getter, typename Setter, typename Parameter>
  void add_watchable_register (const std::string& name,
                               Parameter param,
                               Class* receiver,
                               Getter getter,
                               Setter setter)
    {
      this->add_attribute_virtual_parameterized (name, param, receiver, 
                                                 getter, setter, "register");
      this->triggerpoint_manager.add_watchable_attribute (name);
      this->categorize (name, "watchable");
    }

  template <class ValueType>
  void add_watchable_ro_register (const std::string& name, ValueType* value)
    {
      this->add_attribute_ro (name, value, "register");
      this->triggerpoint_manager.add_watchable_attribute (name);
      this->categorize (name, "watchable");
    }

    // step/yield control pins
  protected:
    callback_pin<basic_cpu> step_pin;
    callback_pin<basic_cpu> yield_pin;
    callback_pin<basic_cpu> print_insn_summary_pin;
    bool yield_p;
    sid::host_int_4 step_insn_count;
    sid::host_int_8 total_insn_count;
    mutable sid::host_int_8 total_latency;
    sid::host_int_4 current_step_insn_count;
    output_pin step_cycles_pin;
    output_pin cg_caller_pin;
    output_pin cg_callee_pin;
   
    // tracing
  private:
    string trace_filename;
    class cpu_trace_stream: public std::ofstream
    {
    public:
      cpu_trace_stream ()
	:cout_p (true) {}
      cpu_trace_stream (const std::string& filename)
	:std::ofstream (filename.c_str ()), cout_p (false) {}
      void divert_to_file () { cout_p = false; }
      void divert_to_cout () { cout_p = true; }
      void open (const std::string& filename)
      {
	std::ofstream::open (filename.c_str (), std::ios::app);
	cout_p = false;
      }
      void end_line ()
      {
	if (LIKELY (cout_p))
	  std::cout << std::endl;
	else
	  *this << std::endl;
      }
    private:
      bool cout_p;

      template <typename T> friend
      basic_cpu::cpu_trace_stream& operator<< (basic_cpu::cpu_trace_stream& s, T t);
    };

    template <typename T> friend
    cpu_trace_stream& operator<< (cpu_trace_stream& s, T t);

  public:
    bool trace_extract_p;
    bool trace_result_p;
    bool trace_disass_p;
    bool trace_semantics_p;
    bool trace_counter_p;
    bool final_insn_count_p;
    bool enable_step_trap_p;
    cpu_trace_stream trace_stream;

    void step_pin_handler (sid::host_int_4)
      {
	recursion_record limit (& this->step_limit);
	if (UNLIKELY(! limit.ok())) return;

	this->current_step_insn_count = 0;
	this->yield_p = false;

	// Check for triggerpoints due right now; may set yield_p!
	this->triggerpoint_manager.check_and_dispatch ();

	// Enter insn loop.  Poll continue_after_insn_p after each instruction
	sid::host_int_8 prev_latency = this->total_latency;
	sid::host_int_8 prev_insn_count = this->total_insn_count;
	if (! this->yield_p)
	  this->step_insns ();
	sid::host_int_8 num_insns = this->total_insn_count - prev_insn_count;
	sid::host_int_8 latency = this->total_latency - prev_latency;

	// Clamp
	const sid::host_int_4 min_num_cycles = 1;
	const sid::host_int_4 max_num_cycles = 0x7FFFFFFF;
	sid::host_int_8 insn_cycles = num_insns + latency_to_cycles (latency);
	sid::host_int_4 num_cycles =
	  insn_cycles <= min_num_cycles ? min_num_cycles :
	  insn_cycles >= max_num_cycles ? max_num_cycles :
	  insn_cycles;
	this->stepped (num_cycles);
      }
    void yield ()
      {
	this->yield_p = true;
	// A subsequent continue_after_insns_p should return false.
      }
    void yield_pin_handler (sid::host_int_4)
      {
	this->yield ();
      }
    virtual void print_insn_summary (sid::host_int_4)
      {
	std::cerr << "instruction count: " << this->total_insn_count << "  "
		  << "simulated cycles: " << this->total_latency + this->total_insn_count << std::endl;
      }
    virtual void stepped (sid::host_int_4 n)
      {
	this->step_cycles_pin.drive (n);
      }
    void cg_profile (sid::host_int_4 caller, sid::host_int_4 callee)
    {
      // The drive sequence is important: see sw-profile-gprof
      this->cg_caller_pin.drive (caller);
      this->cg_callee_pin.drive (callee);

      if (UNLIKELY(this->trace_result_p)) 
	{
	  this->trace_stream << "cg-profile "
			     << make_numeric_attribute (caller, 
							std::ios::hex|std::ios::showbase)
			     << "->" 
			     << make_numeric_attribute (callee,
							std::ios::hex|std::ios::showbase)
	                     << "  ";
	}
    }

  public:
    void set_total_latency (sid::host_int_8 latency) { this->total_latency = latency; }
    void update_total_latency (sid::host_int_8 latency) { this->total_latency += latency; }
    sid::host_int_8 get_total_latency () const  { return this->total_latency; }

  protected:
    virtual sid::host_int_8 latency_to_cycles (sid::host_int_8 num)
    {
      // Identity relationship: 1 latency unit = 1 cycle.
      return num;
    }

    virtual void step_insns () = 0;
    bool stop_after_insns_p (sid::host_int_4 num)
      {
	this->current_step_insn_count += num;
	if (UNLIKELY(this->yield_p ||
		    (this->current_step_insn_count >= this->step_insn_count)))
          {
            // Batch updates to total_insn_count to avoid long-long
            // arithmetic overhead in the inner insn-stepping loops.
	    this->total_insn_count += this->current_step_insn_count;
	    this->current_step_insn_count = 0;
	    return true;
          }
        else
	  {
	    return false;
	  }
      }

    void
    update_trace_destination ()
    {
      if (trace_filename == "-")
	trace_stream.divert_to_cout ();
      else
	{
	  trace_stream.close ();
	  trace_stream.open (trace_filename);
	  trace_stream << "start of trace" << std::endl;
	  if (trace_stream.good ())
	    trace_stream.divert_to_file ();
	  else
	    trace_filename = "io-error!";
	}
    }

    // Infer a change to trace_result_p after one of the other general 
    // trace flags are changed.
    void
    update_trace_result_p ()
    {
      this->trace_result_p = (this->trace_semantics_p || this->trace_disass_p);
    }


    // Reset the processor model to power-up state.
  private:
    callback_pin<basic_cpu> reset_pin;
    virtual void reset () = 0;
    void reset_pin_handler(sid::host_int_4 v) { this->reset (); this->stepped(1); }

    // Flush internal abstract icache (if any)
  private:
    callback_pin<basic_cpu> flush_icache_pin;
    void flush_icache_pin_handler(sid::host_int_4 v) { this->flush_icache(); }
  protected:
    virtual void flush_icache () = 0;
    virtual void flush_icache (sid::host_int_4 pc) { this->flush_icache (); }

    // Set the initial PC after reset
  private:
    callback_pin<basic_cpu> pc_set_pin;
    virtual void set_pc(sid::host_int_4) = 0;
    void pc_set_pin_handler(sid::host_int_4 v) { this->set_pc (v); }

    // Set the initial endianness after reset
  private:
    callback_pin<basic_cpu> endian_set_pin;
    virtual void set_endian(sid::host_int_4) = 0;
    void endian_set_pin_handler(sid::host_int_4 v) { this->set_endian (v); }

    // Signal trap type code and argument
  private:
    output_pin trap_type_pin;
    output_pin trap_code_pin;
    input_pin trap_disposition_pin;
  protected:
    cpu_trap_disposition signal_trap (cpu_trap_type p, sid::host_int_4 param = 0)
      {
	// Prepare disposition pin in case we get no signal back
	this->trap_disposition_pin.driven (sid::host_int_4(cpu_trap_unhandled));
	this->trap_code_pin.drive (param);
	this->trap_type_pin.drive (sid::host_int_4(p));
	return static_cast<cpu_trap_disposition>(trap_disposition_pin.sense ());
      }

    
    // state save/restore: Override these in derived classes, but
    // include a call up to this base implementation.
  protected:
    virtual void stream_state(std::ostream& o) const 
      {
	o << "basic-cpu"
	  // attrs
	  << " " << this->step_insn_count
	  << " " << this->enable_step_trap_p
	  << " " << this->total_insn_count
	  << " " << this->total_latency
	  << " " << this->trace_extract_p
	  << " " << this->trace_result_p
	  << " " << this->trace_disass_p
	  << " " << this->trace_semantics_p
	  << " " << this->trace_counter_p
	  << " " << this->final_insn_count_p
	  // pins
	  << " " << this->step_cycles_pin
	  << " " << this->trap_type_pin
	  << " " << this->trap_code_pin;
      }

    virtual void destream_state(std::istream& i) 
      {
	std::string key;
	i >> key;
	if (key != "basic-cpu")
	  {
	    i.setstate (std::ios::badbit);
	    return;
	  }
	i >> this->step_insn_count
	  >> this->enable_step_trap_p
	  >> this->total_insn_count
	  >> this->total_latency
	  >> this->trace_extract_p
	  >> this->trace_result_p
	  >> this->trace_disass_p
	  >> this->trace_semantics_p
	  >> this->trace_counter_p
	  >> this->final_insn_count_p
	  // pins
	  >> this->step_cycles_pin
	  >> this->trap_type_pin
	  >> this->trap_code_pin;
      }

    // helper functions
  private:
    friend std::ostream& operator << (std::ostream& o, const basic_cpu& c);
    friend std::istream& operator >> (std::istream& i, basic_cpu& c);
    std::string save_state() { return make_attribute(*this); }
    sid::component::status restore_state(const std::string& s)
      { return parse_attribute(s, *this); }


    // ------------------------------------------------------------------------
    // debugger access functions
  private:
    passthrough_bus debugger_bus;
    virtual std::string dbg_get_reg (sid::host_int_4 n) = 0;
    virtual sid::component::status dbg_set_reg (sid::host_int_4 n, const std::string& s) = 0;

  protected:
    template <typename PC>
    void create_gdb_register_attrs (sid::host_int_4 count, 
				    const std::string& expedited_regno_list, 
				    PC* pc)
      {
	this->add_watchable_register ("gdb-register-pc", pc);
	this->add_attribute_ro_value ("gdb-num-registers", count, "debugger");

	// The "expedited" register list string is the semi-colon-delimited list of
	// register numbers that should be sent to gdb immediately
	// every time sid stops, rather than let gdb ask for it
	// subsequently.  Usually, the PC, frame and stack pointer,
	// and status register should be included in the list.  It
	// makes gdb step operations much faster.
        // The register numbering scheme is that decided by gdb. 

	this->add_attribute_ro_value ("gdb-exp-registers", expedited_regno_list, "debugger");
	for (sid::host_int_4 i=0; i<count; i++)
	  {
	    std::string name = std::string ("gdb-register-") + make_numeric_attribute (i);
	    attribute_coder_base* coder =
	      new attribute_coder_virtual_parameterized<basic_cpu,sid::host_int_4>
	      (this, & basic_cpu::dbg_get_reg, & basic_cpu::dbg_set_reg, i);
	    this->add_attribute_coder (name, coder, "debugger");
	  }
      }


    // ------------------------------------------------------------------------
    // memory access functions

  protected:
    sid::bus* data_bus;
    sid::bus* insn_bus;
    sid::bus* disassembler_bus;

  protected:
    template <typename BigOrLittleInt>
    BigOrLittleInt read_insn_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt) const;
    template <typename BigOrLittleInt>
    BigOrLittleInt write_insn_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt value) const;
    template <typename BigOrLittleInt>
    BigOrLittleInt read_data_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt) const;
    template <typename BigOrLittleInt>
    BigOrLittleInt write_data_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt value) const;

    // ------------------------------------------------------------------------
    
public:
    basic_cpu ():
      total_latency (0),
      step_limit ("instruction stepping", 1),
      sched_query (this),
      triggerpoint_manager (this),
      step_pin (this, & basic_cpu::step_pin_handler),
      yield_pin (this, & basic_cpu::yield_pin_handler),
      reset_pin (this, & basic_cpu::reset_pin_handler),
      print_insn_summary_pin (this, & basic_cpu::print_insn_summary),
      flush_icache_pin (this, & basic_cpu::flush_icache_pin_handler),
      pc_set_pin (this, & basic_cpu::pc_set_pin_handler),
      endian_set_pin (this, & basic_cpu::endian_set_pin_handler),
      debugger_bus (& this->data_bus),
      trace_stream (),
      trace_filename ("-") // standard output
      {
	// buses
	this->data_bus = 0;
	add_accessor ("data-memory", & this->data_bus);
	this->insn_bus = 0;
	add_accessor ("insn-memory", & this->insn_bus);
	this->disassembler_bus = 0;
	add_accessor ("disassembler-memory", & this->disassembler_bus);
	add_bus ("debugger-bus", & this->debugger_bus);

	// pins
	add_pin ("step!", & this->step_pin);
	add_watchable_pin ("step-cycles", & this->step_cycles_pin);
	add_pin ("flush-icache", & this->flush_icache_pin);
	add_pin ("reset!", & this->reset_pin);
	add_pin ("yield", & this->yield_pin);
	add_pin ("start-pc-set!", & this->pc_set_pin);
	add_pin ("cg-caller", & this->cg_caller_pin);
	add_pin ("cg-callee", & this->cg_callee_pin);
	add_pin ("print-insn-summary!", & this->print_insn_summary_pin);
	add_pin ("endian-set!", & this->endian_set_pin);
	add_watchable_pin ("trap", & this->trap_type_pin); // output side
	add_watchable_pin ("trap-code", & this->trap_code_pin);
	add_pin ("trap", & this->trap_disposition_pin); // input side

	// attributes
	this->step_insn_count = 1;
	add_attribute ("step-insn-count", & this->step_insn_count, "setting");
	this->enable_step_trap_p = false;
	add_attribute ("enable-step-trap?", & this->enable_step_trap_p, "setting");
	this->total_insn_count = 0;
	add_watchable_register ("insn-count", & this->total_insn_count);
	add_attribute_virtual ("state-snapshot", this,
			       & basic_cpu::save_state,
			       & basic_cpu::restore_state);
	add_attribute_notify ("trace-filename", & this->trace_filename, this,
			      & basic_cpu::update_trace_destination,
			      "setting");
	this->trace_extract_p = false;
	add_attribute ("trace-extract?", & trace_extract_p, "setting");
	this->trace_semantics_p = false;
	add_attribute_notify ("trace-semantics?", & this->trace_semantics_p, this,
			       & basic_cpu::update_trace_result_p, 
			       "setting");
	this->trace_disass_p = false;
	add_attribute_notify ("trace-disassemble?", & this->trace_disass_p, this,
			       & basic_cpu::update_trace_result_p, 
			       "setting");
	// `trace-result?' should go away after all simulators are updated to
	// use `trace-semantics?'.
	this->trace_result_p = false;
	add_attribute ("trace-result?", & this->trace_result_p, "setting");
	this->trace_counter_p = false;
	add_attribute ("trace-counter?", & this->trace_counter_p, "setting");
	this->final_insn_count_p = false;
	add_attribute ("final-insn-count?", & this->final_insn_count_p, "setting");
      }

    virtual ~basic_cpu() throw() {}
  };


  inline std::ostream& operator << (std::ostream& o, const basic_cpu& c) {
    c.stream_state (o);
    return o;
  }
  inline std::istream& operator >> (std::istream& i, basic_cpu& c) {
    c.destream_state (i);
    return i;
  }

    template <typename T>
    basic_cpu::cpu_trace_stream& operator<< (basic_cpu::cpu_trace_stream& s, T t)
    {
      if (LIKELY (s.cout_p))
	std::cout << t;
      else
	static_cast <std::ofstream&> (s) << t;
      return s;
    }
  
    template <typename BigOrLittleInt>
    BigOrLittleInt basic_cpu::read_insn_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt) const
      {
	BigOrLittleInt value;
	sid::bus::status s;
	if (LIKELY(this->insn_bus))
	  s = this->insn_bus->read (address, value);
	else
	  s = sid::bus::unmapped;
	total_latency += s.latency;
	if (LIKELY(s == sid::bus::ok))
	  return value;

	throw cpu_memory_fault (pc, address, s, "insn read");
      }

    template <typename BigOrLittleInt>
    BigOrLittleInt basic_cpu::write_insn_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt value) const
      {
	sid::bus::status s;
	if (LIKELY(this->insn_bus))
	  s = this->insn_bus->write (address, value);
	else
	  s = sid::bus::unmapped;
	total_latency += s.latency;
	if (LIKELY(s == sid::bus::ok))
	  return value;

	throw cpu_memory_fault (pc, address, s, "insn write");
      }

    template <typename BigOrLittleInt>
    BigOrLittleInt basic_cpu::read_data_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt) const
      {
	BigOrLittleInt value;
	sid::bus::status s;
	if (LIKELY(this->data_bus))
	  s = this->data_bus->read (address, value);
	else
	  s = sid::bus::unmapped;
	total_latency += s.latency;
	if (LIKELY(s == sid::bus::ok))
	  return value;

	throw cpu_memory_fault (pc, address, s, "data read");
      }

    template <typename BigOrLittleInt>
    BigOrLittleInt basic_cpu::write_data_memory (sid::host_int_4 pc, sid::host_int_4 address, BigOrLittleInt value) const
      {
	sid::bus::status s;
	if (LIKELY(this->data_bus))
	  s = this->data_bus->write (address, value);
	else
	  s = sid::bus::unmapped;
	total_latency += s.latency;
	if (LIKELY(s == sid::bus::ok))
	  return value;

	throw cpu_memory_fault (pc, address, s, "data write");
      }



  // ------------------------------------------------------------------------
  // Derived classes for memory access functions of various endianness

  class basic_big_endian_cpu: public basic_cpu
  {
    void set_endian(sid::host_int_4) {}

  protected:

    basic_big_endian_cpu ()
      {
	add_attribute_ro_value ("endian", endian_big, "register");
      }
    ~basic_big_endian_cpu () throw() {}

    sid::host_int_1 read_insn_memory_1 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::big_int_1());
      }

    sid::host_int_2 read_insn_memory_2 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::big_int_2());
      }

    sid::host_int_4 read_insn_memory_4 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::big_int_4());
      }

    sid::host_int_8 read_insn_memory_8 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::big_int_8());
      }

    void write_insn_memory_1 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_1 value) const
      {
	this->write_insn_memory (pc, address, sid::big_int_1(value));
      }

    void write_insn_memory_2 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_2 value) const
      {
	this->write_insn_memory (pc, address, sid::big_int_2(value));
      }

    void write_insn_memory_4 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_4 value) const
      {
	this->write_insn_memory (pc, address, sid::big_int_4(value));
      }

    void write_insn_memory_8 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_8 value) const
      {
	this->write_insn_memory (pc, address, sid::big_int_8(value));
      }

    sid::host_int_1 read_data_memory_1 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::big_int_1());
      }

    sid::host_int_2 read_data_memory_2 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::big_int_2());
      }

    sid::host_int_4 read_data_memory_4 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::big_int_4());
      }

    sid::host_int_8 read_data_memory_8 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::big_int_8());
      }

    void write_data_memory_1 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_1 value) const
      {
	this->write_data_memory (pc, address, sid::big_int_1(value));
      }

    void write_data_memory_2 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_2 value) const
      {
	this->write_data_memory (pc, address, sid::big_int_2(value));
      }

    void write_data_memory_4 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_4 value) const
      {
	this->write_data_memory (pc, address, sid::big_int_4(value));
      }

    void write_data_memory_8 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_8 value) const
      {
	this->write_data_memory (pc, address, sid::big_int_8(value));
      }
  };


  // ----------------------------------------------------------------------------

  class basic_little_endian_cpu: public basic_cpu
  {
    void set_endian(sid::host_int_4) {}

  protected:
    basic_little_endian_cpu ()
      {
	add_attribute_ro_value ("endian", endian_little, "register");
      }
    ~basic_little_endian_cpu () throw() {}

    sid::host_int_1 read_insn_memory_1 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::little_int_1());
      }

    sid::host_int_2 read_insn_memory_2 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::little_int_2());
      }

    sid::host_int_4 read_insn_memory_4 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::little_int_4());
      }

    sid::host_int_8 read_insn_memory_8 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_insn_memory (pc, address, sid::little_int_8());
      }

    void write_insn_memory_1 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_1 value) const
      {
	this->write_insn_memory (pc, address, sid::little_int_1(value));
      }

    void write_insn_memory_2 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_2 value) const
      {
	this->write_insn_memory (pc, address, sid::little_int_2(value));
      }

    void write_insn_memory_4 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_4 value) const
      {
	this->write_insn_memory (pc, address, sid::little_int_4(value));
      }

    void write_insn_memory_8 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_8 value) const
      {
	this->write_insn_memory (pc, address, sid::little_int_8(value));
      }

    sid::host_int_1 read_data_memory_1 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::little_int_1());
      }

    sid::host_int_2 read_data_memory_2 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::little_int_2());
      }

    sid::host_int_4 read_data_memory_4 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::little_int_4());
      }

    sid::host_int_8 read_data_memory_8 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	return this->read_data_memory (pc, address, sid::little_int_8());
      }

    void write_data_memory_1 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_1 value) const
      {
	this->write_data_memory (pc, address, sid::little_int_1(value));
      }

    void write_data_memory_2 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_2 value) const
      {
	this->write_data_memory (pc, address, sid::little_int_2(value));
      }

    void write_data_memory_4 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_4 value) const
      {
	this->write_data_memory (pc, address, sid::little_int_4(value));
      }

    void write_data_memory_8 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_8 value) const
      {
	this->write_data_memory (pc, address, sid::little_int_8(value));
      }
  };


  // ----------------------------------------------------------------------------


  class basic_bi_endian_cpu: public basic_cpu
  {
    endian _current_endianness;
  protected:
    endian current_endianness() const { return this->_current_endianness; }

  protected:
    basic_bi_endian_cpu ()
      {
	this->_current_endianness = endian_big;
	add_attribute ("endian", & this->_current_endianness, "register");
      }
    ~basic_bi_endian_cpu () throw() {}

    void set_endian(sid::host_int_4 v)
      {
	switch (v)
	  {
	  case 1:
	    this->_current_endianness = endian_big;
	    break;
	  case 2:
	    this->_current_endianness = endian_little;
	    break;
	  default:
	    // XXX: warning message?
	    break;
	  }
      }

    void stream_state(std::ostream& o) const 
      {
	basic_cpu::stream_state(o);
	o << " " << this->_current_endianness;
      }

    void destream_state(std::istream& i) 
      {
	basic_cpu::destream_state(i);
	i >> this->_current_endianness;
      }


    sid::host_int_1 read_insn_memory_1 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_insn_memory (pc, address, sid::little_int_1());
	else // endian_big or endian_unknown
	  return this->read_insn_memory (pc, address, sid::big_int_1());
      }

    sid::host_int_2 read_insn_memory_2 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_insn_memory (pc, address, sid::little_int_2());
	else // endian_big or endian_unknown
	  return this->read_insn_memory (pc, address, sid::big_int_2());
      }

    sid::host_int_4 read_insn_memory_4 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_insn_memory (pc, address, sid::little_int_4());
	else // endian_big or endian_unknown
	  return this->read_insn_memory (pc, address, sid::big_int_4());
      }

    sid::host_int_8 read_insn_memory_8 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_insn_memory (pc, address, sid::little_int_8());
	else // endian_big or endian_unknown
	  return this->read_insn_memory (pc, address, sid::big_int_8());
      }

    void write_insn_memory_1 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_1 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_insn_memory (pc, address, sid::little_int_1(value));
	else // endian_big or endian_unknown
	  this->write_insn_memory (pc, address, sid::big_int_1(value));
      }

    void write_insn_memory_2 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_2 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_insn_memory (pc, address, sid::little_int_2(value));
	else // endian_big or endian_unknown
	  this->write_insn_memory (pc, address, sid::big_int_2(value));
      }

    void write_insn_memory_4 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_4 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_insn_memory (pc, address, sid::little_int_4(value));
	else // endian_big or endian_unknown
	  this->write_insn_memory (pc, address, sid::big_int_4(value));
      }

    void write_insn_memory_8 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_8 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_insn_memory (pc, address, sid::little_int_8(value));
	else // endian_big or endian_unknown
	  this->write_insn_memory (pc, address, sid::big_int_8(value));
      }

    sid::host_int_1 read_data_memory_1 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_data_memory (pc, address, sid::little_int_1());
	else // endian_big or endian_unknown
	  return this->read_data_memory (pc, address, sid::big_int_1());
      }

    sid::host_int_2 read_data_memory_2 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_data_memory (pc, address, sid::little_int_2());
	else // endian_big or endian_unknown
	  return this->read_data_memory (pc, address, sid::big_int_2());
      }

    sid::host_int_4 read_data_memory_4 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_data_memory (pc, address, sid::little_int_4());
	else // endian_big or endian_unknown
	  return this->read_data_memory (pc, address, sid::big_int_4());
      }

    sid::host_int_8 read_data_memory_8 (sid::host_int_4 pc, sid::host_int_4 address) const
      {
	if (this->_current_endianness == endian_little)
	  return this->read_data_memory (pc, address, sid::little_int_8());
	else // endian_big or endian_unknown
	  return this->read_data_memory (pc, address, sid::big_int_8());
      }

    void write_data_memory_1 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_1 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_data_memory (pc, address, sid::little_int_1(value));
	else // endian_big or endian_unknown
	  this->write_data_memory (pc, address, sid::big_int_1(value));
      }

    void write_data_memory_2 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_2 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_data_memory (pc, address, sid::little_int_2(value));
	else // endian_big or endian_unknown
	  this->write_data_memory (pc, address, sid::big_int_2(value));
      }

    void write_data_memory_4 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_4 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_data_memory (pc, address, sid::little_int_4(value));
	else // endian_big or endian_unknown
	  this->write_data_memory (pc, address, sid::big_int_4(value));
      }

    void write_data_memory_8 (sid::host_int_4 pc, sid::host_int_4 address, sid::host_int_8 value) const
      {
	if (this->_current_endianness == endian_little)
	  this->write_data_memory (pc, address, sid::little_int_8(value));
	else // endian_big or endian_unknown
	  this->write_data_memory (pc, address, sid::big_int_8(value));
      }
  };


} // end namespace sidutil


#endif // SIDCPUUTIL_H
