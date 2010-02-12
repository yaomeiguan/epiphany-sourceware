/* Decode header for sh2e.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2010 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/

#ifndef SH2E_DECODE_H
#define SH2E_DECODE_H

namespace sh2e {
// forward declaration of struct in -defs.h
struct write_stacks;
}

namespace sh2e {

using namespace cgen;
using namespace sh;

typedef UINT sh2e_insn_word;

/* Enum declaration for instructions in cpu family sh2e.  */
typedef enum sh2e_insn_type {
  SH2E_INSN_X_INVALID, SH2E_INSN_ADD_COMPACT, SH2E_INSN_ADDI_COMPACT, SH2E_INSN_ADDC_COMPACT
 , SH2E_INSN_ADDV_COMPACT, SH2E_INSN_AND_COMPACT, SH2E_INSN_ANDI_COMPACT, SH2E_INSN_ANDB_COMPACT
 , SH2E_INSN_BF_COMPACT, SH2E_INSN_BFS_COMPACT, SH2E_INSN_BRA_COMPACT, SH2E_INSN_BRAF_COMPACT
 , SH2E_INSN_BSR_COMPACT, SH2E_INSN_BSRF_COMPACT, SH2E_INSN_BT_COMPACT, SH2E_INSN_BTS_COMPACT
 , SH2E_INSN_CLRMAC_COMPACT, SH2E_INSN_CLRT_COMPACT, SH2E_INSN_CMPEQ_COMPACT, SH2E_INSN_CMPEQI_COMPACT
 , SH2E_INSN_CMPGE_COMPACT, SH2E_INSN_CMPGT_COMPACT, SH2E_INSN_CMPHI_COMPACT, SH2E_INSN_CMPHS_COMPACT
 , SH2E_INSN_CMPPL_COMPACT, SH2E_INSN_CMPPZ_COMPACT, SH2E_INSN_CMPSTR_COMPACT, SH2E_INSN_DIV0S_COMPACT
 , SH2E_INSN_DIV0U_COMPACT, SH2E_INSN_DIV1_COMPACT, SH2E_INSN_DMULSL_COMPACT, SH2E_INSN_DMULUL_COMPACT
 , SH2E_INSN_DT_COMPACT, SH2E_INSN_EXTSB_COMPACT, SH2E_INSN_EXTSW_COMPACT, SH2E_INSN_EXTUB_COMPACT
 , SH2E_INSN_EXTUW_COMPACT, SH2E_INSN_FABS_COMPACT, SH2E_INSN_FADD_COMPACT, SH2E_INSN_FCMPEQ_COMPACT
 , SH2E_INSN_FCMPGT_COMPACT, SH2E_INSN_FDIV_COMPACT, SH2E_INSN_FLDS_COMPACT, SH2E_INSN_FLDI0_COMPACT
 , SH2E_INSN_FLDI1_COMPACT, SH2E_INSN_FLOAT_COMPACT, SH2E_INSN_FMAC_COMPACT, SH2E_INSN_FMOV1_COMPACT
 , SH2E_INSN_FMOV2_COMPACT, SH2E_INSN_FMOV3_COMPACT, SH2E_INSN_FMOV4_COMPACT, SH2E_INSN_FMOV5_COMPACT
 , SH2E_INSN_FMOV6_COMPACT, SH2E_INSN_FMOV7_COMPACT, SH2E_INSN_FMUL_COMPACT, SH2E_INSN_FNEG_COMPACT
 , SH2E_INSN_FRCHG_COMPACT, SH2E_INSN_FSCHG_COMPACT, SH2E_INSN_FSTS_COMPACT, SH2E_INSN_FSUB_COMPACT
 , SH2E_INSN_FTRC_COMPACT, SH2E_INSN_JMP_COMPACT, SH2E_INSN_JSR_COMPACT, SH2E_INSN_LDC_GBR_COMPACT
 , SH2E_INSN_LDC_VBR_COMPACT, SH2E_INSN_LDC_SR_COMPACT, SH2E_INSN_LDCL_GBR_COMPACT, SH2E_INSN_LDCL_VBR_COMPACT
 , SH2E_INSN_LDS_FPSCR_COMPACT, SH2E_INSN_LDSL_FPSCR_COMPACT, SH2E_INSN_LDS_FPUL_COMPACT, SH2E_INSN_LDSL_FPUL_COMPACT
 , SH2E_INSN_LDS_MACH_COMPACT, SH2E_INSN_LDSL_MACH_COMPACT, SH2E_INSN_LDS_MACL_COMPACT, SH2E_INSN_LDSL_MACL_COMPACT
 , SH2E_INSN_LDS_PR_COMPACT, SH2E_INSN_LDSL_PR_COMPACT, SH2E_INSN_MACL_COMPACT, SH2E_INSN_MACW_COMPACT
 , SH2E_INSN_MOV_COMPACT, SH2E_INSN_MOVI_COMPACT, SH2E_INSN_MOVB1_COMPACT, SH2E_INSN_MOVB2_COMPACT
 , SH2E_INSN_MOVB3_COMPACT, SH2E_INSN_MOVB4_COMPACT, SH2E_INSN_MOVB5_COMPACT, SH2E_INSN_MOVB6_COMPACT
 , SH2E_INSN_MOVB7_COMPACT, SH2E_INSN_MOVB8_COMPACT, SH2E_INSN_MOVB9_COMPACT, SH2E_INSN_MOVB10_COMPACT
 , SH2E_INSN_MOVL1_COMPACT, SH2E_INSN_MOVL2_COMPACT, SH2E_INSN_MOVL3_COMPACT, SH2E_INSN_MOVL4_COMPACT
 , SH2E_INSN_MOVL5_COMPACT, SH2E_INSN_MOVL6_COMPACT, SH2E_INSN_MOVL7_COMPACT, SH2E_INSN_MOVL8_COMPACT
 , SH2E_INSN_MOVL9_COMPACT, SH2E_INSN_MOVL10_COMPACT, SH2E_INSN_MOVL11_COMPACT, SH2E_INSN_MOVW1_COMPACT
 , SH2E_INSN_MOVW2_COMPACT, SH2E_INSN_MOVW3_COMPACT, SH2E_INSN_MOVW4_COMPACT, SH2E_INSN_MOVW5_COMPACT
 , SH2E_INSN_MOVW6_COMPACT, SH2E_INSN_MOVW7_COMPACT, SH2E_INSN_MOVW8_COMPACT, SH2E_INSN_MOVW9_COMPACT
 , SH2E_INSN_MOVW10_COMPACT, SH2E_INSN_MOVW11_COMPACT, SH2E_INSN_MOVA_COMPACT, SH2E_INSN_MOVT_COMPACT
 , SH2E_INSN_MULL_COMPACT, SH2E_INSN_MULSW_COMPACT, SH2E_INSN_MULUW_COMPACT, SH2E_INSN_NEG_COMPACT
 , SH2E_INSN_NEGC_COMPACT, SH2E_INSN_NOP_COMPACT, SH2E_INSN_NOT_COMPACT, SH2E_INSN_OR_COMPACT
 , SH2E_INSN_ORI_COMPACT, SH2E_INSN_ORB_COMPACT, SH2E_INSN_ROTCL_COMPACT, SH2E_INSN_ROTCR_COMPACT
 , SH2E_INSN_ROTL_COMPACT, SH2E_INSN_ROTR_COMPACT, SH2E_INSN_RTS_COMPACT, SH2E_INSN_SETT_COMPACT
 , SH2E_INSN_SHAL_COMPACT, SH2E_INSN_SHAR_COMPACT, SH2E_INSN_SHLL_COMPACT, SH2E_INSN_SHLL2_COMPACT
 , SH2E_INSN_SHLL8_COMPACT, SH2E_INSN_SHLL16_COMPACT, SH2E_INSN_SHLR_COMPACT, SH2E_INSN_SHLR2_COMPACT
 , SH2E_INSN_SHLR8_COMPACT, SH2E_INSN_SHLR16_COMPACT, SH2E_INSN_STC_GBR_COMPACT, SH2E_INSN_STC_VBR_COMPACT
 , SH2E_INSN_STCL_GBR_COMPACT, SH2E_INSN_STCL_VBR_COMPACT, SH2E_INSN_STS_FPSCR_COMPACT, SH2E_INSN_STSL_FPSCR_COMPACT
 , SH2E_INSN_STS_FPUL_COMPACT, SH2E_INSN_STSL_FPUL_COMPACT, SH2E_INSN_STS_MACH_COMPACT, SH2E_INSN_STSL_MACH_COMPACT
 , SH2E_INSN_STS_MACL_COMPACT, SH2E_INSN_STSL_MACL_COMPACT, SH2E_INSN_STS_PR_COMPACT, SH2E_INSN_STSL_PR_COMPACT
 , SH2E_INSN_SUB_COMPACT, SH2E_INSN_SUBC_COMPACT, SH2E_INSN_SUBV_COMPACT, SH2E_INSN_SWAPB_COMPACT
 , SH2E_INSN_SWAPW_COMPACT, SH2E_INSN_TASB_COMPACT, SH2E_INSN_TRAPA_COMPACT, SH2E_INSN_TST_COMPACT
 , SH2E_INSN_TSTI_COMPACT, SH2E_INSN_TSTB_COMPACT, SH2E_INSN_XOR_COMPACT, SH2E_INSN_XORI_COMPACT
 , SH2E_INSN_XORB_COMPACT, SH2E_INSN_XTRCT_COMPACT
} SH2E_INSN_TYPE;


