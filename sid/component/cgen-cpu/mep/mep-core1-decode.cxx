/* Simulator instruction decoder for mepcore1.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2007 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/


#if HAVE_CONFIG_H
#include "config.h"
#endif
#include "mep_ext1.h"

using namespace mep_ext1; // FIXME: namespace organization still wip


// The instruction descriptor array. 

mepcore1_idesc mepcore1_idesc::idesc_table[MEPCORE1_INSN_RI_26 + 1] =
{
  { mepcore1_sem_x_invalid, "X_INVALID", MEPCORE1_INSN_X_INVALID, { 0|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), { 1, "\x40" }, 0, CONFIG_NONE } },
  { mepcore1_sem_stcb_r, "STCB_R", MEPCORE1_INSN_STCB_R, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldcb_r, "LDCB_R", MEPCORE1_INSN_LDCB_R, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 3, CONFIG_NONE } },
  { mepcore1_sem_pref, "PREF", MEPCORE1_INSN_PREF, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_prefd, "PREFD", MEPCORE1_INSN_PREFD, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_casb3, "CASB3", MEPCORE1_INSN_CASB3, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN)|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_cash3, "CASH3", MEPCORE1_INSN_CASH3, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN)|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_casw3, "CASW3", MEPCORE1_INSN_CASW3, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN)|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sbcp, "SBCP", MEPCORE1_INSN_SBCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbcp, "LBCP", MEPCORE1_INSN_LBCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbucp, "LBUCP", MEPCORE1_INSN_LBUCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_shcp, "SHCP", MEPCORE1_INSN_SHCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhcp, "LHCP", MEPCORE1_INSN_LHCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhucp, "LHUCP", MEPCORE1_INSN_LHUCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbucpa, "LBUCPA", MEPCORE1_INSN_LBUCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhucpa, "LHUCPA", MEPCORE1_INSN_LHUCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbucpm0, "LBUCPM0", MEPCORE1_INSN_LBUCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhucpm0, "LHUCPM0", MEPCORE1_INSN_LHUCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbucpm1, "LBUCPM1", MEPCORE1_INSN_LBUCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhucpm1, "LHUCPM1", MEPCORE1_INSN_LHUCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_uci, "UCI", MEPCORE1_INSN_UCI, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_dsp, "DSP", MEPCORE1_INSN_DSP, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_C5), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sb, "SB", MEPCORE1_INSN_SB, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sh, "SH", MEPCORE1_INSN_SH, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sw, "SW", MEPCORE1_INSN_SW, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lb, "LB", MEPCORE1_INSN_LB, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lh, "LH", MEPCORE1_INSN_LH, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lw, "LW", MEPCORE1_INSN_LW, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lbu, "LBU", MEPCORE1_INSN_LBU, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lhu, "LHU", MEPCORE1_INSN_LHU, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_sw_sp, "SW_SP", MEPCORE1_INSN_SW_SP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lw_sp, "LW_SP", MEPCORE1_INSN_LW_SP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_sb_tp, "SB_TP", MEPCORE1_INSN_SB_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sh_tp, "SH_TP", MEPCORE1_INSN_SH_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sw_tp, "SW_TP", MEPCORE1_INSN_SW_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lb_tp, "LB_TP", MEPCORE1_INSN_LB_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lh_tp, "LH_TP", MEPCORE1_INSN_LH_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lw_tp, "LW_TP", MEPCORE1_INSN_LW_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lbu_tp, "LBU_TP", MEPCORE1_INSN_LBU_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lhu_tp, "LHU_TP", MEPCORE1_INSN_LHU_TP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_sb16, "SB16", MEPCORE1_INSN_SB16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sh16, "SH16", MEPCORE1_INSN_SH16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sw16, "SW16", MEPCORE1_INSN_SW16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lb16, "LB16", MEPCORE1_INSN_LB16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lh16, "LH16", MEPCORE1_INSN_LH16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lw16, "LW16", MEPCORE1_INSN_LW16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lbu16, "LBU16", MEPCORE1_INSN_LBU16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_lhu16, "LHU16", MEPCORE1_INSN_LHU16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_sw24, "SW24", MEPCORE1_INSN_SW24, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lw24, "LW24", MEPCORE1_INSN_LW24, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_extb, "EXTB", MEPCORE1_INSN_EXTB, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_exth, "EXTH", MEPCORE1_INSN_EXTH, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_extub, "EXTUB", MEPCORE1_INSN_EXTUB, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_extuh, "EXTUH", MEPCORE1_INSN_EXTUH, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ssarb, "SSARB", MEPCORE1_INSN_SSARB, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_mov, "MOV", MEPCORE1_INSN_MOV, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_movi8, "MOVI8", MEPCORE1_INSN_MOVI8, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_movi16, "MOVI16", MEPCORE1_INSN_MOVI16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_movu24, "MOVU24", MEPCORE1_INSN_MOVU24, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_movu16, "MOVU16", MEPCORE1_INSN_MOVU16, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_movh, "MOVH", MEPCORE1_INSN_MOVH, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_add3, "ADD3", MEPCORE1_INSN_ADD3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_add, "ADD", MEPCORE1_INSN_ADD, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_add3i, "ADD3I", MEPCORE1_INSN_ADD3I, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_advck3, "ADVCK3", MEPCORE1_INSN_ADVCK3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sub, "SUB", MEPCORE1_INSN_SUB, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sbvck3, "SBVCK3", MEPCORE1_INSN_SBVCK3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_neg, "NEG", MEPCORE1_INSN_NEG, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_slt3, "SLT3", MEPCORE1_INSN_SLT3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sltu3, "SLTU3", MEPCORE1_INSN_SLTU3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_slt3i, "SLT3I", MEPCORE1_INSN_SLT3I, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sltu3i, "SLTU3I", MEPCORE1_INSN_SLTU3I, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sl1ad3, "SL1AD3", MEPCORE1_INSN_SL1AD3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sl2ad3, "SL2AD3", MEPCORE1_INSN_SL2AD3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_add3x, "ADD3X", MEPCORE1_INSN_ADD3X, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_slt3x, "SLT3X", MEPCORE1_INSN_SLT3X, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sltu3x, "SLTU3X", MEPCORE1_INSN_SLTU3X, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_or, "OR", MEPCORE1_INSN_OR, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_and, "AND", MEPCORE1_INSN_AND, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_xor, "XOR", MEPCORE1_INSN_XOR, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_nor, "NOR", MEPCORE1_INSN_NOR, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_or3, "OR3", MEPCORE1_INSN_OR3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_and3, "AND3", MEPCORE1_INSN_AND3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_xor3, "XOR3", MEPCORE1_INSN_XOR3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sra, "SRA", MEPCORE1_INSN_SRA, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_srl, "SRL", MEPCORE1_INSN_SRL, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sll, "SLL", MEPCORE1_INSN_SLL, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_srai, "SRAI", MEPCORE1_INSN_SRAI, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_srli, "SRLI", MEPCORE1_INSN_SRLI, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_slli, "SLLI", MEPCORE1_INSN_SLLI, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sll3, "SLL3", MEPCORE1_INSN_SLL3, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_fsft, "FSFT", MEPCORE1_INSN_FSFT, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bra, "BRA", MEPCORE1_INSN_BRA, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_beqz, "BEQZ", MEPCORE1_INSN_BEQZ, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bnez, "BNEZ", MEPCORE1_INSN_BNEZ, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_beqi, "BEQI", MEPCORE1_INSN_BEQI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bnei, "BNEI", MEPCORE1_INSN_BNEI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_blti, "BLTI", MEPCORE1_INSN_BLTI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bgei, "BGEI", MEPCORE1_INSN_BGEI, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_beq, "BEQ", MEPCORE1_INSN_BEQ, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bne, "BNE", MEPCORE1_INSN_BNE, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bsr12, "BSR12", MEPCORE1_INSN_BSR12, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bsr24, "BSR24", MEPCORE1_INSN_BSR24, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_jmp, "JMP", MEPCORE1_INSN_JMP, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_jmp24, "JMP24", MEPCORE1_INSN_JMP24, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_jsr, "JSR", MEPCORE1_INSN_JSR, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ret, "RET", MEPCORE1_INSN_RET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_repeat, "REPEAT", MEPCORE1_INSN_REPEAT, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_erepeat, "EREPEAT", MEPCORE1_INSN_EREPEAT, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_stc_lp, "STC_LP", MEPCORE1_INSN_STC_LP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_stc_hi, "STC_HI", MEPCORE1_INSN_STC_HI, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_stc_lo, "STC_LO", MEPCORE1_INSN_STC_LO, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_stc, "STC", MEPCORE1_INSN_STC, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldc_lp, "LDC_LP", MEPCORE1_INSN_LDC_LP, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldc_hi, "LDC_HI", MEPCORE1_INSN_LDC_HI, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldc_lo, "LDC_LO", MEPCORE1_INSN_LDC_LO, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldc, "LDC", MEPCORE1_INSN_LDC, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 2, CONFIG_NONE } },
  { mepcore1_sem_di, "DI", MEPCORE1_INSN_DI, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ei, "EI", MEPCORE1_INSN_EI, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_reti, "RETI", MEPCORE1_INSN_RETI, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_halt, "HALT", MEPCORE1_INSN_HALT, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sleep, "SLEEP", MEPCORE1_INSN_SLEEP, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swi, "SWI", MEPCORE1_INSN_SWI, { 0|(1<<CGEN_INSN_VOLATILE)|(1<<CGEN_INSN_MAY_TRAP), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_break, "BREAK", MEPCORE1_INSN_BREAK, { 0|(1<<CGEN_INSN_VOLATILE)|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_syncm, "SYNCM", MEPCORE1_INSN_SYNCM, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_stcb, "STCB", MEPCORE1_INSN_STCB, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldcb, "LDCB", MEPCORE1_INSN_LDCB, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 3, CONFIG_NONE } },
  { mepcore1_sem_bsetm, "BSETM", MEPCORE1_INSN_BSETM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bclrm, "BCLRM", MEPCORE1_INSN_BCLRM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bnotm, "BNOTM", MEPCORE1_INSN_BNOTM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_btstm, "BTSTM", MEPCORE1_INSN_BTSTM, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_tas, "TAS", MEPCORE1_INSN_TAS, { 0|(1<<CGEN_INSN_OPTIONAL_BIT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_cache, "CACHE", MEPCORE1_INSN_CACHE, { 0|(1<<CGEN_INSN_VOLATILE), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_mul, "MUL", MEPCORE1_INSN_MUL, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_mulu, "MULU", MEPCORE1_INSN_MULU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_mulr, "MULR", MEPCORE1_INSN_MULR, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 3, CONFIG_NONE } },
  { mepcore1_sem_mulru, "MULRU", MEPCORE1_INSN_MULRU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 3, CONFIG_NONE } },
  { mepcore1_sem_madd, "MADD", MEPCORE1_INSN_MADD, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_maddu, "MADDU", MEPCORE1_INSN_MADDU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_maddr, "MADDR", MEPCORE1_INSN_MADDR, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 3, CONFIG_NONE } },
  { mepcore1_sem_maddru, "MADDRU", MEPCORE1_INSN_MADDRU, { 0|(1<<CGEN_INSN_OPTIONAL_MUL_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 3, CONFIG_NONE } },
  { mepcore1_sem_div, "DIV", MEPCORE1_INSN_DIV, { 0|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_OPTIONAL_DIV_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 34, CONFIG_NONE } },
  { mepcore1_sem_divu, "DIVU", MEPCORE1_INSN_DIVU, { 0|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_OPTIONAL_DIV_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 34, CONFIG_NONE } },
  { mepcore1_sem_dret, "DRET", MEPCORE1_INSN_DRET, { 0|(1<<CGEN_INSN_OPTIONAL_DEBUG_INSN)|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_dbreak, "DBREAK", MEPCORE1_INSN_DBREAK, { 0|(1<<CGEN_INSN_VOLATILE)|(1<<CGEN_INSN_MAY_TRAP)|(1<<CGEN_INSN_OPTIONAL_DEBUG_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ldz, "LDZ", MEPCORE1_INSN_LDZ, { 0|(1<<CGEN_INSN_OPTIONAL_LDZ_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_abs, "ABS", MEPCORE1_INSN_ABS, { 0|(1<<CGEN_INSN_OPTIONAL_ABS_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ave, "AVE", MEPCORE1_INSN_AVE, { 0|(1<<CGEN_INSN_OPTIONAL_AVE_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_min, "MIN", MEPCORE1_INSN_MIN, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_max, "MAX", MEPCORE1_INSN_MAX, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_minu, "MINU", MEPCORE1_INSN_MINU, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_maxu, "MAXU", MEPCORE1_INSN_MAXU, { 0|(1<<CGEN_INSN_OPTIONAL_MINMAX_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_clip, "CLIP", MEPCORE1_INSN_CLIP, { 0|(1<<CGEN_INSN_OPTIONAL_CLIP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_clipu, "CLIPU", MEPCORE1_INSN_CLIPU, { 0|(1<<CGEN_INSN_OPTIONAL_CLIP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sadd, "SADD", MEPCORE1_INSN_SADD, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ssub, "SSUB", MEPCORE1_INSN_SSUB, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_saddu, "SADDU", MEPCORE1_INSN_SADDU, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ssubu, "SSUBU", MEPCORE1_INSN_SSUBU, { 0|(1<<CGEN_INSN_OPTIONAL_SAT_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swcp, "SWCP", MEPCORE1_INSN_SWCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lwcp, "LWCP", MEPCORE1_INSN_LWCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_smcp, "SMCP", MEPCORE1_INSN_SMCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lmcp, "LMCP", MEPCORE1_INSN_LMCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swcpi, "SWCPI", MEPCORE1_INSN_SWCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lwcpi, "LWCPI", MEPCORE1_INSN_LWCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_smcpi, "SMCPI", MEPCORE1_INSN_SMCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lmcpi, "LMCPI", MEPCORE1_INSN_LMCPI, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swcp16, "SWCP16", MEPCORE1_INSN_SWCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lwcp16, "LWCP16", MEPCORE1_INSN_LWCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_smcp16, "SMCP16", MEPCORE1_INSN_SMCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lmcp16, "LMCP16", MEPCORE1_INSN_LMCP16, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sbcpa, "SBCPA", MEPCORE1_INSN_SBCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbcpa, "LBCPA", MEPCORE1_INSN_LBCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_shcpa, "SHCPA", MEPCORE1_INSN_SHCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhcpa, "LHCPA", MEPCORE1_INSN_LHCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swcpa, "SWCPA", MEPCORE1_INSN_SWCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lwcpa, "LWCPA", MEPCORE1_INSN_LWCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_smcpa, "SMCPA", MEPCORE1_INSN_SMCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lmcpa, "LMCPA", MEPCORE1_INSN_LMCPA, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sbcpm0, "SBCPM0", MEPCORE1_INSN_SBCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbcpm0, "LBCPM0", MEPCORE1_INSN_LBCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_shcpm0, "SHCPM0", MEPCORE1_INSN_SHCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhcpm0, "LHCPM0", MEPCORE1_INSN_LHCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swcpm0, "SWCPM0", MEPCORE1_INSN_SWCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lwcpm0, "LWCPM0", MEPCORE1_INSN_LWCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_smcpm0, "SMCPM0", MEPCORE1_INSN_SMCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lmcpm0, "LMCPM0", MEPCORE1_INSN_LMCPM0, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sbcpm1, "SBCPM1", MEPCORE1_INSN_SBCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lbcpm1, "LBCPM1", MEPCORE1_INSN_LBCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_shcpm1, "SHCPM1", MEPCORE1_INSN_SHCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lhcpm1, "LHCPM1", MEPCORE1_INSN_LHCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_swcpm1, "SWCPM1", MEPCORE1_INSN_SWCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lwcpm1, "LWCPM1", MEPCORE1_INSN_LWCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_smcpm1, "SMCPM1", MEPCORE1_INSN_SMCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_lmcpm1, "LMCPM1", MEPCORE1_INSN_LMCPM1, { 0|(1<<CGEN_INSN_OPTIONAL_CP64_INSN)|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bcpeq, "BCPEQ", MEPCORE1_INSN_BCPEQ, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bcpne, "BCPNE", MEPCORE1_INSN_BCPNE, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bcpat, "BCPAT", MEPCORE1_INSN_BCPAT, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bcpaf, "BCPAF", MEPCORE1_INSN_BCPAF, { 0|(1<<CGEN_INSN_RELAXABLE)|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_synccp, "SYNCCP", MEPCORE1_INSN_SYNCCP, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_jsrv, "JSRV", MEPCORE1_INSN_JSRV, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_bsrv, "BSRV", MEPCORE1_INSN_BSRV, { 0|(1<<CGEN_INSN_OPTIONAL_CP_INSN)|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_sim_syscall, "SIM_SYSCALL", MEPCORE1_INSN_SIM_SYSCALL, { 0, (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_0, "RI_0", MEPCORE1_INSN_RI_0, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_1, "RI_1", MEPCORE1_INSN_RI_1, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_2, "RI_2", MEPCORE1_INSN_RI_2, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_3, "RI_3", MEPCORE1_INSN_RI_3, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_4, "RI_4", MEPCORE1_INSN_RI_4, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_5, "RI_5", MEPCORE1_INSN_RI_5, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_6, "RI_6", MEPCORE1_INSN_RI_6, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_7, "RI_7", MEPCORE1_INSN_RI_7, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_8, "RI_8", MEPCORE1_INSN_RI_8, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_9, "RI_9", MEPCORE1_INSN_RI_9, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_10, "RI_10", MEPCORE1_INSN_RI_10, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_11, "RI_11", MEPCORE1_INSN_RI_11, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_12, "RI_12", MEPCORE1_INSN_RI_12, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_13, "RI_13", MEPCORE1_INSN_RI_13, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_14, "RI_14", MEPCORE1_INSN_RI_14, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_15, "RI_15", MEPCORE1_INSN_RI_15, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_17, "RI_17", MEPCORE1_INSN_RI_17, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_20, "RI_20", MEPCORE1_INSN_RI_20, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_21, "RI_21", MEPCORE1_INSN_RI_21, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_22, "RI_22", MEPCORE1_INSN_RI_22, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_23, "RI_23", MEPCORE1_INSN_RI_23, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },
  { mepcore1_sem_ri_26, "RI_26", MEPCORE1_INSN_RI_26, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), { 1, "\xc0" }, 0, CONFIG_NONE } },

};

// Given a canonical virtual insn id, return the target specific one.

mepcore1_insn_type
mepcore1_idesc::lookup_virtual (virtual_insn_type vit)
{
  switch (vit)
    {
      case VIRTUAL_INSN_INVALID: return MEPCORE1_INSN_X_INVALID;
      case VIRTUAL_INSN_COND: return MEPCORE1_INSN_X_INVALID;
    }
  abort ();
}


// Declare extractor functions

static void
mepcore1_extract_sfmt_empty (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_stcb_r (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ldcb_r (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_pref (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_prefd (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_casb3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sbcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_shcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbucpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhucpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbucpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhucpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbucpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhucpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_uci (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sh (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sw (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lh (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lw (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbu (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhu (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sw_sp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lw_sp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sb_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sh_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sw_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lb_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lh_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lw_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbu_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhu_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sb16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sh16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sw16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lb16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lh16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lw16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lbu16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lhu16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sw24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lw24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_extb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_exth (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_extub (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ssarb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_mov (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_movi8 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_movi16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_movu24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_movu16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_add3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_add (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_add3i (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_advck3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sub (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_slt3i (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sl1ad3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_add3x (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_slt3x (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sltu3x (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_or3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_srai (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sll3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_fsft (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_bra (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_beqz (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_beqi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_beq (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_bsr12 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_bsr24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_jmp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_jmp24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_jsr (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ret (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_repeat (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_erepeat (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_stc_lp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_stc_hi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_stc_lo (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_stc (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ldc_lp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ldc_hi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ldc_lo (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ldc (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_di (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_reti (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_halt (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sleep (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_break (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_stcb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_bsetm (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_btstm (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_tas (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_mul (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_mulr (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_madd (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_maddr (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_div (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_dret (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_dbreak (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_ldz (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_abs (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_min (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_clip (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_clipu (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lwcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_smcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lmcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lwcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_smcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lmcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lwcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_smcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lmcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sbcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_shcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lwcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_smcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lmcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sbcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_shcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lwcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_smcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lmcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sbcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_shcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_swcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lwcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_smcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_lmcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_bcpeq (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_synccp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);
static void
mepcore1_extract_sfmt_sim_syscall (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn);

// Fetch & decode instruction
void
mepcore1_scache::decode (mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn)
{
  /* Result of decoder.  */
  MEPCORE1_INSN_TYPE itype;

  {
    mepcore1_insn_word insn = base_insn;

    {
      unsigned int val = (((insn >> 24) & (15 << 4)) | ((insn >> 16) & (15 << 0)));
      switch (val)
      {
      case 0 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x0)
          { itype = MEPCORE1_INSN_MOV; mepcore1_extract_sfmt_mov (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 1 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1)
          { itype = MEPCORE1_INSN_NEG; mepcore1_extract_sfmt_mov (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 2 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2)
          { itype = MEPCORE1_INSN_SLT3; mepcore1_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 3 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3)
          { itype = MEPCORE1_INSN_SLTU3; mepcore1_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 4 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x4)
          { itype = MEPCORE1_INSN_SUB; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 5 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x5)
          { itype = MEPCORE1_INSN_SBVCK3; mepcore1_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 6 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x6)
          { itype = MEPCORE1_INSN_RI_0; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 7 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7)
          { itype = MEPCORE1_INSN_ADVCK3; mepcore1_extract_sfmt_advck3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 8 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x8)
          { itype = MEPCORE1_INSN_SB; mepcore1_extract_sfmt_sb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 9 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x9)
          { itype = MEPCORE1_INSN_SH; mepcore1_extract_sfmt_sh (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 10 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xa)
          { itype = MEPCORE1_INSN_SW; mepcore1_extract_sfmt_sw (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 11 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xb)
          { itype = MEPCORE1_INSN_LBU; mepcore1_extract_sfmt_lbu (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 12 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xc)
          { itype = MEPCORE1_INSN_LB; mepcore1_extract_sfmt_lb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 13 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xd)
          { itype = MEPCORE1_INSN_LH; mepcore1_extract_sfmt_lh (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 14 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xe)
          { itype = MEPCORE1_INSN_LW; mepcore1_extract_sfmt_lw (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 15 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xf)
          { itype = MEPCORE1_INSN_LHU; mepcore1_extract_sfmt_lhu (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 16 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1000)
          { itype = MEPCORE1_INSN_OR; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 17 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1001)
          { itype = MEPCORE1_INSN_AND; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 18 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1002)
          { itype = MEPCORE1_INSN_XOR; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 19 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1003)
          { itype = MEPCORE1_INSN_NOR; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 20 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1004)
          { itype = MEPCORE1_INSN_MUL; mepcore1_extract_sfmt_mul (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 21 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1005)
          { itype = MEPCORE1_INSN_MULU; mepcore1_extract_sfmt_mul (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 22 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1006)
          { itype = MEPCORE1_INSN_MULR; mepcore1_extract_sfmt_mulr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 23 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1007)
          { itype = MEPCORE1_INSN_MULRU; mepcore1_extract_sfmt_mulr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 24 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1008)
          { itype = MEPCORE1_INSN_DIV; mepcore1_extract_sfmt_div (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 25 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x1009)
          { itype = MEPCORE1_INSN_DIVU; mepcore1_extract_sfmt_div (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 26 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x100a)
          { itype = MEPCORE1_INSN_RI_1; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 27 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x100b)
          { itype = MEPCORE1_INSN_RI_2; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 28 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xfc0f) == 0x100c)
          { itype = MEPCORE1_INSN_SSARB; mepcore1_extract_sfmt_ssarb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 29 :
        {
          unsigned int val = (((insn >> 22) & (1 << 1)) | ((insn >> 21) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x100d)
              { itype = MEPCORE1_INSN_EXTB; mepcore1_extract_sfmt_extb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x102d)
              { itype = MEPCORE1_INSN_EXTH; mepcore1_extract_sfmt_exth (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x108d)
              { itype = MEPCORE1_INSN_EXTUB; mepcore1_extract_sfmt_extub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x10ad)
              { itype = MEPCORE1_INSN_EXTUH; mepcore1_extract_sfmt_extub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 30 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xff0f) == 0x100e)
          { itype = MEPCORE1_INSN_JMP; mepcore1_extract_sfmt_jmp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 31 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xff0f) == 0x100f)
              { itype = MEPCORE1_INSN_JSR; mepcore1_extract_sfmt_jsr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xff0f) == 0x180f)
              { itype = MEPCORE1_INSN_JSRV; mepcore1_extract_sfmt_jsr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 32 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2000)
          { itype = MEPCORE1_INSN_BSETM; mepcore1_extract_sfmt_bsetm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 33 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2001)
          { itype = MEPCORE1_INSN_BCLRM; mepcore1_extract_sfmt_bsetm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 34 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2002)
          { itype = MEPCORE1_INSN_BNOTM; mepcore1_extract_sfmt_bsetm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 35 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf80f) == 0x2003)
          { itype = MEPCORE1_INSN_BTSTM; mepcore1_extract_sfmt_btstm (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 36 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2004)
          { itype = MEPCORE1_INSN_TAS; mepcore1_extract_sfmt_tas (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 37 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2005)
          { itype = MEPCORE1_INSN_RI_3; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 38 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2006)
          { itype = MEPCORE1_INSN_SL1AD3; mepcore1_extract_sfmt_sl1ad3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 39 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2007)
          { itype = MEPCORE1_INSN_SL2AD3; mepcore1_extract_sfmt_sl1ad3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 40 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2008)
          { itype = MEPCORE1_INSN_RI_4; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 41 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x2009)
          { itype = MEPCORE1_INSN_RI_5; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 42 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200a)
          { itype = MEPCORE1_INSN_RI_6; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 43 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200b)
          { itype = MEPCORE1_INSN_RI_7; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 44 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200c)
          { itype = MEPCORE1_INSN_SRL; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 45 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200d)
          { itype = MEPCORE1_INSN_SRA; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 46 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200e)
          { itype = MEPCORE1_INSN_SLL; mepcore1_extract_sfmt_sub (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 47 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x200f)
          { itype = MEPCORE1_INSN_FSFT; mepcore1_extract_sfmt_fsft (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 48 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3000)
          { itype = MEPCORE1_INSN_SWCPI; mepcore1_extract_sfmt_swcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 49 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3001)
          { itype = MEPCORE1_INSN_LWCPI; mepcore1_extract_sfmt_lwcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 50 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3002)
          { itype = MEPCORE1_INSN_SMCPI; mepcore1_extract_sfmt_smcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 51 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3003)
          { itype = MEPCORE1_INSN_LMCPI; mepcore1_extract_sfmt_lmcpi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 52 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3004)
          { itype = MEPCORE1_INSN_RI_8; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 53 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3005)
          { itype = MEPCORE1_INSN_RI_9; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 54 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3006)
          { itype = MEPCORE1_INSN_RI_10; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 55 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3007)
          { itype = MEPCORE1_INSN_RI_11; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 56 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3008)
          { itype = MEPCORE1_INSN_SWCP; mepcore1_extract_sfmt_swcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 57 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x3009)
          { itype = MEPCORE1_INSN_LWCP; mepcore1_extract_sfmt_lwcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 58 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300a)
          { itype = MEPCORE1_INSN_SMCP; mepcore1_extract_sfmt_smcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 59 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300b)
          { itype = MEPCORE1_INSN_LMCP; mepcore1_extract_sfmt_lmcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 60 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300c)
          { itype = MEPCORE1_INSN_RI_12; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 61 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300d)
          { itype = MEPCORE1_INSN_RI_13; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 62 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300e)
          { itype = MEPCORE1_INSN_RI_14; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 63 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x300f)
          { itype = MEPCORE1_INSN_RI_15; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 64 : /* fall through */
      case 68 : /* fall through */
      case 72 : /* fall through */
      case 76 :
        {
          unsigned int val = (((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf083) == 0x4000)
              { itype = MEPCORE1_INSN_ADD3I; mepcore1_extract_sfmt_add3i (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x4880)
              { itype = MEPCORE1_INSN_LBU_TP; mepcore1_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 65 : /* fall through */
      case 69 : /* fall through */
      case 73 : /* fall through */
      case 77 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf880) == 0x4880)
          { itype = MEPCORE1_INSN_LBU_TP; mepcore1_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 66 : /* fall through */
      case 70 : /* fall through */
      case 74 : /* fall through */
      case 78 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf083) == 0x4002)
              { itype = MEPCORE1_INSN_SW_SP; mepcore1_extract_sfmt_sw_sp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf883) == 0x4082)
              { itype = MEPCORE1_INSN_SW_TP; mepcore1_extract_sfmt_sw_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x4880)
              { itype = MEPCORE1_INSN_LBU_TP; mepcore1_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 67 : /* fall through */
      case 71 : /* fall through */
      case 75 : /* fall through */
      case 79 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf083) == 0x4003)
              { itype = MEPCORE1_INSN_LW_SP; mepcore1_extract_sfmt_lw_sp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf883) == 0x4083)
              { itype = MEPCORE1_INSN_LW_TP; mepcore1_extract_sfmt_lw_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x4880)
              { itype = MEPCORE1_INSN_LBU_TP; mepcore1_extract_sfmt_lbu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 80 : /* fall through */
      case 81 : /* fall through */
      case 82 : /* fall through */
      case 83 : /* fall through */
      case 84 : /* fall through */
      case 85 : /* fall through */
      case 86 : /* fall through */
      case 87 : /* fall through */
      case 88 : /* fall through */
      case 89 : /* fall through */
      case 90 : /* fall through */
      case 91 : /* fall through */
      case 92 : /* fall through */
      case 93 : /* fall through */
      case 94 : /* fall through */
      case 95 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf000) == 0x5000)
          { itype = MEPCORE1_INSN_MOVI8; mepcore1_extract_sfmt_movi8 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 96 : /* fall through */
      case 100 : /* fall through */
      case 104 : /* fall through */
      case 108 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf003) == 0x6000)
          { itype = MEPCORE1_INSN_ADD; mepcore1_extract_sfmt_add (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 97 : /* fall through */
      case 105 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6001)
          { itype = MEPCORE1_INSN_SLT3I; mepcore1_extract_sfmt_slt3i (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 98 : /* fall through */
      case 106 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6002)
          { itype = MEPCORE1_INSN_SRLI; mepcore1_extract_sfmt_srai (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 99 : /* fall through */
      case 107 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6003)
          { itype = MEPCORE1_INSN_SRAI; mepcore1_extract_sfmt_srai (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 101 : /* fall through */
      case 109 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6005)
          { itype = MEPCORE1_INSN_SLTU3I; mepcore1_extract_sfmt_slt3i (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 102 : /* fall through */
      case 110 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6006)
          { itype = MEPCORE1_INSN_SLLI; mepcore1_extract_sfmt_srai (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 103 : /* fall through */
      case 111 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf007) == 0x6007)
          { itype = MEPCORE1_INSN_SLL3; mepcore1_extract_sfmt_sll3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 112 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7000)
              { itype = MEPCORE1_INSN_DI; mepcore1_extract_sfmt_di (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7010)
              { itype = MEPCORE1_INSN_EI; mepcore1_extract_sfmt_di (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 : /* fall through */
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf8ef) == 0x7800)
              { itype = MEPCORE1_INSN_SIM_SYSCALL; mepcore1_extract_sfmt_sim_syscall (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 113 :
        {
          unsigned int val = (((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7011)
              { itype = MEPCORE1_INSN_SYNCM; mepcore1_extract_sfmt_sleep (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7021)
              { itype = MEPCORE1_INSN_SYNCCP; mepcore1_extract_sfmt_synccp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 114 :
        {
          unsigned int val = (((insn >> 20) & (7 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7002)
              { itype = MEPCORE1_INSN_RET; mepcore1_extract_sfmt_ret (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7012)
              { itype = MEPCORE1_INSN_RETI; mepcore1_extract_sfmt_reti (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7022)
              { itype = MEPCORE1_INSN_HALT; mepcore1_extract_sfmt_halt (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7032)
              { itype = MEPCORE1_INSN_BREAK; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7062)
              { itype = MEPCORE1_INSN_SLEEP; mepcore1_extract_sfmt_sleep (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 115 :
        {
          unsigned int val = (((insn >> 21) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7013)
              { itype = MEPCORE1_INSN_DRET; mepcore1_extract_sfmt_dret (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xffff) == 0x7033)
              { itype = MEPCORE1_INSN_DBREAK; mepcore1_extract_sfmt_dbreak (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 116 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7004)
          { itype = MEPCORE1_INSN_CACHE; mepcore1_extract_sfmt_pref (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 117 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7005)
          { itype = MEPCORE1_INSN_PREF; mepcore1_extract_sfmt_pref (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 118 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xffcf) == 0x7006)
          { itype = MEPCORE1_INSN_SWI; mepcore1_extract_sfmt_swi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 119 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x7007)
          { itype = MEPCORE1_INSN_RI_17; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 120 :
        {
          unsigned int val = (((insn >> 20) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf00e) == 0x7008)
              { itype = MEPCORE1_INSN_STC; mepcore1_extract_sfmt_stc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x7018)
              { itype = MEPCORE1_INSN_STC_LP; mepcore1_extract_sfmt_stc_lp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x7078)
              { itype = MEPCORE1_INSN_STC_HI; mepcore1_extract_sfmt_stc_hi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x7088)
              { itype = MEPCORE1_INSN_STC_LO; mepcore1_extract_sfmt_stc_lo (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 121 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00e) == 0x7008)
          { itype = MEPCORE1_INSN_STC; mepcore1_extract_sfmt_stc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 122 :
        {
          unsigned int val = (((insn >> 20) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf00e) == 0x700a)
              { itype = MEPCORE1_INSN_LDC; mepcore1_extract_sfmt_ldc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x701a)
              { itype = MEPCORE1_INSN_LDC_LP; mepcore1_extract_sfmt_ldc_lp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x707a)
              { itype = MEPCORE1_INSN_LDC_HI; mepcore1_extract_sfmt_ldc_hi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf0ff) == 0x708a)
              { itype = MEPCORE1_INSN_LDC_LO; mepcore1_extract_sfmt_ldc_lo (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 123 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00e) == 0x700a)
          { itype = MEPCORE1_INSN_LDC; mepcore1_extract_sfmt_ldc (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 124 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700c)
          { itype = MEPCORE1_INSN_STCB_R; mepcore1_extract_sfmt_stcb_r (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 125 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700d)
          { itype = MEPCORE1_INSN_LDCB_R; mepcore1_extract_sfmt_ldcb_r (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 126 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700e)
          { itype = MEPCORE1_INSN_RI_20; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 127 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0x700f)
          { itype = MEPCORE1_INSN_RI_21; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 128 : /* fall through */
      case 130 : /* fall through */
      case 132 : /* fall through */
      case 134 : /* fall through */
      case 136 : /* fall through */
      case 138 : /* fall through */
      case 140 : /* fall through */
      case 142 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8000)
              { itype = MEPCORE1_INSN_SB_TP; mepcore1_extract_sfmt_sb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf881) == 0x8080)
              { itype = MEPCORE1_INSN_SH_TP; mepcore1_extract_sfmt_sh_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8800)
              { itype = MEPCORE1_INSN_LB_TP; mepcore1_extract_sfmt_lb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf881) == 0x8880)
              { itype = MEPCORE1_INSN_LH_TP; mepcore1_extract_sfmt_lh_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 129 : /* fall through */
      case 131 : /* fall through */
      case 133 : /* fall through */
      case 135 : /* fall through */
      case 137 : /* fall through */
      case 139 : /* fall through */
      case 141 : /* fall through */
      case 143 :
        {
          unsigned int val = (((insn >> 26) & (1 << 1)) | ((insn >> 23) & (1 << 0)));
          switch (val)
          {
          case 0 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8000)
              { itype = MEPCORE1_INSN_SB_TP; mepcore1_extract_sfmt_sb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf880) == 0x8800)
              { itype = MEPCORE1_INSN_LB_TP; mepcore1_extract_sfmt_lb_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            entire_insn = entire_insn >> 16;
            if ((entire_insn & 0xf881) == 0x8881)
              { itype = MEPCORE1_INSN_LHU_TP; mepcore1_extract_sfmt_lhu_tp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 144 : /* fall through */
      case 145 : /* fall through */
      case 146 : /* fall through */
      case 147 : /* fall through */
      case 148 : /* fall through */
      case 149 : /* fall through */
      case 150 : /* fall through */
      case 151 : /* fall through */
      case 152 : /* fall through */
      case 153 : /* fall through */
      case 154 : /* fall through */
      case 155 : /* fall through */
      case 156 : /* fall through */
      case 157 : /* fall through */
      case 158 : /* fall through */
      case 159 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf000) == 0x9000)
          { itype = MEPCORE1_INSN_ADD3; mepcore1_extract_sfmt_add3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 160 : /* fall through */
      case 162 : /* fall through */
      case 164 : /* fall through */
      case 166 : /* fall through */
      case 168 : /* fall through */
      case 170 : /* fall through */
      case 172 : /* fall through */
      case 174 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xa000)
          { itype = MEPCORE1_INSN_BEQZ; mepcore1_extract_sfmt_beqz (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 161 : /* fall through */
      case 163 : /* fall through */
      case 165 : /* fall through */
      case 167 : /* fall through */
      case 169 : /* fall through */
      case 171 : /* fall through */
      case 173 : /* fall through */
      case 175 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xa001)
          { itype = MEPCORE1_INSN_BNEZ; mepcore1_extract_sfmt_beqz (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 176 : /* fall through */
      case 178 : /* fall through */
      case 180 : /* fall through */
      case 182 : /* fall through */
      case 184 : /* fall through */
      case 186 : /* fall through */
      case 188 : /* fall through */
      case 190 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xb000)
          { itype = MEPCORE1_INSN_BRA; mepcore1_extract_sfmt_bra (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 177 : /* fall through */
      case 179 : /* fall through */
      case 181 : /* fall through */
      case 183 : /* fall through */
      case 185 : /* fall through */
      case 187 : /* fall through */
      case 189 : /* fall through */
      case 191 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf001) == 0xb001)
          { itype = MEPCORE1_INSN_BSR12; mepcore1_extract_sfmt_bsr12 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 192 :
        if ((entire_insn & 0xf00f0000) == 0xc0000000)
          { itype = MEPCORE1_INSN_ADD3X; mepcore1_extract_sfmt_add3x (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 193 :
        {
          unsigned int val = (((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf0ff0000) == 0xc0010000)
              { itype = MEPCORE1_INSN_MOVI16; mepcore1_extract_sfmt_movi16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf0ff0000) == 0xc0110000)
              { itype = MEPCORE1_INSN_MOVU16; mepcore1_extract_sfmt_movu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf0ff0000) == 0xc0210000)
              { itype = MEPCORE1_INSN_MOVH; mepcore1_extract_sfmt_movu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 194 :
        if ((entire_insn & 0xf00f0000) == 0xc0020000)
          { itype = MEPCORE1_INSN_SLT3X; mepcore1_extract_sfmt_slt3x (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 195 :
        if ((entire_insn & 0xf00f0000) == 0xc0030000)
          { itype = MEPCORE1_INSN_SLTU3X; mepcore1_extract_sfmt_sltu3x (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 196 :
        if ((entire_insn & 0xf00f0000) == 0xc0040000)
          { itype = MEPCORE1_INSN_OR3; mepcore1_extract_sfmt_or3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 197 :
        if ((entire_insn & 0xf00f0000) == 0xc0050000)
          { itype = MEPCORE1_INSN_AND3; mepcore1_extract_sfmt_or3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 198 :
        if ((entire_insn & 0xf00f0000) == 0xc0060000)
          { itype = MEPCORE1_INSN_XOR3; mepcore1_extract_sfmt_or3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 199 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xc007)
          { itype = MEPCORE1_INSN_RI_22; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 200 :
        if ((entire_insn & 0xf00f0000) == 0xc0080000)
          { itype = MEPCORE1_INSN_SB16; mepcore1_extract_sfmt_sb16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 201 :
        if ((entire_insn & 0xf00f0000) == 0xc0090000)
          { itype = MEPCORE1_INSN_SH16; mepcore1_extract_sfmt_sh16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 202 :
        if ((entire_insn & 0xf00f0000) == 0xc00a0000)
          { itype = MEPCORE1_INSN_SW16; mepcore1_extract_sfmt_sw16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 203 :
        if ((entire_insn & 0xf00f0000) == 0xc00b0000)
          { itype = MEPCORE1_INSN_LBU16; mepcore1_extract_sfmt_lbu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 204 :
        if ((entire_insn & 0xf00f0000) == 0xc00c0000)
          { itype = MEPCORE1_INSN_LB16; mepcore1_extract_sfmt_lb16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 205 :
        if ((entire_insn & 0xf00f0000) == 0xc00d0000)
          { itype = MEPCORE1_INSN_LH16; mepcore1_extract_sfmt_lh16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 206 :
        if ((entire_insn & 0xf00f0000) == 0xc00e0000)
          { itype = MEPCORE1_INSN_LW16; mepcore1_extract_sfmt_lw16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 207 :
        if ((entire_insn & 0xf00f0000) == 0xc00f0000)
          { itype = MEPCORE1_INSN_LHU16; mepcore1_extract_sfmt_lhu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 208 : /* fall through */
      case 209 : /* fall through */
      case 210 : /* fall through */
      case 211 : /* fall through */
      case 218 : /* fall through */
      case 220 : /* fall through */
      case 221 : /* fall through */
      case 222 : /* fall through */
      case 223 :
        if ((entire_insn & 0xf8000000) == 0xd0000000)
          { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 212 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8040000)
              { itype = MEPCORE1_INSN_BCPEQ; mepcore1_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 213 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8050000)
              { itype = MEPCORE1_INSN_BCPNE; mepcore1_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 214 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8060000)
              { itype = MEPCORE1_INSN_BCPAT; mepcore1_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 215 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xff0f0000) == 0xd8070000)
              { itype = MEPCORE1_INSN_BCPAF; mepcore1_extract_sfmt_bcpeq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 216 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf80f0000) == 0xd8080000)
              { itype = MEPCORE1_INSN_JMP24; mepcore1_extract_sfmt_jmp24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 217 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf80f0000) == 0xd8090000)
              { itype = MEPCORE1_INSN_BSR24; mepcore1_extract_sfmt_bsr24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 219 :
        {
          unsigned int val = (((insn >> 27) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf8000000) == 0xd0000000)
              { itype = MEPCORE1_INSN_MOVU24; mepcore1_extract_sfmt_movu24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf80f0000) == 0xd80b0000)
              { itype = MEPCORE1_INSN_BSRV; mepcore1_extract_sfmt_bsr24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 224 :
        if ((entire_insn & 0xf00f0000) == 0xe0000000)
          { itype = MEPCORE1_INSN_BEQI; mepcore1_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 225 :
        if ((entire_insn & 0xf00f0000) == 0xe0010000)
          { itype = MEPCORE1_INSN_BEQ; mepcore1_extract_sfmt_beq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 226 : /* fall through */
      case 230 : /* fall through */
      case 234 : /* fall through */
      case 238 :
        if ((entire_insn & 0xf0030000) == 0xe0020000)
          { itype = MEPCORE1_INSN_SW24; mepcore1_extract_sfmt_sw24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 227 : /* fall through */
      case 231 : /* fall through */
      case 235 : /* fall through */
      case 239 :
        if ((entire_insn & 0xf0030000) == 0xe0030000)
          { itype = MEPCORE1_INSN_LW24; mepcore1_extract_sfmt_lw24 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 228 :
        if ((entire_insn & 0xf00f0000) == 0xe0040000)
          { itype = MEPCORE1_INSN_BNEI; mepcore1_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 229 :
        if ((entire_insn & 0xf00f0000) == 0xe0050000)
          { itype = MEPCORE1_INSN_BNE; mepcore1_extract_sfmt_beq (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 232 :
        if ((entire_insn & 0xf00f0000) == 0xe0080000)
          { itype = MEPCORE1_INSN_BGEI; mepcore1_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 233 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf0ff0000) == 0xe0090000)
              { itype = MEPCORE1_INSN_REPEAT; mepcore1_extract_sfmt_repeat (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xffff0000) == 0xe0190000)
              { itype = MEPCORE1_INSN_EREPEAT; mepcore1_extract_sfmt_erepeat (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 236 :
        if ((entire_insn & 0xf00f0000) == 0xe00c0000)
          { itype = MEPCORE1_INSN_BLTI; mepcore1_extract_sfmt_beqi (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 237 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xe00d)
          { itype = MEPCORE1_INSN_RI_23; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 240 :
        if ((entire_insn & 0xf00f0000) == 0xf0000000)
          { itype = MEPCORE1_INSN_DSP; mepcore1_extract_sfmt_uci (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 241 :
        {
          unsigned int val = (((insn >> 8) & (3 << 4)) | ((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf00fffff) == 0xf0010000)
              { itype = MEPCORE1_INSN_LDZ; mepcore1_extract_sfmt_ldz (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf00fffff) == 0xf0010002)
              { itype = MEPCORE1_INSN_AVE; mepcore1_extract_sfmt_abs (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            if ((entire_insn & 0xf00fffff) == 0xf0010003)
              { itype = MEPCORE1_INSN_ABS; mepcore1_extract_sfmt_abs (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 4 :
            if ((entire_insn & 0xf00fffff) == 0xf0010004)
              { itype = MEPCORE1_INSN_MIN; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 5 :
            if ((entire_insn & 0xf00fffff) == 0xf0010005)
              { itype = MEPCORE1_INSN_MAX; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            if ((entire_insn & 0xf00fffff) == 0xf0010006)
              { itype = MEPCORE1_INSN_MINU; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            if ((entire_insn & 0xf00fffff) == 0xf0010007)
              { itype = MEPCORE1_INSN_MAXU; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            if ((entire_insn & 0xf00fffff) == 0xf0010008)
              { itype = MEPCORE1_INSN_SADD; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 9 :
            if ((entire_insn & 0xf00fffff) == 0xf0010009)
              { itype = MEPCORE1_INSN_SADDU; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 10 :
            if ((entire_insn & 0xf00fffff) == 0xf001000a)
              { itype = MEPCORE1_INSN_SSUB; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 11 :
            if ((entire_insn & 0xf00fffff) == 0xf001000b)
              { itype = MEPCORE1_INSN_SSUBU; mepcore1_extract_sfmt_min (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 16 : /* fall through */
          case 24 :
            if ((entire_insn & 0xf0ffff07) == 0xf0011000)
              { itype = MEPCORE1_INSN_CLIP; mepcore1_extract_sfmt_clip (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 17 : /* fall through */
          case 25 :
            if ((entire_insn & 0xf0ffff07) == 0xf0011001)
              { itype = MEPCORE1_INSN_CLIPU; mepcore1_extract_sfmt_clipu (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 32 :
            if ((entire_insn & 0xf00ff0ff) == 0xf0012000)
              { itype = MEPCORE1_INSN_CASB3; mepcore1_extract_sfmt_casb3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 33 :
            if ((entire_insn & 0xf00ff0ff) == 0xf0012001)
              { itype = MEPCORE1_INSN_CASH3; mepcore1_extract_sfmt_casb3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 34 :
            if ((entire_insn & 0xf00ff0ff) == 0xf0012002)
              { itype = MEPCORE1_INSN_CASW3; mepcore1_extract_sfmt_casb3 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 52 :
            if ((entire_insn & 0xf00fffff) == 0xf0013004)
              { itype = MEPCORE1_INSN_MADD; mepcore1_extract_sfmt_madd (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 53 :
            if ((entire_insn & 0xf00fffff) == 0xf0013005)
              { itype = MEPCORE1_INSN_MADDU; mepcore1_extract_sfmt_madd (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 54 :
            if ((entire_insn & 0xf00fffff) == 0xf0013006)
              { itype = MEPCORE1_INSN_MADDR; mepcore1_extract_sfmt_maddr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 55 :
            if ((entire_insn & 0xf00fffff) == 0xf0013007)
              { itype = MEPCORE1_INSN_MADDRU; mepcore1_extract_sfmt_maddr (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 242 :
        if ((entire_insn & 0xf00f0000) == 0xf0020000)
          { itype = MEPCORE1_INSN_UCI; mepcore1_extract_sfmt_uci (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 243 :
        if ((entire_insn & 0xf00f0000) == 0xf0030000)
          { itype = MEPCORE1_INSN_PREFD; mepcore1_extract_sfmt_prefd (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 244 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf0ff0000) == 0xf0040000)
              { itype = MEPCORE1_INSN_STCB; mepcore1_extract_sfmt_stcb (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf0ff0000) == 0xf0140000)
              { itype = MEPCORE1_INSN_LDCB; mepcore1_extract_sfmt_movu16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 245 :
        {
          unsigned int val = (((insn >> 10) & (63 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf00ffc00) == 0xf0050000)
              { itype = MEPCORE1_INSN_SBCPA; mepcore1_extract_sfmt_sbcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf00ffc00) == 0xf0050800)
              { itype = MEPCORE1_INSN_SBCPM0; mepcore1_extract_sfmt_sbcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            if ((entire_insn & 0xf00ffc00) == 0xf0050c00)
              { itype = MEPCORE1_INSN_SBCPM1; mepcore1_extract_sfmt_sbcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 4 :
            if ((entire_insn & 0xf00ffc00) == 0xf0051000)
              { itype = MEPCORE1_INSN_SHCPA; mepcore1_extract_sfmt_shcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            if ((entire_insn & 0xf00ffc00) == 0xf0051800)
              { itype = MEPCORE1_INSN_SHCPM0; mepcore1_extract_sfmt_shcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            if ((entire_insn & 0xf00ffc00) == 0xf0051c00)
              { itype = MEPCORE1_INSN_SHCPM1; mepcore1_extract_sfmt_shcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 8 :
            if ((entire_insn & 0xf00ffc00) == 0xf0052000)
              { itype = MEPCORE1_INSN_SWCPA; mepcore1_extract_sfmt_swcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 10 :
            if ((entire_insn & 0xf00ffc00) == 0xf0052800)
              { itype = MEPCORE1_INSN_SWCPM0; mepcore1_extract_sfmt_swcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 11 :
            if ((entire_insn & 0xf00ffc00) == 0xf0052c00)
              { itype = MEPCORE1_INSN_SWCPM1; mepcore1_extract_sfmt_swcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 12 :
            if ((entire_insn & 0xf00ffc00) == 0xf0053000)
              { itype = MEPCORE1_INSN_SMCPA; mepcore1_extract_sfmt_smcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 14 :
            if ((entire_insn & 0xf00ffc00) == 0xf0053800)
              { itype = MEPCORE1_INSN_SMCPM0; mepcore1_extract_sfmt_smcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 15 :
            if ((entire_insn & 0xf00ffc00) == 0xf0053c00)
              { itype = MEPCORE1_INSN_SMCPM1; mepcore1_extract_sfmt_smcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 16 :
            if ((entire_insn & 0xf00ffc00) == 0xf0054000)
              { itype = MEPCORE1_INSN_LBCPA; mepcore1_extract_sfmt_lbucpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 18 :
            if ((entire_insn & 0xf00ffc00) == 0xf0054800)
              { itype = MEPCORE1_INSN_LBCPM0; mepcore1_extract_sfmt_lbucpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 19 :
            if ((entire_insn & 0xf00ffc00) == 0xf0054c00)
              { itype = MEPCORE1_INSN_LBCPM1; mepcore1_extract_sfmt_lbucpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 20 :
            if ((entire_insn & 0xf00ffc00) == 0xf0055000)
              { itype = MEPCORE1_INSN_LHCPA; mepcore1_extract_sfmt_lhucpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 22 :
            if ((entire_insn & 0xf00ffc00) == 0xf0055800)
              { itype = MEPCORE1_INSN_LHCPM0; mepcore1_extract_sfmt_lhucpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 23 :
            if ((entire_insn & 0xf00ffc00) == 0xf0055c00)
              { itype = MEPCORE1_INSN_LHCPM1; mepcore1_extract_sfmt_lhucpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 24 :
            if ((entire_insn & 0xf00ffc00) == 0xf0056000)
              { itype = MEPCORE1_INSN_LWCPA; mepcore1_extract_sfmt_lwcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 26 :
            if ((entire_insn & 0xf00ffc00) == 0xf0056800)
              { itype = MEPCORE1_INSN_LWCPM0; mepcore1_extract_sfmt_lwcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 27 :
            if ((entire_insn & 0xf00ffc00) == 0xf0056c00)
              { itype = MEPCORE1_INSN_LWCPM1; mepcore1_extract_sfmt_lwcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 28 :
            if ((entire_insn & 0xf00ffc00) == 0xf0057000)
              { itype = MEPCORE1_INSN_LMCPA; mepcore1_extract_sfmt_lmcpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 30 :
            if ((entire_insn & 0xf00ffc00) == 0xf0057800)
              { itype = MEPCORE1_INSN_LMCPM0; mepcore1_extract_sfmt_lmcpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 31 :
            if ((entire_insn & 0xf00ffc00) == 0xf0057c00)
              { itype = MEPCORE1_INSN_LMCPM1; mepcore1_extract_sfmt_lmcpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 48 :
            if ((entire_insn & 0xf00ffc00) == 0xf005c000)
              { itype = MEPCORE1_INSN_LBUCPA; mepcore1_extract_sfmt_lbucpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 50 :
            if ((entire_insn & 0xf00ffc00) == 0xf005c800)
              { itype = MEPCORE1_INSN_LBUCPM0; mepcore1_extract_sfmt_lbucpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 51 :
            if ((entire_insn & 0xf00ffc00) == 0xf005cc00)
              { itype = MEPCORE1_INSN_LBUCPM1; mepcore1_extract_sfmt_lbucpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 52 :
            if ((entire_insn & 0xf00ffc00) == 0xf005d000)
              { itype = MEPCORE1_INSN_LHUCPA; mepcore1_extract_sfmt_lhucpa (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 54 :
            if ((entire_insn & 0xf00ffc00) == 0xf005d800)
              { itype = MEPCORE1_INSN_LHUCPM0; mepcore1_extract_sfmt_lhucpm0 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 55 :
            if ((entire_insn & 0xf00ffc00) == 0xf005dc00)
              { itype = MEPCORE1_INSN_LHUCPM1; mepcore1_extract_sfmt_lhucpm1 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 246 :
        {
          unsigned int val = (((insn >> 13) & (3 << 1)) | ((insn >> 12) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf00ff000) == 0xf0060000)
              { itype = MEPCORE1_INSN_SBCP; mepcore1_extract_sfmt_sbcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 1 :
            if ((entire_insn & 0xf00ff000) == 0xf0061000)
              { itype = MEPCORE1_INSN_SHCP; mepcore1_extract_sfmt_shcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 2 :
            if ((entire_insn & 0xf00ff000) == 0xf0064000)
              { itype = MEPCORE1_INSN_LBCP; mepcore1_extract_sfmt_lbcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 3 :
            if ((entire_insn & 0xf00ff000) == 0xf0065000)
              { itype = MEPCORE1_INSN_LHCP; mepcore1_extract_sfmt_lhcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 6 :
            if ((entire_insn & 0xf00ff000) == 0xf006c000)
              { itype = MEPCORE1_INSN_LBUCP; mepcore1_extract_sfmt_lbcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          case 7 :
            if ((entire_insn & 0xf00ff000) == 0xf006d000)
              { itype = MEPCORE1_INSN_LHUCP; mepcore1_extract_sfmt_lhcp (this, current_cpu, pc, base_insn, entire_insn); goto done; }
            itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
          }
        }
      case 248 :
        entire_insn = entire_insn >> 16;
        if ((entire_insn & 0xf00f) == 0xf008)
          { itype = MEPCORE1_INSN_RI_26; mepcore1_extract_sfmt_break (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 252 :
        if ((entire_insn & 0xf00f0000) == 0xf00c0000)
          { itype = MEPCORE1_INSN_SWCP16; mepcore1_extract_sfmt_swcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 253 :
        if ((entire_insn & 0xf00f0000) == 0xf00d0000)
          { itype = MEPCORE1_INSN_LWCP16; mepcore1_extract_sfmt_lwcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 254 :
        if ((entire_insn & 0xf00f0000) == 0xf00e0000)
          { itype = MEPCORE1_INSN_SMCP16; mepcore1_extract_sfmt_smcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      case 255 :
        if ((entire_insn & 0xf00f0000) == 0xf00f0000)
          { itype = MEPCORE1_INSN_LMCP16; mepcore1_extract_sfmt_lmcp16 (this, current_cpu, pc, base_insn, entire_insn); goto done; }
        itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      default : itype = MEPCORE1_INSN_X_INVALID; mepcore1_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      }
    }

  }

  /* The instruction has been decoded and fields extracted.  */
  done:

  this->addr = pc;
  // FIXME: To be redone (to handle ISA variants).
  this->idesc = & mepcore1_idesc::idesc_table[itype];
  // ??? record semantic handler?
  assert(this->idesc->sem_index == itype);
}

void
mepcore1_extract_sfmt_empty (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_empty)\t"
        << endl;
    }

#undef FLD
}

void
mepcore1_extract_sfmt_stcb_r (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stcb_r.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stcb_r)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ldcb_r (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldcb_r.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldcb_r)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_pref (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldcb_r.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_pref)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_prefd (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_prefd)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_casb3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_casb3.f
    UINT f_rn;
    UINT f_rm;
    UINT f_rl5;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_rl5 = EXTRACT_MSB0_UINT (insn, 32, 20, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rl5) = f_rl5;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rl5) = & current_cpu->hardware.h_gpr[f_rl5];
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_casb3)\t"
        << " f_rl5:0x" << hex << f_rl5 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rl5) = f_rl5;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rl5) = f_rl5;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sbcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcp.f
    UINT f_crn;
    UINT f_rm;
    INT f_12s20;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_12s20 = EXTRACT_MSB0_INT (insn, 32, 20, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_12s20) = f_12s20;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcp)\t"
        << " f_12s20:0x" << hex << f_12s20 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcp.f
    UINT f_crn;
    UINT f_rm;
    INT f_12s20;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_12s20 = EXTRACT_MSB0_INT (insn, 32, 20, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_12s20) = f_12s20;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbcp)\t"
        << " f_12s20:0x" << hex << f_12s20 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_shcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcp.f
    UINT f_crn;
    UINT f_rm;
    INT f_12s20;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_12s20 = EXTRACT_MSB0_INT (insn, 32, 20, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_12s20) = f_12s20;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcp)\t"
        << " f_12s20:0x" << hex << f_12s20 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sbcp.f
    UINT f_crn;
    UINT f_rm;
    INT f_12s20;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_12s20 = EXTRACT_MSB0_INT (insn, 32, 20, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_12s20) = f_12s20;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhcp)\t"
        << " f_12s20:0x" << hex << f_12s20 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbucpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbucpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhucpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhucpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbucpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbucpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhucpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhucpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbucpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbucpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhucpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhucpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_uci (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_uci.f
    UINT f_rn;
    UINT f_rm;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16u16) = f_16u16;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_uci)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sb)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnc) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sh (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sh16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sh)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rns) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sw (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lb16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lb)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnc) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lh (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lh16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lh)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rns) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lw (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbu (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbu16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnuc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbu)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnuc) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhu (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu16.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnus) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhu)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnus) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sw_sp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw_sp.f
    UINT f_rn;
    SI f_7u9a4;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_7u9a4) = f_7u9a4;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw_sp)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rnl) = f_rn;
      FLD (in_sp) = 15;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lw_sp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw_sp.f
    UINT f_rn;
    SI f_7u9a4;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a4) = f_7u9a4;
  FLD (f_rn) = f_rn;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw_sp)\t"
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_sp) = 15;
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sb_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb_tp.f
    UINT f_rn3;
    UINT f_7u9;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9 = EXTRACT_MSB0_UINT (insn, 16, 9, 7);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn3) = f_rn3;
  FLD (f_7u9) = f_7u9;
  FLD (i_rn3c) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sb_tp)\t"
        << " f_rn3:0x" << hex << f_rn3 << dec
        << " f_7u9:0x" << hex << f_7u9 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn3c) = f_rn3;
      FLD (in_tp) = 13;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sh_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sh_tp.f
    UINT f_rn3;
    SI f_7u9a2;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a2 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 6)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn3) = f_rn3;
  FLD (f_7u9a2) = f_7u9a2;
  FLD (i_rn3s) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sh_tp)\t"
        << " f_rn3:0x" << hex << f_rn3 << dec
        << " f_7u9a2:0x" << hex << f_7u9a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn3s) = f_rn3;
      FLD (in_tp) = 13;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sw_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw_tp.f
    UINT f_rn3;
    SI f_7u9a4;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn3) = f_rn3;
  FLD (f_7u9a4) = f_7u9a4;
  FLD (i_rn3l) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw_tp)\t"
        << " f_rn3:0x" << hex << f_rn3 << dec
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn3l) = f_rn3;
      FLD (in_tp) = 13;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lb_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lb_tp.f
    UINT f_rn3;
    UINT f_7u9;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9 = EXTRACT_MSB0_UINT (insn, 16, 9, 7);

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9) = f_7u9;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3c) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lb_tp)\t"
        << " f_7u9:0x" << hex << f_7u9 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3c) = f_rn3;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lh_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lh_tp.f
    UINT f_rn3;
    SI f_7u9a2;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a2 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 6)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a2) = f_7u9a2;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3s) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lh_tp)\t"
        << " f_7u9a2:0x" << hex << f_7u9a2 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3s) = f_rn3;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lw_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw_tp.f
    UINT f_rn3;
    SI f_7u9a4;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a4) = f_7u9a4;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3l) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw_tp)\t"
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3l) = f_rn3;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbu_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbu_tp.f
    UINT f_rn3;
    UINT f_7u9;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9 = EXTRACT_MSB0_UINT (insn, 16, 9, 7);

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9) = f_7u9;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3uc) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbu_tp)\t"
        << " f_7u9:0x" << hex << f_7u9 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3uc) = f_rn3;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhu_tp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu_tp.f
    UINT f_rn3;
    SI f_7u9a2;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_7u9a2 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 6)) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a2) = f_7u9a2;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3us) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhu_tp)\t"
        << " f_7u9a2:0x" << hex << f_7u9a2 << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_tp) = 13;
      FLD (out_rn3us) = f_rn3;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sb16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sb16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnc) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sh16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sh16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sh16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rns) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sw16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (in_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lb16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lb16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lb16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnc) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lh16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lh16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rns) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lh16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rns) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lw16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lbu16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbu16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnuc) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lbu16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnuc) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lhu16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lhu16.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rnus) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lhu16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rnus) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sw24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sw24.f
    UINT f_rn;
    UINT f_24u8a4n_lo;
    UINT f_24u8a4n_hi;
    UINT f_24u8a4n;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_24u8a4n_lo = EXTRACT_MSB0_UINT (insn, 32, 8, 6);
    f_24u8a4n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u8a4n = ((((f_24u8a4n_hi) << (8))) | (((f_24u8a4n_lo) << (2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u8a4n) = f_24u8a4n;
  FLD (f_rn) = f_rn;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sw24)\t"
        << " f_24u8a4n:0x" << hex << f_24u8a4n << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lw24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lw24.f
    UINT f_rn;
    UINT f_24u8a4n_lo;
    UINT f_24u8a4n_hi;
    UINT f_24u8a4n;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_24u8a4n_lo = EXTRACT_MSB0_UINT (insn, 32, 8, 6);
    f_24u8a4n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u8a4n = ((((f_24u8a4n_hi) << (8))) | (((f_24u8a4n_lo) << (2))));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u8a4n) = f_24u8a4n;
  FLD (f_rn) = f_rn;
  FLD (i_rnl) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lw24)\t"
        << " f_24u8a4n:0x" << hex << f_24u8a4n << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rnl) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_extb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_extb)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_exth (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_exth)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_extub (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_extub)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ssarb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ssarb.f
    UINT f_2u6;
    UINT f_rm;

    f_2u6 = EXTRACT_MSB0_UINT (insn, 16, 6, 2);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_2u6) = f_2u6;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ssarb)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_2u6:0x" << hex << f_2u6 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_sar) = 2;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_mov (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mov)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_movi8 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movi8.f
    UINT f_rn;
    INT f_8s8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_8s8 = EXTRACT_MSB0_INT (insn, 16, 8, 8);

  /* Record the fields for the semantic handler.  */
  FLD (f_8s8) = f_8s8;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movi8)\t"
        << " f_8s8:0x" << hex << f_8s8 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_movi16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movi16)\t"
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_movu24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_movu24.f
    UINT f_rn3;
    UINT f_24u8n_lo;
    UINT f_24u8n_hi;
    UINT f_24u8n;

    f_rn3 = EXTRACT_MSB0_UINT (insn, 32, 5, 3);
    f_24u8n_lo = EXTRACT_MSB0_UINT (insn, 32, 8, 8);
    f_24u8n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u8n = ((((f_24u8n_hi) << (8))) | (f_24u8n_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u8n) = f_24u8n;
  FLD (f_rn3) = f_rn3;
  FLD (i_rn3) = & current_cpu->hardware.h_gpr[f_rn3];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movu24)\t"
        << " f_24u8n:0x" << hex << f_24u8n << dec
        << " f_rn3:0x" << hex << f_rn3 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn3) = f_rn3;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_movu16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_uci.f
    UINT f_rn;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_16u16) = f_16u16;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_movu16)\t"
        << " f_16u16:0x" << hex << f_16u16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_add3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3.f
    UINT f_rn;
    UINT f_rm;
    UINT f_rl;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_rl = EXTRACT_MSB0_UINT (insn, 16, 12, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_rl) = f_rl;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  FLD (i_rl) = & current_cpu->hardware.h_gpr[f_rl];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_rl:0x" << hex << f_rl << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rl) = f_rl;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_add (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add.f
    UINT f_rn;
    INT f_6s8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_6s8 = EXTRACT_MSB0_INT (insn, 16, 8, 6);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_6s8) = f_6s8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_6s8:0x" << hex << f_6s8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_add3i (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3i.f
    UINT f_rn;
    SI f_7u9a4;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_7u9a4 = ((EXTRACT_MSB0_UINT (insn, 16, 9, 5)) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_7u9a4) = f_7u9a4;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add3i)\t"
        << " f_7u9a4:0x" << hex << f_7u9a4 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_sp) = 15;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_advck3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_advck3.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_advck3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sub (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sub)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_slt3i (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slt3i.f
    UINT f_rn;
    UINT f_5u8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_5u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_5u8) = f_5u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_slt3i)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_5u8:0x" << hex << f_5u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sl1ad3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_advck3.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sl1ad3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_add3x (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add3x)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_slt3x (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    UINT f_rm;
    INT f_16s16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_slt3x)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sltu3x (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_uci.f
    UINT f_rn;
    UINT f_rm;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16u16) = f_16u16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sltu3x)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_or3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_uci.f
    UINT f_rn;
    UINT f_rm;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16u16) = f_16u16;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_or3)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_srai (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_srai.f
    UINT f_rn;
    UINT f_5u8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_5u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_5u8) = f_5u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_srai)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_5u8:0x" << hex << f_5u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sll3 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slt3i.f
    UINT f_rn;
    UINT f_5u8;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_5u8 = EXTRACT_MSB0_UINT (insn, 16, 8, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_5u8) = f_5u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sll3)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_5u8:0x" << hex << f_5u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_fsft (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_fsft)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (in_sar) = 2;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_bra (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bsr12.f
    SI f_12s4a2;

    f_12s4a2 = ((((EXTRACT_MSB0_INT (insn, 16, 4, 11)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_12s4a2) = f_12s4a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bra)\t"
        << " f_12s4a2:0x" << hex << f_12s4a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_beqz (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beqz.f
    UINT f_rn;
    SI f_8s8a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_8s8a2 = ((((EXTRACT_MSB0_INT (insn, 16, 8, 7)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_8s8a2) = f_8s8a2;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_beqz)\t"
        << " f_8s8a2:0x" << hex << f_8s8a2 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_beqi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beqi.f
    UINT f_rn;
    UINT f_4u8;
    SI f_17s16a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_4u8 = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  FLD (f_rn) = f_rn;
  FLD (f_4u8) = f_4u8;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_beqi)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_4u8:0x" << hex << f_4u8 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_beq (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    UINT f_rn;
    UINT f_rm;
    SI f_17s16a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_beq)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_bsr12 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bsr12.f
    SI f_12s4a2;

    f_12s4a2 = ((((EXTRACT_MSB0_INT (insn, 16, 4, 11)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_12s4a2) = f_12s4a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bsr12)\t"
        << " f_12s4a2:0x" << hex << f_12s4a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_bsr24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bsr24.f
    UINT f_24s5a2n_lo;
    INT f_24s5a2n_hi;
    INT f_24s5a2n;

    f_24s5a2n_lo = EXTRACT_MSB0_UINT (insn, 32, 5, 7);
    f_24s5a2n_hi = EXTRACT_MSB0_INT (insn, 32, 16, 16);
  f_24s5a2n = ((((((f_24s5a2n_hi) << (8))) | (((f_24s5a2n_lo) << (1))))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_24s5a2n) = f_24s5a2n;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bsr24)\t"
        << " f_24s5a2n:0x" << hex << f_24s5a2n << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_jmp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jsr.f
    UINT f_rm;

    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_jmp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rm) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_jmp24 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jmp24.f
    UINT f_24u5a2n_lo;
    UINT f_24u5a2n_hi;
    UINT f_24u5a2n;

    f_24u5a2n_lo = EXTRACT_MSB0_UINT (insn, 32, 5, 7);
    f_24u5a2n_hi = EXTRACT_MSB0_UINT (insn, 32, 16, 16);
  f_24u5a2n = ((((f_24u5a2n_hi) << (8))) | (((f_24u5a2n_lo) << (1))));

  /* Record the fields for the semantic handler.  */
  FLD (f_24u5a2n) = f_24u5a2n;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_jmp24)\t"
        << " f_24u5a2n:0x" << hex << f_24u5a2n << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_jsr (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jsr.f
    UINT f_rm;

    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_jsr)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rm) = f_rm;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ret (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ret.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ret)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_lp) = 1;
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_repeat (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_repeat.f
    UINT f_rn;
    SI f_17s16a2;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_repeat)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (in_rn) = f_rn;
      FLD (out_h_csr_SI_4) = 4;
      FLD (out_h_csr_SI_5) = 5;
      FLD (out_h_csr_SI_6) = 6;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_erepeat (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_repeat.f
    SI f_17s16a2;

    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_17s16a2) = f_17s16a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_erepeat)\t"
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_h_csr_SI_4) = 4;
      FLD (out_h_csr_SI_5) = 5;
      FLD (out_h_csr_SI_6) = 6;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_stc_lp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stc_lp.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc_lp)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_lp) = 1;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_stc_hi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc_hi)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_stc_lo (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc_lo)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_stc (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_stc.f
    UINT f_rn;
    UINT f_csrn_lo;
    UINT f_csrn_hi;
    UINT f_csrn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_csrn_lo = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_csrn_hi = EXTRACT_MSB0_UINT (insn, 16, 15, 1);
  f_csrn = ((((f_csrn_hi) << (4))) | (f_csrn_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_csrn) = f_csrn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stc)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_csrn:0x" << hex << f_csrn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_csrn) = f_csrn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ldc_lp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldc_lp.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc_lp)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_lp) = 1;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ldc_hi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc_hi)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_hi) = 7;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ldc_lo (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc_lo)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_lo) = 8;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ldc (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldc.f
    UINT f_rn;
    UINT f_csrn_lo;
    UINT f_csrn_hi;
    UINT f_csrn;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_csrn_lo = EXTRACT_MSB0_UINT (insn, 16, 8, 4);
    f_csrn_hi = EXTRACT_MSB0_UINT (insn, 16, 15, 1);
  f_csrn = ((((f_csrn_hi) << (4))) | (f_csrn_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_csrn) = f_csrn;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldc)\t"
        << " f_csrn:0x" << hex << f_csrn << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_csrn) = f_csrn;
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_di (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_di.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_di)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_psw) = 16;
      FLD (out_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_reti (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_reti.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_reti)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_epc) = 19;
      FLD (in_npc) = 23;
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_halt (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_di.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_halt)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sleep (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sleep)\t"
        << endl;
    }

#undef FLD
}

void
mepcore1_extract_sfmt_swi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swi.f
    UINT f_2u10;

    f_2u10 = EXTRACT_MSB0_UINT (insn, 16, 10, 2);

  /* Record the fields for the semantic handler.  */
  FLD (f_2u10) = f_2u10;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swi)\t"
        << " f_2u10:0x" << hex << f_2u10 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_exc) = 20;
      FLD (out_exc) = 20;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_break (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_break)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
    }
#undef FLD
}

void
mepcore1_extract_sfmt_stcb (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_uci.f
    UINT f_rn;
    UINT f_16u16;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_16u16 = EXTRACT_MSB0_UINT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rn) = f_rn;
  FLD (f_16u16) = f_16u16;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stcb)\t"
        << " f_rn:0x" << hex << f_rn << dec
        << " f_16u16:0x" << hex << f_16u16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_bsetm (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_btstm.f
    UINT f_3u5;
    UINT f_rm;

    f_3u5 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_3u5) = f_3u5;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bsetm)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_3u5:0x" << hex << f_3u5 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_btstm (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_btstm.f
    UINT f_3u5;
    UINT f_rm;

    f_3u5 = EXTRACT_MSB0_UINT (insn, 16, 5, 3);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_3u5) = f_3u5;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_btstm)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_3u5:0x" << hex << f_3u5 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_r0) = 0;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_tas (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldcb_r.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_tas)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_mul (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mul)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_mulr (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mulr)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_madd (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_madd)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_hi) = 7;
      FLD (in_lo) = 8;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_maddr (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_maddr)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_hi) = 7;
      FLD (in_lo) = 8;
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_div (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_maddr.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_div)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_hi) = 7;
      FLD (out_lo) = 8;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_dret (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_dret.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_dret)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_dbg) = 24;
      FLD (in_depc) = 25;
      FLD (out_dbg) = 24;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_dbreak (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_dret.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_dbreak)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_dbg) = 24;
      FLD (out_dbg) = 24;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_ldz (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_add3x.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldz)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_abs (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_abs)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_min (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fsft.f
    UINT f_rn;
    UINT f_rm;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gpr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_min)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rm) = f_rm;
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_clip (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;
    UINT f_5u24;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_5u24 = EXTRACT_MSB0_UINT (insn, 32, 24, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_5u24) = f_5u24;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_clip)\t"
        << " f_5u24:0x" << hex << f_5u24 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_clipu (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_clip.f
    UINT f_rn;
    UINT f_5u24;

    f_rn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_5u24 = EXTRACT_MSB0_UINT (insn, 32, 24, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_5u24) = f_5u24;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gpr[f_rn];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_clipu)\t"
        << " f_5u24:0x" << hex << f_5u24 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rn) = f_rn;
      FLD (out_rn) = f_rn;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_swcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcp)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lwcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_smcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcp)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lmcp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_swcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpi)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lwcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpi)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_smcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpi)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lmcpi (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;

    f_crn = EXTRACT_MSB0_UINT (insn, 16, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 16, 8, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpi)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_swcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcp16)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lwcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcp16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_smcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcp16)\t"
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lmcp16 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swcp16.f
    UINT f_crn;
    UINT f_rm;
    INT f_16s16;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_16s16 = EXTRACT_MSB0_INT (insn, 32, 16, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_16s16) = f_16s16;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcp16)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_16s16:0x" << hex << f_16s16 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sbcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_shcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_swcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lwcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_smcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lmcpa (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpa)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sbcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_shcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_swcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lwcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_smcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lmcpm0 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm0.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpm0)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb0) = 12;
      FLD (in_me0) = 13;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sbcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sbcpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_shcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_shcpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_swcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swcpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lwcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lwcpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_smcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_crn) = f_crn;
  FLD (f_rm) = f_rm;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_smcpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_crn:0x" << hex << f_crn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_lmcpm1 (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lbucpm1.f
    UINT f_crn;
    UINT f_rm;
    SI f_cdisp10;

    f_crn = EXTRACT_MSB0_UINT (insn, 32, 4, 4);
    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_cdisp10 = (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (512))) ? (((((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023))) - (1024))) : (((((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) & (512))) ? ((((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10))) - (1024))) : ((((EXTRACT_MSB0_INT (insn, 32, 22, 10)) & (128))) ? (((EXTRACT_MSB0_INT (insn, 32, 22, 10)) ^ (768))) : (EXTRACT_MSB0_INT (insn, 32, 22, 10)))) & (1023)));

  /* Record the fields for the semantic handler.  */
  FLD (f_cdisp10) = f_cdisp10;
  FLD (f_rm) = f_rm;
  FLD (f_crn) = f_crn;
  FLD (i_rma) = & current_cpu->hardware.h_gpr[f_rm];
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_lmcpm1)\t"
        << " f_cdisp10:0x" << hex << f_cdisp10 << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_crn:0x" << hex << f_crn << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_mb1) = 14;
      FLD (in_me1) = 15;
      FLD (in_rma) = f_rm;
      FLD (out_rma) = f_rm;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_bcpeq (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    UINT f_rm;
    SI f_17s16a2;

    f_rm = EXTRACT_MSB0_UINT (insn, 32, 8, 4);
    f_17s16a2 = ((((EXTRACT_MSB0_INT (insn, 32, 16, 16)) << (1))) + (pc));

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_17s16a2) = f_17s16a2;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bcpeq)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_17s16a2:0x" << hex << f_17s16a2 << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
      FLD (in_opt) = 26;
      FLD (in_psw) = 16;
    }
#undef FLD
}

void
mepcore1_extract_sfmt_synccp (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_synccp)\t"
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
    }
#undef FLD
}

void
mepcore1_extract_sfmt_sim_syscall (mepcore1_scache* abuf, mep_ext1_cpu* current_cpu, PCADDR pc, mepcore1_insn_word base_insn, mepcore1_insn_word entire_insn){
    mepcore1_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sim_syscall.f
    UINT f_5;
    UINT f_6;
    UINT f_7;
    UINT f_11;
    UINT f_callnum;

    f_5 = EXTRACT_MSB0_UINT (insn, 16, 5, 1);
    f_6 = EXTRACT_MSB0_UINT (insn, 16, 6, 1);
    f_7 = EXTRACT_MSB0_UINT (insn, 16, 7, 1);
    f_11 = EXTRACT_MSB0_UINT (insn, 16, 11, 1);
  f_callnum = ((((f_5) << (3))) | (((((f_6) << (2))) | (((((f_7) << (1))) | (f_11))))));

  /* Record the fields for the semantic handler.  */
  FLD (f_callnum) = f_callnum;
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_sim_syscall)\t"
        << " f_callnum:0x" << hex << f_callnum << dec
        << endl;
    }

  /* Record the fields for profiling.  */
  if (UNLIKELY (current_cpu->trace_counter_p || current_cpu->final_insn_count_p))
    {
    }
#undef FLD
}

