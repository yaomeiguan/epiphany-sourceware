/* Simulator instruction decoder for arm.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000 Red Hat, Inc.

This file is part of the Cygnus Simulators.


*/


#include "arm7f.h"

using namespace arm7f; // FIXME: namespace organization still wip


// The instruction descriptor array. 

// Have label pointers been initialized?
// XXX: Note that this is also needed by when semantics are implemented as
// functions to handle machine variants.
bool arm_idesc::idesc_table_initialized_p = false;

arm_idesc arm_idesc::idesc_table[ARM_INSN_MAX] =
{
  { 0, 0, "X_COND", ARM_INSN_X_COND, { 0|(1<<CGEN_INSN_PBB)|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, 0, "X_AFTER", ARM_INSN_X_AFTER, { 0|(1<<CGEN_INSN_PBB)|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, 0, "X_BEFORE", ARM_INSN_X_BEFORE, { 0|(1<<CGEN_INSN_PBB)|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, 0, "X_CTI_CHAIN", ARM_INSN_X_CTI_CHAIN, { 0|(1<<CGEN_INSN_PBB)|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, 0, "X_CHAIN", ARM_INSN_X_CHAIN, { 0|(1<<CGEN_INSN_PBB)|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, 0, "X_BEGIN", ARM_INSN_X_BEGIN, { 0|(1<<CGEN_INSN_PBB)|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_x_invalid, "X_INVALID", ARM_INSN_X_INVALID, { 0|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_b, "B", ARM_INSN_B, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_bl, "BL", ARM_INSN_BL, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_bx, "BX", ARM_INSN_BX, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_dec_imm_offset, "LDR_POST_DEC_IMM_OFFSET", ARM_INSN_LDR_POST_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_dec_reg_offset, "LDR_POST_DEC_REG_OFFSET", ARM_INSN_LDR_POST_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_inc_imm_offset, "LDR_POST_INC_IMM_OFFSET", ARM_INSN_LDR_POST_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_inc_reg_offset, "LDR_POST_INC_REG_OFFSET", ARM_INSN_LDR_POST_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_dec_nonpriv_imm_offset, "LDR_POST_DEC_NONPRIV_IMM_OFFSET", ARM_INSN_LDR_POST_DEC_NONPRIV_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_dec_nonpriv_reg_offset, "LDR_POST_DEC_NONPRIV_REG_OFFSET", ARM_INSN_LDR_POST_DEC_NONPRIV_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_inc_nonpriv_imm_offset, "LDR_POST_INC_NONPRIV_IMM_OFFSET", ARM_INSN_LDR_POST_INC_NONPRIV_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_post_inc_nonpriv_reg_offset, "LDR_POST_INC_NONPRIV_REG_OFFSET", ARM_INSN_LDR_POST_INC_NONPRIV_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_dec_imm_offset, "LDR_PRE_DEC_IMM_OFFSET", ARM_INSN_LDR_PRE_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_dec_reg_offset, "LDR_PRE_DEC_REG_OFFSET", ARM_INSN_LDR_PRE_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_inc_imm_offset, "LDR_PRE_INC_IMM_OFFSET", ARM_INSN_LDR_PRE_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_inc_reg_offset, "LDR_PRE_INC_REG_OFFSET", ARM_INSN_LDR_PRE_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_dec_wb_imm_offset, "LDR_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_LDR_PRE_DEC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_dec_wb_reg_offset, "LDR_PRE_DEC_WB_REG_OFFSET", ARM_INSN_LDR_PRE_DEC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_inc_wb_imm_offset, "LDR_PRE_INC_WB_IMM_OFFSET", ARM_INSN_LDR_PRE_INC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldr_pre_inc_wb_reg_offset, "LDR_PRE_INC_WB_REG_OFFSET", ARM_INSN_LDR_PRE_INC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_dec_imm_offset, "LDRB_POST_DEC_IMM_OFFSET", ARM_INSN_LDRB_POST_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_dec_reg_offset, "LDRB_POST_DEC_REG_OFFSET", ARM_INSN_LDRB_POST_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_inc_imm_offset, "LDRB_POST_INC_IMM_OFFSET", ARM_INSN_LDRB_POST_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_inc_reg_offset, "LDRB_POST_INC_REG_OFFSET", ARM_INSN_LDRB_POST_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_dec_nonpriv_imm_offset, "LDRB_POST_DEC_NONPRIV_IMM_OFFSET", ARM_INSN_LDRB_POST_DEC_NONPRIV_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_dec_nonpriv_reg_offset, "LDRB_POST_DEC_NONPRIV_REG_OFFSET", ARM_INSN_LDRB_POST_DEC_NONPRIV_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_inc_nonpriv_imm_offset, "LDRB_POST_INC_NONPRIV_IMM_OFFSET", ARM_INSN_LDRB_POST_INC_NONPRIV_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_post_inc_nonpriv_reg_offset, "LDRB_POST_INC_NONPRIV_REG_OFFSET", ARM_INSN_LDRB_POST_INC_NONPRIV_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_dec_imm_offset, "LDRB_PRE_DEC_IMM_OFFSET", ARM_INSN_LDRB_PRE_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_dec_reg_offset, "LDRB_PRE_DEC_REG_OFFSET", ARM_INSN_LDRB_PRE_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_inc_imm_offset, "LDRB_PRE_INC_IMM_OFFSET", ARM_INSN_LDRB_PRE_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_inc_reg_offset, "LDRB_PRE_INC_REG_OFFSET", ARM_INSN_LDRB_PRE_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_dec_wb_imm_offset, "LDRB_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_LDRB_PRE_DEC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_dec_wb_reg_offset, "LDRB_PRE_DEC_WB_REG_OFFSET", ARM_INSN_LDRB_PRE_DEC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_inc_wb_imm_offset, "LDRB_PRE_INC_WB_IMM_OFFSET", ARM_INSN_LDRB_PRE_INC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrb_pre_inc_wb_reg_offset, "LDRB_PRE_INC_WB_REG_OFFSET", ARM_INSN_LDRB_PRE_INC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_dec_imm_offset, "STR_POST_DEC_IMM_OFFSET", ARM_INSN_STR_POST_DEC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_dec_reg_offset, "STR_POST_DEC_REG_OFFSET", ARM_INSN_STR_POST_DEC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_inc_imm_offset, "STR_POST_INC_IMM_OFFSET", ARM_INSN_STR_POST_INC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_inc_reg_offset, "STR_POST_INC_REG_OFFSET", ARM_INSN_STR_POST_INC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_dec_nonpriv_imm_offset, "STR_POST_DEC_NONPRIV_IMM_OFFSET", ARM_INSN_STR_POST_DEC_NONPRIV_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_dec_nonpriv_reg_offset, "STR_POST_DEC_NONPRIV_REG_OFFSET", ARM_INSN_STR_POST_DEC_NONPRIV_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_inc_nonpriv_imm_offset, "STR_POST_INC_NONPRIV_IMM_OFFSET", ARM_INSN_STR_POST_INC_NONPRIV_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_post_inc_nonpriv_reg_offset, "STR_POST_INC_NONPRIV_REG_OFFSET", ARM_INSN_STR_POST_INC_NONPRIV_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_dec_imm_offset, "STR_PRE_DEC_IMM_OFFSET", ARM_INSN_STR_PRE_DEC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_dec_reg_offset, "STR_PRE_DEC_REG_OFFSET", ARM_INSN_STR_PRE_DEC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_inc_imm_offset, "STR_PRE_INC_IMM_OFFSET", ARM_INSN_STR_PRE_INC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_inc_reg_offset, "STR_PRE_INC_REG_OFFSET", ARM_INSN_STR_PRE_INC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_dec_wb_imm_offset, "STR_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_STR_PRE_DEC_WB_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_dec_wb_reg_offset, "STR_PRE_DEC_WB_REG_OFFSET", ARM_INSN_STR_PRE_DEC_WB_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_inc_wb_imm_offset, "STR_PRE_INC_WB_IMM_OFFSET", ARM_INSN_STR_PRE_INC_WB_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_str_pre_inc_wb_reg_offset, "STR_PRE_INC_WB_REG_OFFSET", ARM_INSN_STR_PRE_INC_WB_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_dec_imm_offset, "STRB_POST_DEC_IMM_OFFSET", ARM_INSN_STRB_POST_DEC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_dec_reg_offset, "STRB_POST_DEC_REG_OFFSET", ARM_INSN_STRB_POST_DEC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_inc_imm_offset, "STRB_POST_INC_IMM_OFFSET", ARM_INSN_STRB_POST_INC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_inc_reg_offset, "STRB_POST_INC_REG_OFFSET", ARM_INSN_STRB_POST_INC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_dec_nonpriv_imm_offset, "STRB_POST_DEC_NONPRIV_IMM_OFFSET", ARM_INSN_STRB_POST_DEC_NONPRIV_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_dec_nonpriv_reg_offset, "STRB_POST_DEC_NONPRIV_REG_OFFSET", ARM_INSN_STRB_POST_DEC_NONPRIV_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_inc_nonpriv_imm_offset, "STRB_POST_INC_NONPRIV_IMM_OFFSET", ARM_INSN_STRB_POST_INC_NONPRIV_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_post_inc_nonpriv_reg_offset, "STRB_POST_INC_NONPRIV_REG_OFFSET", ARM_INSN_STRB_POST_INC_NONPRIV_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_dec_imm_offset, "STRB_PRE_DEC_IMM_OFFSET", ARM_INSN_STRB_PRE_DEC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_dec_reg_offset, "STRB_PRE_DEC_REG_OFFSET", ARM_INSN_STRB_PRE_DEC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_inc_imm_offset, "STRB_PRE_INC_IMM_OFFSET", ARM_INSN_STRB_PRE_INC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_inc_reg_offset, "STRB_PRE_INC_REG_OFFSET", ARM_INSN_STRB_PRE_INC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_dec_wb_imm_offset, "STRB_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_STRB_PRE_DEC_WB_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_dec_wb_reg_offset, "STRB_PRE_DEC_WB_REG_OFFSET", ARM_INSN_STRB_PRE_DEC_WB_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_inc_wb_imm_offset, "STRB_PRE_INC_WB_IMM_OFFSET", ARM_INSN_STRB_PRE_INC_WB_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strb_pre_inc_wb_reg_offset, "STRB_PRE_INC_WB_REG_OFFSET", ARM_INSN_STRB_PRE_INC_WB_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_dec_imm_offset, "STRH_PRE_DEC_IMM_OFFSET", ARM_INSN_STRH_PRE_DEC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_dec_reg_offset, "STRH_PRE_DEC_REG_OFFSET", ARM_INSN_STRH_PRE_DEC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_inc_imm_offset, "STRH_PRE_INC_IMM_OFFSET", ARM_INSN_STRH_PRE_INC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_inc_reg_offset, "STRH_PRE_INC_REG_OFFSET", ARM_INSN_STRH_PRE_INC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_dec_wb_imm_offset, "STRH_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_STRH_PRE_DEC_WB_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_dec_wb_reg_offset, "STRH_PRE_DEC_WB_REG_OFFSET", ARM_INSN_STRH_PRE_DEC_WB_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_inc_wb_imm_offset, "STRH_PRE_INC_WB_IMM_OFFSET", ARM_INSN_STRH_PRE_INC_WB_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_pre_inc_wb_reg_offset, "STRH_PRE_INC_WB_REG_OFFSET", ARM_INSN_STRH_PRE_INC_WB_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_post_dec_imm_offset, "STRH_POST_DEC_IMM_OFFSET", ARM_INSN_STRH_POST_DEC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_post_dec_reg_offset, "STRH_POST_DEC_REG_OFFSET", ARM_INSN_STRH_POST_DEC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_post_inc_imm_offset, "STRH_POST_INC_IMM_OFFSET", ARM_INSN_STRH_POST_INC_IMM_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_strh_post_inc_reg_offset, "STRH_POST_INC_REG_OFFSET", ARM_INSN_STRH_POST_INC_REG_OFFSET, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_dec_imm_offset, "LDRSB_PRE_DEC_IMM_OFFSET", ARM_INSN_LDRSB_PRE_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_dec_reg_offset, "LDRSB_PRE_DEC_REG_OFFSET", ARM_INSN_LDRSB_PRE_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_inc_imm_offset, "LDRSB_PRE_INC_IMM_OFFSET", ARM_INSN_LDRSB_PRE_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_inc_reg_offset, "LDRSB_PRE_INC_REG_OFFSET", ARM_INSN_LDRSB_PRE_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_dec_wb_imm_offset, "LDRSB_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_LDRSB_PRE_DEC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_dec_wb_reg_offset, "LDRSB_PRE_DEC_WB_REG_OFFSET", ARM_INSN_LDRSB_PRE_DEC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_inc_wb_imm_offset, "LDRSB_PRE_INC_WB_IMM_OFFSET", ARM_INSN_LDRSB_PRE_INC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_pre_inc_wb_reg_offset, "LDRSB_PRE_INC_WB_REG_OFFSET", ARM_INSN_LDRSB_PRE_INC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_post_dec_imm_offset, "LDRSB_POST_DEC_IMM_OFFSET", ARM_INSN_LDRSB_POST_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_post_dec_reg_offset, "LDRSB_POST_DEC_REG_OFFSET", ARM_INSN_LDRSB_POST_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_post_inc_imm_offset, "LDRSB_POST_INC_IMM_OFFSET", ARM_INSN_LDRSB_POST_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsb_post_inc_reg_offset, "LDRSB_POST_INC_REG_OFFSET", ARM_INSN_LDRSB_POST_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_dec_imm_offset, "LDRH_PRE_DEC_IMM_OFFSET", ARM_INSN_LDRH_PRE_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_dec_reg_offset, "LDRH_PRE_DEC_REG_OFFSET", ARM_INSN_LDRH_PRE_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_inc_imm_offset, "LDRH_PRE_INC_IMM_OFFSET", ARM_INSN_LDRH_PRE_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_inc_reg_offset, "LDRH_PRE_INC_REG_OFFSET", ARM_INSN_LDRH_PRE_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_dec_wb_imm_offset, "LDRH_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_LDRH_PRE_DEC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_dec_wb_reg_offset, "LDRH_PRE_DEC_WB_REG_OFFSET", ARM_INSN_LDRH_PRE_DEC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_inc_wb_imm_offset, "LDRH_PRE_INC_WB_IMM_OFFSET", ARM_INSN_LDRH_PRE_INC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_pre_inc_wb_reg_offset, "LDRH_PRE_INC_WB_REG_OFFSET", ARM_INSN_LDRH_PRE_INC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_post_dec_imm_offset, "LDRH_POST_DEC_IMM_OFFSET", ARM_INSN_LDRH_POST_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_post_dec_reg_offset, "LDRH_POST_DEC_REG_OFFSET", ARM_INSN_LDRH_POST_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_post_inc_imm_offset, "LDRH_POST_INC_IMM_OFFSET", ARM_INSN_LDRH_POST_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrh_post_inc_reg_offset, "LDRH_POST_INC_REG_OFFSET", ARM_INSN_LDRH_POST_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_dec_imm_offset, "LDRSH_PRE_DEC_IMM_OFFSET", ARM_INSN_LDRSH_PRE_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_dec_reg_offset, "LDRSH_PRE_DEC_REG_OFFSET", ARM_INSN_LDRSH_PRE_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_inc_imm_offset, "LDRSH_PRE_INC_IMM_OFFSET", ARM_INSN_LDRSH_PRE_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_inc_reg_offset, "LDRSH_PRE_INC_REG_OFFSET", ARM_INSN_LDRSH_PRE_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_dec_wb_imm_offset, "LDRSH_PRE_DEC_WB_IMM_OFFSET", ARM_INSN_LDRSH_PRE_DEC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_dec_wb_reg_offset, "LDRSH_PRE_DEC_WB_REG_OFFSET", ARM_INSN_LDRSH_PRE_DEC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_inc_wb_imm_offset, "LDRSH_PRE_INC_WB_IMM_OFFSET", ARM_INSN_LDRSH_PRE_INC_WB_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_pre_inc_wb_reg_offset, "LDRSH_PRE_INC_WB_REG_OFFSET", ARM_INSN_LDRSH_PRE_INC_WB_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_post_dec_imm_offset, "LDRSH_POST_DEC_IMM_OFFSET", ARM_INSN_LDRSH_POST_DEC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_post_dec_reg_offset, "LDRSH_POST_DEC_REG_OFFSET", ARM_INSN_LDRSH_POST_DEC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_post_inc_imm_offset, "LDRSH_POST_INC_IMM_OFFSET", ARM_INSN_LDRSH_POST_INC_IMM_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldrsh_post_inc_reg_offset, "LDRSH_POST_INC_REG_OFFSET", ARM_INSN_LDRSH_POST_INC_REG_OFFSET, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mul, "MUL", ARM_INSN_MUL, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mla, "MLA", ARM_INSN_MLA, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_umull, "UMULL", ARM_INSN_UMULL, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_umlal, "UMLAL", ARM_INSN_UMLAL, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_smull, "SMULL", ARM_INSN_SMULL, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_smlal, "SMLAL", ARM_INSN_SMLAL, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_swp, "SWP", ARM_INSN_SWP, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_swpb, "SWPB", ARM_INSN_SWPB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_swi, "SWI", ARM_INSN_SWI, { 0|(1<<CGEN_INSN_UNCOND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_and_reg_imm_shift, "AND_REG_IMM_SHIFT", ARM_INSN_AND_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_and_reg_reg_shift, "AND_REG_REG_SHIFT", ARM_INSN_AND_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_and_imm, "AND_IMM", ARM_INSN_AND_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_orr_reg_imm_shift, "ORR_REG_IMM_SHIFT", ARM_INSN_ORR_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_orr_reg_reg_shift, "ORR_REG_REG_SHIFT", ARM_INSN_ORR_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_orr_imm, "ORR_IMM", ARM_INSN_ORR_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_eor_reg_imm_shift, "EOR_REG_IMM_SHIFT", ARM_INSN_EOR_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_eor_reg_reg_shift, "EOR_REG_REG_SHIFT", ARM_INSN_EOR_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_eor_imm, "EOR_IMM", ARM_INSN_EOR_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mov_reg_imm_shift, "MOV_REG_IMM_SHIFT", ARM_INSN_MOV_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mov_reg_reg_shift, "MOV_REG_REG_SHIFT", ARM_INSN_MOV_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_mov_imm, "MOV_IMM", ARM_INSN_MOV_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_bic_reg_imm_shift, "BIC_REG_IMM_SHIFT", ARM_INSN_BIC_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_bic_reg_reg_shift, "BIC_REG_REG_SHIFT", ARM_INSN_BIC_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_bic_imm, "BIC_IMM", ARM_INSN_BIC_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mvn_reg_imm_shift, "MVN_REG_IMM_SHIFT", ARM_INSN_MVN_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mvn_reg_reg_shift, "MVN_REG_REG_SHIFT", ARM_INSN_MVN_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_mvn_imm, "MVN_IMM", ARM_INSN_MVN_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_add_reg_imm_shift, "ADD_REG_IMM_SHIFT", ARM_INSN_ADD_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_add_reg_reg_shift, "ADD_REG_REG_SHIFT", ARM_INSN_ADD_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_add_imm, "ADD_IMM", ARM_INSN_ADD_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_adc_reg_imm_shift, "ADC_REG_IMM_SHIFT", ARM_INSN_ADC_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_adc_reg_reg_shift, "ADC_REG_REG_SHIFT", ARM_INSN_ADC_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_adc_imm, "ADC_IMM", ARM_INSN_ADC_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_sub_reg_imm_shift, "SUB_REG_IMM_SHIFT", ARM_INSN_SUB_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_sub_reg_reg_shift, "SUB_REG_REG_SHIFT", ARM_INSN_SUB_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_sub_imm, "SUB_IMM", ARM_INSN_SUB_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_sbc_reg_imm_shift, "SBC_REG_IMM_SHIFT", ARM_INSN_SBC_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_sbc_reg_reg_shift, "SBC_REG_REG_SHIFT", ARM_INSN_SBC_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_sbc_imm, "SBC_IMM", ARM_INSN_SBC_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_rsb_reg_imm_shift, "RSB_REG_IMM_SHIFT", ARM_INSN_RSB_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_rsb_reg_reg_shift, "RSB_REG_REG_SHIFT", ARM_INSN_RSB_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_rsb_imm, "RSB_IMM", ARM_INSN_RSB_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_rsc_reg_imm_shift, "RSC_REG_IMM_SHIFT", ARM_INSN_RSC_REG_IMM_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_rsc_reg_reg_shift, "RSC_REG_REG_SHIFT", ARM_INSN_RSC_REG_REG_SHIFT, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_rsc_imm, "RSC_IMM", ARM_INSN_RSC_IMM, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_tst_reg_imm_shift, "TST_REG_IMM_SHIFT", ARM_INSN_TST_REG_IMM_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_tst_reg_reg_shift, "TST_REG_REG_SHIFT", ARM_INSN_TST_REG_REG_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_tst_imm, "TST_IMM", ARM_INSN_TST_IMM, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_teq_reg_imm_shift, "TEQ_REG_IMM_SHIFT", ARM_INSN_TEQ_REG_IMM_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_teq_reg_reg_shift, "TEQ_REG_REG_SHIFT", ARM_INSN_TEQ_REG_REG_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_teq_imm, "TEQ_IMM", ARM_INSN_TEQ_IMM, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_cmp_reg_imm_shift, "CMP_REG_IMM_SHIFT", ARM_INSN_CMP_REG_IMM_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_cmp_reg_reg_shift, "CMP_REG_REG_SHIFT", ARM_INSN_CMP_REG_REG_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_cmp_imm, "CMP_IMM", ARM_INSN_CMP_IMM, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_cmn_reg_imm_shift, "CMN_REG_IMM_SHIFT", ARM_INSN_CMN_REG_IMM_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_cmn_reg_reg_shift, "CMN_REG_REG_SHIFT", ARM_INSN_CMN_REG_REG_SHIFT, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 12 } },
  { 0, arm_sem_cmn_imm, "CMN_IMM", ARM_INSN_CMN_IMM, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmda, "LDMDA", ARM_INSN_LDMDA, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmda_wb, "LDMDA_WB", ARM_INSN_LDMDA_WB, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmib, "LDMIB", ARM_INSN_LDMIB, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmib_wb, "LDMIB_WB", ARM_INSN_LDMIB_WB, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmia, "LDMIA", ARM_INSN_LDMIA, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmia_wb, "LDMIA_WB", ARM_INSN_LDMIA_WB, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmdb, "LDMDB", ARM_INSN_LDMDB, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_ldmdb_wb, "LDMDB_WB", ARM_INSN_LDMDB_WB, { 0|(1<<CGEN_INSN_COND_CTI), (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmdb, "STMDB", ARM_INSN_STMDB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmdb_wb, "STMDB_WB", ARM_INSN_STMDB_WB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmib, "STMIB", ARM_INSN_STMIB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmib_wb, "STMIB_WB", ARM_INSN_STMIB_WB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmia, "STMIA", ARM_INSN_STMIA, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmia_wb, "STMIA_WB", ARM_INSN_STMIA_WB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmda, "STMDA", ARM_INSN_STMDA, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_stmda_wb, "STMDA_WB", ARM_INSN_STMDA_WB, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mrs_c, "MRS_C", ARM_INSN_MRS_C, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_mrs_s, "MRS_S", ARM_INSN_MRS_S, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_msr_c, "MSR_C", ARM_INSN_MSR_C, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },
  { 0, arm_sem_msr_s, "MSR_S", ARM_INSN_MSR_S, { 0, (1<<MACH_BASE), (1<<ISA_ARM), 8 } },

};

// Given a canonical virtual insn id, return the target specific one.

arm_insn_type
arm_idesc::lookup_virtual (virtual_insn_type vit)
{
  switch (vit)
    {
      case VIRTUAL_INSN_INVALID: return ARM_INSN_X_INVALID;
      case VIRTUAL_INSN_BEGIN: return ARM_INSN_X_BEGIN;
      case VIRTUAL_INSN_CHAIN: return ARM_INSN_X_CHAIN;
      case VIRTUAL_INSN_CTI_CHAIN: return ARM_INSN_X_CTI_CHAIN;
      case VIRTUAL_INSN_BEFORE: return ARM_INSN_X_BEFORE;
      case VIRTUAL_INSN_AFTER: return ARM_INSN_X_AFTER;
      case VIRTUAL_INSN_COND: return ARM_INSN_X_COND;
    }
  abort ();
}


// Declare extractor functions

static void
arm_extract_sfmt_empty (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_b (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_bl (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_bx (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldr_post_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldr_post_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldr_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldr_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_str_post_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_str_post_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_str_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_str_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_strh_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_strh_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_strh_pre_dec_wb_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_strh_pre_dec_wb_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldrsb_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldrsb_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mul (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mla (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_umull (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_umlal (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_swp (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_swi (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_and_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_and_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_and_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mov_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mov_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mov_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_add_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_add_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_add_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_adc_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_adc_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_adc_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_tst_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_tst_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_tst_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_cmp_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_cmp_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_cmp_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldmda (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_ldmda_wb (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_stmdb (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_stmdb_wb (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mrs_c (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_mrs_s (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_msr_c (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);
static void
arm_extract_sfmt_msr_s (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn);

// Fetch & decode instruction
void
arm_scache::decode (arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn)
{
  /* Result of decoder.  */
  ARM_INSN_TYPE itype;

  {
    arm_insn_word insn = base_insn;

    {
      unsigned int val = (((insn >> 21) & (127 << 0)));
      switch (val)
      {
      case 0 :
        {
          unsigned int val = (((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : itype = ARM_INSN_AND_REG_IMM_SHIFT; arm_extract_sfmt_and_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : itype = ARM_INSN_AND_REG_REG_SHIFT; arm_extract_sfmt_and_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 9 : itype = ARM_INSN_MUL; arm_extract_sfmt_mul (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_STRH_POST_DEC_REG_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_LDRH_POST_DEC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          case 13 : itype = ARM_INSN_LDRSB_POST_DEC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 15 : itype = ARM_INSN_LDRSH_POST_DEC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 1 :
        {
          unsigned int val = (((insn >> 4) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_EOR_REG_IMM_SHIFT; arm_extract_sfmt_and_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 :
            {
              unsigned int val = (((insn >> 7) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_EOR_REG_REG_SHIFT; arm_extract_sfmt_and_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_MLA; arm_extract_sfmt_mla (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 2 :
        {
          unsigned int val = (((insn >> 16) & (1 << 4)) | ((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : /* fall through */
          case 16 : /* fall through */
          case 18 : /* fall through */
          case 20 : /* fall through */
          case 22 : /* fall through */
          case 24 : /* fall through */
          case 26 : /* fall through */
          case 28 : /* fall through */
          case 30 : itype = ARM_INSN_SUB_REG_IMM_SHIFT; arm_extract_sfmt_add_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : /* fall through */
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : itype = ARM_INSN_SUB_REG_REG_SHIFT; arm_extract_sfmt_add_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 : itype = ARM_INSN_STRH_POST_DEC_IMM_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 27 : itype = ARM_INSN_LDRH_POST_DEC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 29 : itype = ARM_INSN_LDRSB_POST_DEC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 31 : itype = ARM_INSN_LDRSH_POST_DEC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 3 :
        {
          unsigned int val = (((insn >> 4) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_RSB_REG_IMM_SHIFT; arm_extract_sfmt_add_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_RSB_REG_REG_SHIFT; arm_extract_sfmt_add_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 4 :
        {
          unsigned int val = (((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : itype = ARM_INSN_ADD_REG_IMM_SHIFT; arm_extract_sfmt_add_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : itype = ARM_INSN_ADD_REG_REG_SHIFT; arm_extract_sfmt_add_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 9 : itype = ARM_INSN_UMULL; arm_extract_sfmt_umull (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_STRH_POST_INC_REG_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_LDRH_POST_INC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          case 13 : itype = ARM_INSN_LDRSB_POST_INC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 15 : itype = ARM_INSN_LDRSH_POST_INC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 5 :
        {
          unsigned int val = (((insn >> 4) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_ADC_REG_IMM_SHIFT; arm_extract_sfmt_adc_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 :
            {
              unsigned int val = (((insn >> 7) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_ADC_REG_REG_SHIFT; arm_extract_sfmt_adc_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_UMLAL; arm_extract_sfmt_umlal (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 6 :
        {
          unsigned int val = (((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : itype = ARM_INSN_SBC_REG_IMM_SHIFT; arm_extract_sfmt_adc_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : itype = ARM_INSN_SBC_REG_REG_SHIFT; arm_extract_sfmt_adc_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 9 : itype = ARM_INSN_SMULL; arm_extract_sfmt_umull (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_STRH_POST_INC_IMM_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_LDRH_POST_INC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          case 13 : itype = ARM_INSN_LDRSB_POST_INC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 15 : itype = ARM_INSN_LDRSH_POST_INC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 7 :
        {
          unsigned int val = (((insn >> 4) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_RSC_REG_IMM_SHIFT; arm_extract_sfmt_adc_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 :
            {
              unsigned int val = (((insn >> 7) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_RSC_REG_REG_SHIFT; arm_extract_sfmt_adc_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_SMLAL; arm_extract_sfmt_umlal (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 8 :
        {
          unsigned int val = (((insn >> 17) & (1 << 3)) | ((insn >> 5) & (1 << 2)) | ((insn >> 4) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_MRS_C; arm_extract_sfmt_mrs_c (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 5 : itype = ARM_INSN_SWP; arm_extract_sfmt_swp (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 7 : itype = ARM_INSN_STRH_PRE_DEC_REG_OFFSET; arm_extract_sfmt_strh_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : itype = ARM_INSN_TST_REG_IMM_SHIFT; arm_extract_sfmt_tst_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 9 : /* fall through */
          case 11 : itype = ARM_INSN_TST_REG_REG_SHIFT; arm_extract_sfmt_tst_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 13 : itype = ARM_INSN_LDRSB_PRE_DEC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 15 :
            {
              unsigned int val = (((insn >> 6) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_LDRH_PRE_DEC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_LDRSH_PRE_DEC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 9 :
        {
          unsigned int val = (((insn >> 17) & (1 << 3)) | ((insn >> 5) & (1 << 2)) | ((insn >> 4) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_MSR_C; arm_extract_sfmt_msr_c (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_BX; arm_extract_sfmt_bx (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 7 : itype = ARM_INSN_STRH_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : itype = ARM_INSN_TEQ_REG_IMM_SHIFT; arm_extract_sfmt_tst_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 9 : /* fall through */
          case 11 : itype = ARM_INSN_TEQ_REG_REG_SHIFT; arm_extract_sfmt_tst_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 13 : itype = ARM_INSN_LDRSB_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 15 :
            {
              unsigned int val = (((insn >> 6) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_LDRH_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_LDRSH_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 10 :
        {
          unsigned int val = (((insn >> 17) & (1 << 3)) | ((insn >> 5) & (1 << 2)) | ((insn >> 4) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_MRS_S; arm_extract_sfmt_mrs_s (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 5 : itype = ARM_INSN_SWPB; arm_extract_sfmt_swp (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 7 : itype = ARM_INSN_STRH_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_strh_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : itype = ARM_INSN_CMP_REG_IMM_SHIFT; arm_extract_sfmt_cmp_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 9 : /* fall through */
          case 11 : itype = ARM_INSN_CMP_REG_REG_SHIFT; arm_extract_sfmt_cmp_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 13 : itype = ARM_INSN_LDRSB_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 15 :
            {
              unsigned int val = (((insn >> 6) & (1 << 0)));
              switch (val)
              {
              case 0 : itype = ARM_INSN_LDRH_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              case 1 : itype = ARM_INSN_LDRSH_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
              }
            }
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 11 :
        {
          unsigned int val = (((insn >> 16) & (1 << 4)) | ((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_MSR_S; arm_extract_sfmt_msr_s (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 : itype = ARM_INSN_STRH_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 16 : /* fall through */
          case 18 : /* fall through */
          case 20 : /* fall through */
          case 22 : /* fall through */
          case 24 : /* fall through */
          case 26 : /* fall through */
          case 28 : /* fall through */
          case 30 : itype = ARM_INSN_CMN_REG_IMM_SHIFT; arm_extract_sfmt_cmp_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : itype = ARM_INSN_CMN_REG_REG_SHIFT; arm_extract_sfmt_cmp_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 27 : itype = ARM_INSN_LDRH_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 29 : itype = ARM_INSN_LDRSB_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 31 : itype = ARM_INSN_LDRSH_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 12 :
        {
          unsigned int val = (((insn >> 16) & (1 << 4)) | ((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : /* fall through */
          case 16 : /* fall through */
          case 18 : /* fall through */
          case 20 : /* fall through */
          case 22 : /* fall through */
          case 24 : /* fall through */
          case 26 : /* fall through */
          case 28 : /* fall through */
          case 30 : itype = ARM_INSN_ORR_REG_IMM_SHIFT; arm_extract_sfmt_and_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : /* fall through */
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : itype = ARM_INSN_ORR_REG_REG_SHIFT; arm_extract_sfmt_and_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 : itype = ARM_INSN_STRH_PRE_INC_REG_OFFSET; arm_extract_sfmt_strh_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 27 : itype = ARM_INSN_LDRH_PRE_INC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 29 : itype = ARM_INSN_LDRSB_PRE_INC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 31 : itype = ARM_INSN_LDRSH_PRE_INC_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 13 :
        {
          unsigned int val = (((insn >> 16) & (1 << 4)) | ((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : /* fall through */
          case 16 : /* fall through */
          case 18 : /* fall through */
          case 20 : /* fall through */
          case 22 : /* fall through */
          case 24 : /* fall through */
          case 26 : /* fall through */
          case 28 : /* fall through */
          case 30 : itype = ARM_INSN_MOV_REG_IMM_SHIFT; arm_extract_sfmt_mov_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : /* fall through */
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : itype = ARM_INSN_MOV_REG_REG_SHIFT; arm_extract_sfmt_mov_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 : itype = ARM_INSN_STRH_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 27 : itype = ARM_INSN_LDRH_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 29 : itype = ARM_INSN_LDRSB_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 31 : itype = ARM_INSN_LDRSH_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 14 :
        {
          unsigned int val = (((insn >> 16) & (1 << 4)) | ((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : /* fall through */
          case 16 : /* fall through */
          case 18 : /* fall through */
          case 20 : /* fall through */
          case 22 : /* fall through */
          case 24 : /* fall through */
          case 26 : /* fall through */
          case 28 : /* fall through */
          case 30 : itype = ARM_INSN_BIC_REG_IMM_SHIFT; arm_extract_sfmt_and_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : /* fall through */
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : itype = ARM_INSN_BIC_REG_REG_SHIFT; arm_extract_sfmt_and_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 : itype = ARM_INSN_STRH_PRE_INC_IMM_OFFSET; arm_extract_sfmt_strh_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 27 : itype = ARM_INSN_LDRH_PRE_INC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 29 : itype = ARM_INSN_LDRSB_PRE_INC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 31 : itype = ARM_INSN_LDRSH_PRE_INC_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 15 :
        {
          unsigned int val = (((insn >> 16) & (1 << 4)) | ((insn >> 4) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 2 : /* fall through */
          case 4 : /* fall through */
          case 6 : /* fall through */
          case 8 : /* fall through */
          case 10 : /* fall through */
          case 12 : /* fall through */
          case 14 : /* fall through */
          case 16 : /* fall through */
          case 18 : /* fall through */
          case 20 : /* fall through */
          case 22 : /* fall through */
          case 24 : /* fall through */
          case 26 : /* fall through */
          case 28 : /* fall through */
          case 30 : itype = ARM_INSN_MVN_REG_IMM_SHIFT; arm_extract_sfmt_mov_reg_imm_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : /* fall through */
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : itype = ARM_INSN_MVN_REG_REG_SHIFT; arm_extract_sfmt_mov_reg_reg_shift (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 11 : itype = ARM_INSN_STRH_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_strh_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 27 : itype = ARM_INSN_LDRH_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 29 : itype = ARM_INSN_LDRSB_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 31 : itype = ARM_INSN_LDRSH_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 16 : itype = ARM_INSN_AND_IMM; arm_extract_sfmt_and_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 17 : itype = ARM_INSN_EOR_IMM; arm_extract_sfmt_and_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 18 : itype = ARM_INSN_SUB_IMM; arm_extract_sfmt_add_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 19 : itype = ARM_INSN_RSB_IMM; arm_extract_sfmt_add_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 20 : itype = ARM_INSN_ADD_IMM; arm_extract_sfmt_add_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 21 : itype = ARM_INSN_ADC_IMM; arm_extract_sfmt_adc_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 22 : itype = ARM_INSN_SBC_IMM; arm_extract_sfmt_adc_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 23 : itype = ARM_INSN_RSC_IMM; arm_extract_sfmt_adc_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 24 : itype = ARM_INSN_TST_IMM; arm_extract_sfmt_tst_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 25 : itype = ARM_INSN_TEQ_IMM; arm_extract_sfmt_tst_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 26 : itype = ARM_INSN_CMP_IMM; arm_extract_sfmt_cmp_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 27 : itype = ARM_INSN_CMN_IMM; arm_extract_sfmt_cmp_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 28 : itype = ARM_INSN_ORR_IMM; arm_extract_sfmt_and_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 29 : itype = ARM_INSN_MOV_IMM; arm_extract_sfmt_mov_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 30 : itype = ARM_INSN_BIC_IMM; arm_extract_sfmt_and_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 31 : itype = ARM_INSN_MVN_IMM; arm_extract_sfmt_mov_imm (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 32 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_DEC_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_DEC_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 33 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_DEC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_DEC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 34 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_DEC_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_DEC_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 35 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_DEC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_DEC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 36 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_INC_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_INC_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 37 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_INC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_INC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 38 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_INC_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_INC_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 39 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_INC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_INC_NONPRIV_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 40 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_str_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_ldr_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 41 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 42 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_str_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_DEC_IMM_OFFSET; arm_extract_sfmt_ldr_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 43 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_DEC_WB_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 44 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_INC_IMM_OFFSET; arm_extract_sfmt_str_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_INC_IMM_OFFSET; arm_extract_sfmt_ldr_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 45 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 46 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_INC_IMM_OFFSET; arm_extract_sfmt_str_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_INC_IMM_OFFSET; arm_extract_sfmt_ldr_pre_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 47 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_str_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_INC_WB_IMM_OFFSET; arm_extract_sfmt_ldr_post_dec_imm_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 48 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_DEC_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_DEC_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 49 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_DEC_NONPRIV_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_DEC_NONPRIV_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 50 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_DEC_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_DEC_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 51 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_DEC_NONPRIV_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_DEC_NONPRIV_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 52 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_INC_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_INC_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 53 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_POST_INC_NONPRIV_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_POST_INC_NONPRIV_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 54 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_INC_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_INC_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 55 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_POST_INC_NONPRIV_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_POST_INC_NONPRIV_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 56 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_DEC_REG_OFFSET; arm_extract_sfmt_str_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_DEC_REG_OFFSET; arm_extract_sfmt_ldr_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 57 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 58 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_DEC_REG_OFFSET; arm_extract_sfmt_str_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_DEC_REG_OFFSET; arm_extract_sfmt_ldr_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 59 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_DEC_WB_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 60 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_INC_REG_OFFSET; arm_extract_sfmt_str_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_INC_REG_OFFSET; arm_extract_sfmt_ldr_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 61 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STR_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDR_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 62 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_INC_REG_OFFSET; arm_extract_sfmt_str_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_INC_REG_OFFSET; arm_extract_sfmt_ldr_pre_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 63 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STRB_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_str_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDRB_PRE_INC_WB_REG_OFFSET; arm_extract_sfmt_ldr_post_dec_reg_offset (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 64 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMDA; arm_extract_sfmt_stmdb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMDA; arm_extract_sfmt_ldmda (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 65 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMDA_WB; arm_extract_sfmt_stmdb_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMDA_WB; arm_extract_sfmt_ldmda_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 68 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMIA; arm_extract_sfmt_stmdb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMIA; arm_extract_sfmt_ldmda (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 69 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMIA_WB; arm_extract_sfmt_stmdb_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMIA_WB; arm_extract_sfmt_ldmda_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 72 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMDB; arm_extract_sfmt_stmdb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMDB; arm_extract_sfmt_ldmda (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 73 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMDB_WB; arm_extract_sfmt_stmdb_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMDB_WB; arm_extract_sfmt_ldmda_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 76 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMIB; arm_extract_sfmt_stmdb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMIB; arm_extract_sfmt_ldmda (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 77 :
        {
          unsigned int val = (((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : itype = ARM_INSN_STMIB_WB; arm_extract_sfmt_stmdb_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          case 1 : itype = ARM_INSN_LDMIB_WB; arm_extract_sfmt_ldmda_wb (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
          }
        }
      case 80 : /* fall through */
      case 81 : /* fall through */
      case 82 : /* fall through */
      case 83 : /* fall through */
      case 84 : /* fall through */
      case 85 : /* fall through */
      case 86 : /* fall through */
      case 87 : itype = ARM_INSN_B; arm_extract_sfmt_b (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 88 : /* fall through */
      case 89 : /* fall through */
      case 90 : /* fall through */
      case 91 : /* fall through */
      case 92 : /* fall through */
      case 93 : /* fall through */
      case 94 : /* fall through */
      case 95 : itype = ARM_INSN_BL; arm_extract_sfmt_bl (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      case 120 : /* fall through */
      case 121 : /* fall through */
      case 122 : /* fall through */
      case 123 : /* fall through */
      case 124 : /* fall through */
      case 125 : /* fall through */
      case 126 : /* fall through */
      case 127 : itype = ARM_INSN_SWI; arm_extract_sfmt_swi (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      default : itype = ARM_INSN_X_INVALID; arm_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn);  goto done;
      }
    }

  }

  /* The instruction has been decoded and fields extracted.  */
  done:
  {
    UINT f_cond;
    f_cond = EXTRACT_LSB0_UINT (base_insn, 32, 31, 4);
    this->cond = f_cond;
  }

  this->addr = pc;
  // FIXME: To be redone (to handle ISA variants).
  this->idesc = & arm_idesc::idesc_table[itype];
  // ??? record semantic handler?
  assert(this->idesc->sem_index == itype);
}

void
arm_extract_sfmt_empty (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.fmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_empty)\t"
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_b (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_b.f
    SI f_offset24;

    f_offset24 = ((((EXTRACT_LSB0_INT (insn, 32, 23, 24)) << (2))) + (((pc) + (8))));

  /* Record the fields for the semantic handler.  */
  FLD (i_offset24) = f_offset24;
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_b)\t"
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_bl (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_b.f
    SI f_offset24;

    f_offset24 = ((((EXTRACT_LSB0_INT (insn, 32, 23, 24)) << (2))) + (((pc) + (8))));

  /* Record the fields for the semantic handler.  */
  FLD (i_offset24) = f_offset24;
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bl)\t"
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_bx (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_bx.f
    UINT f_bx_rn;

    f_bx_rn = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_bx_rn) = f_bx_rn;
  FLD (i_bx_rn) = & current_cpu->hardware.h_gr[f_bx_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_bx)\t"
        << " f_bx_rn:0x" << hex << f_bx_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldr_post_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldr_post_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_uimm12;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_uimm12 = EXTRACT_LSB0_UINT (insn, 32, 11, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (f_uimm12) = f_uimm12;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldr_post_dec_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_uimm12:0x" << hex << f_uimm12 << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldr_post_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldr_post_dec_reg_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldr_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldr_post_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_uimm12;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_uimm12 = EXTRACT_LSB0_UINT (insn, 32, 11, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (f_uimm12) = f_uimm12;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldr_pre_dec_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_uimm12:0x" << hex << f_uimm12 << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldr_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldr_pre_dec_reg_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_str_post_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldr_post_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_uimm12;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_uimm12 = EXTRACT_LSB0_UINT (insn, 32, 11, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (f_uimm12) = f_uimm12;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_str_post_dec_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_uimm12:0x" << hex << f_uimm12 << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_str_post_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rd) = f_rd;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_str_post_dec_reg_offset)\t"
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_str_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldr_post_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_uimm12;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_uimm12 = EXTRACT_LSB0_UINT (insn, 32, 11, 12);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (f_uimm12) = f_uimm12;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_str_pre_dec_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_uimm12:0x" << hex << f_uimm12 << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_str_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rd) = f_rd;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_str_pre_dec_reg_offset)\t"
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_strh_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_strh_pre_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_offset4_hi;
    UINT f_offset4_lo;
    UINT f_hdt_offset8;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_offset4_hi = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_offset4_lo = EXTRACT_LSB0_UINT (insn, 32, 3, 4);
  f_hdt_offset8 = ((((f_offset4_hi) << (4))) | (f_offset4_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (i_hdt_offset8) = f_hdt_offset8;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_strh_pre_dec_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_strh_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_strh_pre_dec_reg_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_strh_pre_dec_wb_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_strh_pre_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_offset4_hi;
    UINT f_offset4_lo;
    UINT f_hdt_offset8;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_offset4_hi = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_offset4_lo = EXTRACT_LSB0_UINT (insn, 32, 3, 4);
  f_hdt_offset8 = ((((f_offset4_hi) << (4))) | (f_offset4_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (i_hdt_offset8) = f_hdt_offset8;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_strh_pre_dec_wb_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_strh_pre_dec_wb_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_strh_pre_dec_wb_reg_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldrsb_pre_dec_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_strh_pre_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_offset4_hi;
    UINT f_offset4_lo;
    UINT f_hdt_offset8;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_offset4_hi = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_offset4_lo = EXTRACT_LSB0_UINT (insn, 32, 3, 4);
  f_hdt_offset8 = ((((f_offset4_hi) << (4))) | (f_offset4_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (i_hdt_offset8) = f_hdt_offset8;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldrsb_pre_dec_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldrsb_pre_dec_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldrsb_pre_dec_reg_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldrsb_pre_dec_wb_imm_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_strh_pre_dec_imm_offset.f
    UINT f_rn;
    UINT f_rd;
    UINT f_offset4_hi;
    UINT f_offset4_lo;
    UINT f_hdt_offset8;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_offset4_hi = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_offset4_lo = EXTRACT_LSB0_UINT (insn, 32, 3, 4);
  f_hdt_offset8 = ((((f_offset4_hi) << (4))) | (f_offset4_lo));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rn) = f_rn;
  FLD (i_hdt_offset8) = f_hdt_offset8;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldrsb_pre_dec_wb_imm_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldrsb_pre_dec_wb_reg_offset (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldrsb_pre_dec_wb_reg_offset)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mul (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_mla.f
    UINT f_set_cc_;
    UINT f_mul_rd;
    UINT f_rs;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_mul_rd = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rs = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rs) = f_rs;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (f_mul_rd) = f_mul_rd;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rs) = & current_cpu->hardware.h_gr[f_rs];
  FLD (i_mul_rd) = & current_cpu->hardware.h_gr[f_mul_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mul)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rs:0x" << hex << f_rs << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << " f_mul_rd:0x" << hex << f_mul_rd << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mla (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_mla.f
    UINT f_set_cc_;
    UINT f_mul_rd;
    UINT f_mul_rn;
    UINT f_rs;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_mul_rd = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_mul_rn = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rs = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_mul_rn) = f_mul_rn;
  FLD (f_rm) = f_rm;
  FLD (f_rs) = f_rs;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (f_mul_rd) = f_mul_rd;
  FLD (i_mul_rn) = & current_cpu->hardware.h_gr[f_mul_rn];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rs) = & current_cpu->hardware.h_gr[f_rs];
  FLD (i_mul_rd) = & current_cpu->hardware.h_gr[f_mul_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mla)\t"
        << " f_mul_rn:0x" << hex << f_mul_rn << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rs:0x" << hex << f_rs << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << " f_mul_rd:0x" << hex << f_mul_rd << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_umull (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_umull.f
    UINT f_set_cc_;
    UINT f_rdhi;
    UINT f_rdlo;
    UINT f_rs;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rdhi = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rdlo = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rs = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rs) = f_rs;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (f_rdhi) = f_rdhi;
  FLD (f_rdlo) = f_rdlo;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rs) = & current_cpu->hardware.h_gr[f_rs];
  FLD (i_rdhi) = & current_cpu->hardware.h_gr[f_rdhi];
  FLD (i_rdlo) = & current_cpu->hardware.h_gr[f_rdlo];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_umull)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rs:0x" << hex << f_rs << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << " f_rdhi:0x" << hex << f_rdhi << dec
        << " f_rdlo:0x" << hex << f_rdlo << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_umlal (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_umull.f
    UINT f_set_cc_;
    UINT f_rdhi;
    UINT f_rdlo;
    UINT f_rs;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rdhi = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rdlo = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rs = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rdhi) = f_rdhi;
  FLD (f_rdlo) = f_rdlo;
  FLD (f_rm) = f_rm;
  FLD (f_rs) = f_rs;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rdhi) = & current_cpu->hardware.h_gr[f_rdhi];
  FLD (i_rdlo) = & current_cpu->hardware.h_gr[f_rdlo];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rs) = & current_cpu->hardware.h_gr[f_rs];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_umlal)\t"
        << " f_rdhi:0x" << hex << f_rdhi << dec
        << " f_rdlo:0x" << hex << f_rdlo << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rs:0x" << hex << f_rs << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_swp (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_rd) = f_rd;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swp)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_rd:0x" << hex << f_rd << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_swi (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_swi.f
    UINT f_swi_comment;

    f_swi_comment = EXTRACT_LSB0_UINT (insn, 32, 23, 24);

  /* Record the fields for the semantic handler.  */
  FLD (f_swi_comment) = f_swi_comment;
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_swi)\t"
        << " f_swi_comment:0x" << hex << f_swi_comment << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_and_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_and_reg_imm_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_and_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_reg_shift.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftreg;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftreg = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftreg) = f_operand2_shiftreg;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_operand2_shiftreg) = & current_cpu->hardware.h_gr[f_operand2_shiftreg];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_and_reg_reg_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftreg:0x" << hex << f_operand2_shiftreg << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_and_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_imm.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    SI f_imm12;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_imm12 = RORSI (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (255)), ((2) * (((unsigned int) (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (3840))) >> (8)))));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_imm12) = f_imm12;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_and_imm)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_imm12:0x" << hex << f_imm12 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mov_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_set_cc_;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mov_reg_imm_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mov_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_reg_shift.f
    UINT f_set_cc_;
    UINT f_rd;
    UINT f_operand2_shiftreg;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftreg = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftreg) = f_operand2_shiftreg;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_operand2_shiftreg) = & current_cpu->hardware.h_gr[f_operand2_shiftreg];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mov_reg_reg_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftreg:0x" << hex << f_operand2_shiftreg << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mov_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_imm.f
    UINT f_set_cc_;
    UINT f_rd;
    SI f_imm12;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_imm12 = RORSI (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (255)), ((2) * (((unsigned int) (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (3840))) >> (8)))));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_imm12) = f_imm12;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mov_imm)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_imm12:0x" << hex << f_imm12 << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_add_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add_reg_imm_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_add_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_reg_shift.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftreg;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftreg = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftreg) = f_operand2_shiftreg;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_operand2_shiftreg) = & current_cpu->hardware.h_gr[f_operand2_shiftreg];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add_reg_reg_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftreg:0x" << hex << f_operand2_shiftreg << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_add_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_imm.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    SI f_imm12;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_imm12 = RORSI (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (255)), ((2) * (((unsigned int) (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (3840))) >> (8)))));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_imm12) = f_imm12;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_add_imm)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_imm12:0x" << hex << f_imm12 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_adc_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_adc_reg_imm_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_adc_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_reg_shift.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftreg;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftreg = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftreg) = f_operand2_shiftreg;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_operand2_shiftreg) = & current_cpu->hardware.h_gr[f_operand2_shiftreg];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_adc_reg_reg_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftreg:0x" << hex << f_operand2_shiftreg << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_adc_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_imm.f
    UINT f_set_cc_;
    UINT f_rn;
    UINT f_rd;
    SI f_imm12;

    f_set_cc_ = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_imm12 = RORSI (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (255)), ((2) * (((unsigned int) (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (3840))) >> (8)))));

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_imm12) = f_imm12;
  FLD (f_rn) = f_rn;
  FLD (f_set_cc_) = f_set_cc_;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_adc_imm)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_imm12:0x" << hex << f_imm12 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_set_cc_:0x" << hex << f_set_cc_ << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_tst_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_tst_reg_imm_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_tst_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_reg_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftreg;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftreg = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftreg) = f_operand2_shiftreg;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_operand2_shiftreg) = & current_cpu->hardware.h_gr[f_operand2_shiftreg];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_tst_reg_reg_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftreg:0x" << hex << f_operand2_shiftreg << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_tst_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_tst_imm.f
    UINT f_rn;
    UINT f_ror_imm8_rotate;
    UINT f_ror_imm8_value;
    UINT f_ror_imm8;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_ror_imm8_rotate = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_ror_imm8_value = EXTRACT_LSB0_UINT (insn, 32, 7, 8);
{
  f_ror_imm8 = RORSI (f_ror_imm8_value, ((2) * (f_ror_imm8_rotate)));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_ror_imm8_rotate) = f_ror_imm8_rotate;
  FLD (f_rn) = f_rn;
  FLD (f_ror_imm8) = f_ror_imm8;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_tst_imm)\t"
        << " f_ror_imm8_rotate:0x" << hex << f_ror_imm8_rotate << dec
        << " f_rn:0x" << hex << f_rn << dec
        << " f_ror_imm8:0x" << hex << f_ror_imm8 << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_cmp_reg_imm_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftimm;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftimm = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftimm) = f_operand2_shiftimm;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_cmp_reg_imm_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftimm:0x" << hex << f_operand2_shiftimm << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_cmp_reg_reg_shift (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_reg_shift.f
    UINT f_rn;
    UINT f_rd;
    UINT f_operand2_shiftreg;
    UINT f_operand2_shifttype;
    UINT f_rm;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);
    f_operand2_shiftreg = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_operand2_shifttype = EXTRACT_LSB0_UINT (insn, 32, 6, 2);
    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (f_operand2_shiftreg) = f_operand2_shiftreg;
  FLD (f_operand2_shifttype) = f_operand2_shifttype;
  FLD (f_rm) = f_rm;
  FLD (f_rn) = f_rn;
  FLD (i_operand2_shiftreg) = & current_cpu->hardware.h_gr[f_operand2_shiftreg];
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_cmp_reg_reg_shift)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << " f_operand2_shiftreg:0x" << hex << f_operand2_shiftreg << dec
        << " f_operand2_shifttype:0x" << hex << f_operand2_shifttype << dec
        << " f_rm:0x" << hex << f_rm << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_cmp_imm (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_imm.f
    UINT f_rn;
    SI f_imm12;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_imm12 = RORSI (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (255)), ((2) * (((unsigned int) (((EXTRACT_LSB0_UINT (insn, 32, 11, 12)) & (3840))) >> (8)))));

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12) = f_imm12;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_cmp_imm)\t"
        << " f_imm12:0x" << hex << f_imm12 << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldmda (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldmda.f
    UINT f_rn;
    UINT f_reg_list;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_reg_list = EXTRACT_LSB0_UINT (insn, 32, 15, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_reg_list) = f_reg_list;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldmda)\t"
        << " f_reg_list:0x" << hex << f_reg_list << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_ldmda_wb (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldmda.f
    UINT f_rn;
    UINT f_reg_list;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_reg_list = EXTRACT_LSB0_UINT (insn, 32, 15, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_reg_list) = f_reg_list;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_ldmda_wb)\t"
        << " f_reg_list:0x" << hex << f_reg_list << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_stmdb (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldmda.f
    UINT f_rn;
    UINT f_reg_list;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_reg_list = EXTRACT_LSB0_UINT (insn, 32, 15, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_reg_list) = f_reg_list;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stmdb)\t"
        << " f_reg_list:0x" << hex << f_reg_list << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_stmdb_wb (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_ldmda.f
    UINT f_rn;
    UINT f_reg_list;

    f_rn = EXTRACT_LSB0_UINT (insn, 32, 19, 4);
    f_reg_list = EXTRACT_LSB0_UINT (insn, 32, 15, 16);

  /* Record the fields for the semantic handler.  */
  FLD (f_reg_list) = f_reg_list;
  FLD (f_rn) = f_rn;
  FLD (i_rn) = & current_cpu->hardware.h_gr[f_rn];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_stmdb_wb)\t"
        << " f_reg_list:0x" << hex << f_reg_list << dec
        << " f_rn:0x" << hex << f_rn << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mrs_c (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_strh_pre_dec_imm_offset.f
    UINT f_rd;

    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mrs_c)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_mrs_s (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_strh_pre_dec_imm_offset.f
    UINT f_rd;

    f_rd = EXTRACT_LSB0_UINT (insn, 32, 15, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  FLD (i_rd) = & current_cpu->hardware.h_gr[f_rd];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_mrs_s)\t"
        << " f_rd:0x" << hex << f_rd << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_msr_c (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rm;

    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_msr_c)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

#undef FLD
}

void
arm_extract_sfmt_msr_s (arm_scache* abuf, arm7f_cpu* current_cpu, PCADDR pc, arm_insn_word base_insn, arm_insn_word entire_insn){
    arm_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_and_reg_imm_shift.f
    UINT f_rm;

    f_rm = EXTRACT_LSB0_UINT (insn, 32, 3, 4);

  /* Record the fields for the semantic handler.  */
  FLD (f_rm) = f_rm;
  FLD (i_rm) = & current_cpu->hardware.h_gr[f_rm];
  if (current_cpu->trace_extract_p)
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_msr_s)\t"
        << " f_rm:0x" << hex << f_rm << dec
        << endl;
    }

#undef FLD
}