// Forward decls.
struct sh2e_cpu;
struct sh2e_scache;
typedef void (sh2e_sem_fn) (sh2e_cpu* cpu, sh2e_scache* sem, int tick, sh2e::write_stacks &buf);


// Instruction descriptor.

struct sh2e_idesc {

  // scache engine executor for this insn
  sh2e_sem_fn* execute;

  const char* insn_name;
  enum sh2e_insn_type sem_index;
  sh_insn_attr attrs;

  // idesc table: indexed by sem_index
  static sh2e_idesc idesc_table[];

  static sh2e_insn_type lookup_virtual (virtual_insn_type vit);
};

// Instruction argument buffer.

union sh2e_sem_fields {
  struct { /* no operands */
    int empty;
  } sfmt_empty;
  struct { /*  */
    IADDR i_disp12;
  } sfmt_bra_compact;
  struct { /*  */
    IADDR i_disp8;
  } sfmt_bf_compact;
  struct { /*  */
    SI f_imm8x2;
    unsigned char out_r0;
  } sfmt_movw9_compact;
  struct { /*  */
    SI f_imm8x2;
    unsigned char in_r0;
  } sfmt_movw4_compact;
  struct { /*  */
    SI f_imm8x4;
    unsigned char out_r0;
  } sfmt_movl9_compact;
  struct { /*  */
    SI f_imm8x4;
    unsigned char in_r0;
  } sfmt_movl4_compact;
  struct { /*  */
    SI f_imm8x2;
    UINT f_rn;
    unsigned char out_rn;
  } sfmt_movw10_compact;
  struct { /*  */
    SI f_imm8x4;
    UINT f_rn;
    unsigned char out_rn;
  } sfmt_movl10_compact;
  struct { /*  */
    UINT f_rn;
    unsigned char in_fsdn;
    unsigned char out_fpul;
  } sfmt_ftrc_compact;
  struct { /*  */
    UINT f_rn;
    unsigned char in_fpul;
    unsigned char out_frn;
  } sfmt_fsts_compact;
  struct { /*  */
    UINT f_rn;
    unsigned char in_fpul;
    unsigned char out_fsdn;
  } sfmt_float_compact;
  struct { /*  */
    UINT f_rn;
    unsigned char in_frn;
    unsigned char out_fpul;
  } sfmt_flds_compact;
  struct { /*  */
    UINT f_imm8;
    unsigned char in_r0;
    unsigned char out_r0;
  } sfmt_andi_compact;
  struct { /*  */
    UINT f_rn;
    unsigned char in_fpul;
    unsigned char in_rn;
    unsigned char out_rn;
  } sfmt_stsl_fpul_compact;
  struct { /*  */
    SI f_imm4x2;
    UINT f_rm;
    unsigned char in_rm;
    unsigned char out_r0;
  } sfmt_movw11_compact;
  struct { /*  */
    SI f_imm4x2;
    UINT f_rm;
    unsigned char in_r0;
    unsigned char in_rm;
  } sfmt_movw5_compact;
  struct { /*  */
    UINT f_imm4;
    UINT f_rm;
    unsigned char in_rm;
    unsigned char out_r0;
  } sfmt_movb10_compact;
  struct { /*  */
    UINT f_imm4;
    UINT f_rm;
    unsigned char in_r0;
    unsigned char in_rm;
  } sfmt_movb5_compact;
  struct { /*  */
    UINT f_rn;
    unsigned char in_rn;
    unsigned char out_fpul;
    unsigned char out_rn;
  } sfmt_ldsl_fpul_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_fmovm;
    unsigned char out_fmovn;
  } sfmt_fmov1_compact;
  struct { /*  */
    UINT f_imm8;
    UINT f_rn;
    unsigned char in_rn;
    unsigned char out_rn;
  } sfmt_addi_compact;
  struct { /*  */
    SI f_imm4x4;
    UINT f_rm;
    UINT f_rn;
    unsigned char in_rm;
    unsigned char out_rn;
  } sfmt_movl11_compact;
  struct { /*  */
    SI f_imm4x4;
    UINT f_rm;
    UINT f_rn;
    unsigned char in_rm;
    unsigned char in_rn;
  } sfmt_movl5_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_r0;
    unsigned char in_rm;
    unsigned char out_rn;
  } sfmt_movb8_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_r0;
    unsigned char in_rm;
    unsigned char in_rn;
  } sfmt_movb3_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_fmovm;
    unsigned char in_r0;
    unsigned char in_rn;
  } sfmt_fmov7_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_fmovm;
    unsigned char in_rn;
    unsigned char out_rn;
  } sfmt_fmov6_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_r0;
    unsigned char in_rm;
    unsigned char out_fmovn;
  } sfmt_fmov4_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_rm;
    unsigned char out_fmovn;
    unsigned char out_rm;
  } sfmt_fmov3_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_fsdm;
    unsigned char in_fsdn;
    unsigned char out_fsdn;
  } sfmt_fadd_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_rm64;
    unsigned char in_rn64;
    unsigned char out_rn64;
  } sfmt_and_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_rm;
    unsigned char in_rn;
    unsigned char out_rm;
    unsigned char out_rn;
  } sfmt_macl_compact;
  struct { /*  */
    UINT f_rm;
    UINT f_rn;
    unsigned char in_fr0;
    unsigned char in_frm;
    unsigned char in_frn;
    unsigned char out_frn;
  } sfmt_fmac_compact;
  // This one is for chain/cti-chain virtual insns.
  struct {
    // Number of insns in pbb.
    unsigned insn_count;
    // This is used by chain insns and by untaken conditional branches.
    sh2e_scache* next;
    sh2e_scache* branch_target;
  } chain;
  // This one is for `before' virtual insns.
  struct {
    // The cache entry of the real insn.
    sh2e_scache* insn;
  } before;
};

