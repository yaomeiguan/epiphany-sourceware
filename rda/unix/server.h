/* server.h

   Copyright 2000, 2002 Red Hat, Inc.

   This file is part of RDA, the Red Hat Debug Agent (and library).

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
   
   Alternative licenses for RDA may be arranged by contacting Red Hat,
   Inc.  */

/* Shared definitions for an RDA based native gdb server.  */

#if defined(_MIPSEL) || defined(_MIPSEB)
/*
 * We single-step by setting breakpoints. When an exception
 * is handled, we need to restore the previous instructions
 *
 * This is where we save the original instructions.
 */

struct ss_save {
	int in_use;
	struct gdbserv_reg ss_addr;
        unsigned int ss_val;
};
#endif

/* Definition of a "process", or an instance of the server.
 * Theoretically one server could run an arbitrary number of these.
 */
struct child_process {
  struct gdbserv *serv;
  char *executable;
  char **argv;
  int  pid;
  struct gdbserv_thread *event_thread;
  int  stop_status;
  int  stop_signal;
  long signal_to_send;
  int  debug_backend;
  int  debug_informational;
  int  running;
#if defined(_MIPSEL) || defined(_MIPSEB)
   int  is_ss;                 /* we are single stepping */
   struct ss_save ss_info[2];  /* single stepping saved information */
#endif
};

/* Definition of the entry points to the server, 
 * needed by main.
 */
struct server_vector {
  struct gdbserv_target * (*attach) (struct gdbserv *serv, void *data);
  int (*check_child_state)     (struct child_process *process);
  void (*fromtarget_break)     (struct child_process *process);
  void (*fromtarget_exit)      (struct child_process *process);
  void (*fromtarget_terminate) (struct child_process *process);
};

extern struct server_vector gdbserver;

/* Global flag used by the server to tell main to quit out of its loop.
 */
extern int server_quit_p;