// Simulator instruction cache.

struct sh2e_scache {
  // executor
  union {
    cgoto_label cgoto;
    sh2e_sem_fn* fn;
  } execute;

  // PC of this instruction.
  PCADDR addr;

  // instruction class
  sh2e_idesc* idesc;

  // argument buffer
  sh2e_sem_fields fields;


  // writeback flags
  // Only used if profiling or parallel execution support enabled during
  // file generation.
  unsigned long long written;


  // decode given instruction
  void decode (sh2e_cpu* current_cpu, PCADDR pc, sh2e_insn_word base_insn, sh2e_insn_word entire_insn);
};

} // end sh2e namespace

// Decls of each semantic fn.

using sh2e::sh2e_sem_fn;
extern sh2e_sem_fn sh2e_sem_x_invalid;
extern sh2e_sem_fn sh2e_sem_add_compact;
extern sh2e_sem_fn sh2e_sem_addi_compact;
extern sh2e_sem_fn sh2e_sem_addc_compact;
extern sh2e_sem_fn sh2e_sem_addv_compact;
extern sh2e_sem_fn sh2e_sem_and_compact;
extern sh2e_sem_fn sh2e_sem_andi_compact;
extern sh2e_sem_fn sh2e_sem_andb_compact;
extern sh2e_sem_fn sh2e_sem_bf_compact;
extern sh2e_sem_fn sh2e_sem_bfs_compact;
extern sh2e_sem_fn sh2e_sem_bra_compact;
extern sh2e_sem_fn sh2e_sem_braf_compact;
extern sh2e_sem_fn sh2e_sem_bsr_compact;
extern sh2e_sem_fn sh2e_sem_bsrf_compact;
extern sh2e_sem_fn sh2e_sem_bt_compact;
extern sh2e_sem_fn sh2e_sem_bts_compact;
extern sh2e_sem_fn sh2e_sem_clrmac_compact;
extern sh2e_sem_fn sh2e_sem_clrt_compact;
extern sh2e_sem_fn sh2e_sem_cmpeq_compact;
extern sh2e_sem_fn sh2e_sem_cmpeqi_compact;
extern sh2e_sem_fn sh2e_sem_cmpge_compact;
extern sh2e_sem_fn sh2e_sem_cmpgt_compact;
extern sh2e_sem_fn sh2e_sem_cmphi_compact;
extern sh2e_sem_fn sh2e_sem_cmphs_compact;
extern sh2e_sem_fn sh2e_sem_cmppl_compact;
extern sh2e_sem_fn sh2e_sem_cmppz_compact;
extern sh2e_sem_fn sh2e_sem_cmpstr_compact;
extern sh2e_sem_fn sh2e_sem_div0s_compact;
extern sh2e_sem_fn sh2e_sem_div0u_compact;
extern sh2e_sem_fn sh2e_sem_div1_compact;
extern sh2e_sem_fn sh2e_sem_dmulsl_compact;
extern sh2e_sem_fn sh2e_sem_dmulul_compact;
extern sh2e_sem_fn sh2e_sem_dt_compact;
extern sh2e_sem_fn sh2e_sem_extsb_compact;
extern sh2e_sem_fn sh2e_sem_extsw_compact;
extern sh2e_sem_fn sh2e_sem_extub_compact;
extern sh2e_sem_fn sh2e_sem_extuw_compact;
extern sh2e_sem_fn sh2e_sem_fabs_compact;
extern sh2e_sem_fn sh2e_sem_fadd_compact;
extern sh2e_sem_fn sh2e_sem_fcmpeq_compact;
extern sh2e_sem_fn sh2e_sem_fcmpgt_compact;
extern sh2e_sem_fn sh2e_sem_fdiv_compact;
extern sh2e_sem_fn sh2e_sem_flds_compact;
extern sh2e_sem_fn sh2e_sem_fldi0_compact;
extern sh2e_sem_fn sh2e_sem_fldi1_compact;
extern sh2e_sem_fn sh2e_sem_float_compact;
extern sh2e_sem_fn sh2e_sem_fmac_compact;
extern sh2e_sem_fn sh2e_sem_fmov1_compact;
extern sh2e_sem_fn sh2e_sem_fmov2_compact;
extern sh2e_sem_fn sh2e_sem_fmov3_compact;
extern sh2e_sem_fn sh2e_sem_fmov4_compact;
extern sh2e_sem_fn sh2e_sem_fmov5_compact;
extern sh2e_sem_fn sh2e_sem_fmov6_compact;
extern sh2e_sem_fn sh2e_sem_fmov7_compact;
extern sh2e_sem_fn sh2e_sem_fmul_compact;
extern sh2e_sem_fn sh2e_sem_fneg_compact;
extern sh2e_sem_fn sh2e_sem_frchg_compact;
extern sh2e_sem_fn sh2e_sem_fschg_compact;
extern sh2e_sem_fn sh2e_sem_fsts_compact;
extern sh2e_sem_fn sh2e_sem_fsub_compact;
extern sh2e_sem_fn sh2e_sem_ftrc_compact;
extern sh2e_sem_fn sh2e_sem_jmp_compact;
extern sh2e_sem_fn sh2e_sem_jsr_compact;
extern sh2e_sem_fn sh2e_sem_ldc_gbr_compact;
extern sh2e_sem_fn sh2e_sem_ldc_vbr_compact;
extern sh2e_sem_fn sh2e_sem_ldc_sr_compact;
extern sh2e_sem_fn sh2e_sem_ldcl_gbr_compact;
extern sh2e_sem_fn sh2e_sem_ldcl_vbr_compact;
extern sh2e_sem_fn sh2e_sem_lds_fpscr_compact;
extern sh2e_sem_fn sh2e_sem_ldsl_fpscr_compact;
extern sh2e_sem_fn sh2e_sem_lds_fpul_compact;
extern sh2e_sem_fn sh2e_sem_ldsl_fpul_compact;
extern sh2e_sem_fn sh2e_sem_lds_mach_compact;
extern sh2e_sem_fn sh2e_sem_ldsl_mach_compact;
extern sh2e_sem_fn sh2e_sem_lds_macl_compact;
extern sh2e_sem_fn sh2e_sem_ldsl_macl_compact;
extern sh2e_sem_fn sh2e_sem_lds_pr_compact;
extern sh2e_sem_fn sh2e_sem_ldsl_pr_compact;
extern sh2e_sem_fn sh2e_sem_macl_compact;
extern sh2e_sem_fn sh2e_sem_macw_compact;
extern sh2e_sem_fn sh2e_sem_mov_compact;
extern sh2e_sem_fn sh2e_sem_movi_compact;
extern sh2e_sem_fn sh2e_sem_movb1_compact;
extern sh2e_sem_fn sh2e_sem_movb2_compact;
extern sh2e_sem_fn sh2e_sem_movb3_compact;
extern sh2e_sem_fn sh2e_sem_movb4_compact;
extern sh2e_sem_fn sh2e_sem_movb5_compact;
extern sh2e_sem_fn sh2e_sem_movb6_compact;
extern sh2e_sem_fn sh2e_sem_movb7_compact;
extern sh2e_sem_fn sh2e_sem_movb8_compact;
extern sh2e_sem_fn sh2e_sem_movb9_compact;
extern sh2e_sem_fn sh2e_sem_movb10_compact;
extern sh2e_sem_fn sh2e_sem_movl1_compact;
extern sh2e_sem_fn sh2e_sem_movl2_compact;
extern sh2e_sem_fn sh2e_sem_movl3_compact;
extern sh2e_sem_fn sh2e_sem_movl4_compact;
extern sh2e_sem_fn sh2e_sem_movl5_compact;
extern sh2e_sem_fn sh2e_sem_movl6_compact;
extern sh2e_sem_fn sh2e_sem_movl7_compact;
extern sh2e_sem_fn sh2e_sem_movl8_compact;
extern sh2e_sem_fn sh2e_sem_movl9_compact;
extern sh2e_sem_fn sh2e_sem_movl10_compact;
extern sh2e_sem_fn sh2e_sem_movl11_compact;
extern sh2e_sem_fn sh2e_sem_movw1_compact;
extern sh2e_sem_fn sh2e_sem_movw2_compact;
extern sh2e_sem_fn sh2e_sem_movw3_compact;
extern sh2e_sem_fn sh2e_sem_movw4_compact;
extern sh2e_sem_fn sh2e_sem_movw5_compact;
extern sh2e_sem_fn sh2e_sem_movw6_compact;
extern sh2e_sem_fn sh2e_sem_movw7_compact;
extern sh2e_sem_fn sh2e_sem_movw8_compact;
extern sh2e_sem_fn sh2e_sem_movw9_compact;
extern sh2e_sem_fn sh2e_sem_movw10_compact;
extern sh2e_sem_fn sh2e_sem_movw11_compact;
extern sh2e_sem_fn sh2e_sem_mova_compact;
extern sh2e_sem_fn sh2e_sem_movt_compact;
extern sh2e_sem_fn sh2e_sem_mull_compact;
extern sh2e_sem_fn sh2e_sem_mulsw_compact;
extern sh2e_sem_fn sh2e_sem_muluw_compact;
extern sh2e_sem_fn sh2e_sem_neg_compact;
extern sh2e_sem_fn sh2e_sem_negc_compact;
extern sh2e_sem_fn sh2e_sem_nop_compact;
extern sh2e_sem_fn sh2e_sem_not_compact;
extern sh2e_sem_fn sh2e_sem_or_compact;
extern sh2e_sem_fn sh2e_sem_ori_compact;
extern sh2e_sem_fn sh2e_sem_orb_compact;
extern sh2e_sem_fn sh2e_sem_rotcl_compact;
extern sh2e_sem_fn sh2e_sem_rotcr_compact;
extern sh2e_sem_fn sh2e_sem_rotl_compact;
extern sh2e_sem_fn sh2e_sem_rotr_compact;
extern sh2e_sem_fn sh2e_sem_rts_compact;
extern sh2e_sem_fn sh2e_sem_sett_compact;
extern sh2e_sem_fn sh2e_sem_shal_compact;
extern sh2e_sem_fn sh2e_sem_shar_compact;
extern sh2e_sem_fn sh2e_sem_shll_compact;
extern sh2e_sem_fn sh2e_sem_shll2_compact;
extern sh2e_sem_fn sh2e_sem_shll8_compact;
extern sh2e_sem_fn sh2e_sem_shll16_compact;
extern sh2e_sem_fn sh2e_sem_shlr_compact;
extern sh2e_sem_fn sh2e_sem_shlr2_compact;
extern sh2e_sem_fn sh2e_sem_shlr8_compact;
extern sh2e_sem_fn sh2e_sem_shlr16_compact;
extern sh2e_sem_fn sh2e_sem_stc_gbr_compact;
extern sh2e_sem_fn sh2e_sem_stc_vbr_compact;
extern sh2e_sem_fn sh2e_sem_stcl_gbr_compact;
extern sh2e_sem_fn sh2e_sem_stcl_vbr_compact;
extern sh2e_sem_fn sh2e_sem_sts_fpscr_compact;
extern sh2e_sem_fn sh2e_sem_stsl_fpscr_compact;
extern sh2e_sem_fn sh2e_sem_sts_fpul_compact;
extern sh2e_sem_fn sh2e_sem_stsl_fpul_compact;
extern sh2e_sem_fn sh2e_sem_sts_mach_compact;
extern sh2e_sem_fn sh2e_sem_stsl_mach_compact;
extern sh2e_sem_fn sh2e_sem_sts_macl_compact;
extern sh2e_sem_fn sh2e_sem_stsl_macl_compact;
extern sh2e_sem_fn sh2e_sem_sts_pr_compact;
extern sh2e_sem_fn sh2e_sem_stsl_pr_compact;
extern sh2e_sem_fn sh2e_sem_sub_compact;
extern sh2e_sem_fn sh2e_sem_subc_compact;
extern sh2e_sem_fn sh2e_sem_subv_compact;
extern sh2e_sem_fn sh2e_sem_swapb_compact;
extern sh2e_sem_fn sh2e_sem_swapw_compact;
extern sh2e_sem_fn sh2e_sem_tasb_compact;
extern sh2e_sem_fn sh2e_sem_trapa_compact;
extern sh2e_sem_fn sh2e_sem_tst_compact;
extern sh2e_sem_fn sh2e_sem_tsti_compact;
extern sh2e_sem_fn sh2e_sem_tstb_compact;
extern sh2e_sem_fn sh2e_sem_xor_compact;
extern sh2e_sem_fn sh2e_sem_xori_compact;
extern sh2e_sem_fn sh2e_sem_xorb_compact;
extern sh2e_sem_fn sh2e_sem_xtrct_compact;

#endif /* SH2E_DECODE_H */
