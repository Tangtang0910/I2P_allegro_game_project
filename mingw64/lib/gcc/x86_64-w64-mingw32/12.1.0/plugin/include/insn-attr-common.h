/* Generated automatically by the program `genattr-common'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_COMMON_H
#define GCC_INSN_ATTR_COMMON_H

enum attr_cpu {CPU_NONE, CPU_PENTIUM, CPU_PENTIUMPRO, CPU_GEODE, CPU_K6, CPU_ATHLON, CPU_K8, CPU_CORE2, CPU_NEHALEM, CPU_ATOM, CPU_SLM, CPU_GLM, CPU_HASWELL, CPU_GENERIC, CPU_AMDFAM10, CPU_BDVER1, CPU_BDVER2, CPU_BDVER3, CPU_BDVER4, CPU_BTVER2, CPU_ZNVER1, CPU_ZNVER2, CPU_ZNVER3};
enum attr_type {TYPE_OTHER, TYPE_MULTI, TYPE_ALU, TYPE_ALU1, TYPE_NEGNOT, TYPE_IMOV, TYPE_IMOVX, TYPE_LEA, TYPE_INCDEC, TYPE_ISHIFT, TYPE_ISHIFTX, TYPE_ISHIFT1, TYPE_ROTATE, TYPE_ROTATEX, TYPE_ROTATE1, TYPE_IMUL, TYPE_IMULX, TYPE_IDIV, TYPE_ICMP, TYPE_TEST, TYPE_IBR, TYPE_SETCC, TYPE_ICMOV, TYPE_PUSH, TYPE_POP, TYPE_CALL, TYPE_CALLV, TYPE_LEAVE, TYPE_STR, TYPE_BITMANIP, TYPE_FMOV, TYPE_FOP, TYPE_FSGN, TYPE_FMUL, TYPE_FDIV, TYPE_FPSPC, TYPE_FCMOV, TYPE_FCMP, TYPE_FXCH, TYPE_FISTP, TYPE_FISTTP, TYPE_FRNDINT, TYPE_SSE, TYPE_SSEMOV, TYPE_SSEADD, TYPE_SSEADD1, TYPE_SSEIADD, TYPE_SSEIADD1, TYPE_SSEMUL, TYPE_SSEIMUL, TYPE_SSEDIV, TYPE_SSELOG, TYPE_SSELOG1, TYPE_SSEISHFT, TYPE_SSEISHFT1, TYPE_SSECMP, TYPE_SSECOMI, TYPE_SSECVT, TYPE_SSECVT1, TYPE_SSEICVT, TYPE_SSEINS, TYPE_SSESHUF, TYPE_SSESHUF1, TYPE_SSEMULADD, TYPE_SSE4ARG, TYPE_LWP, TYPE_MSKMOV, TYPE_MSKLOG, TYPE_MMX, TYPE_MMXMOV, TYPE_MMXADD, TYPE_MMXMUL, TYPE_MMXCMP, TYPE_MMXCVT, TYPE_MMXSHFT};
enum attr_mode {MODE_UNKNOWN, MODE_NONE, MODE_QI, MODE_HI, MODE_SI, MODE_DI, MODE_TI, MODE_OI, MODE_XI, MODE_HF, MODE_SF, MODE_DF, MODE_XF, MODE_TF, MODE_V32HF, MODE_V16HF, MODE_V8HF, MODE_V16SF, MODE_V8SF, MODE_V4DF, MODE_V4SF, MODE_V2DF, MODE_V2SF, MODE_V1DF, MODE_V8DF, MODE_V4HF, MODE_V2HF};
enum attr_unit {UNIT_INTEGER, UNIT_I387, UNIT_SSE, UNIT_MMX, UNIT_UNKNOWN};
enum attr_prefix {PREFIX_ORIG, PREFIX_VEX, PREFIX_MAYBE_VEX, PREFIX_EVEX, PREFIX_MAYBE_EVEX};
enum attr_memory {MEMORY_NONE, MEMORY_LOAD, MEMORY_STORE, MEMORY_BOTH, MEMORY_UNKNOWN};
enum attr_imm_disp {IMM_DISP_FALSE, IMM_DISP_TRUE, IMM_DISP_UNKNOWN};
enum attr_fp_int_src {FP_INT_SRC_FALSE, FP_INT_SRC_TRUE};
enum attr_i387_cw {I387_CW_ROUNDEVEN, I387_CW_FLOOR, I387_CW_CEIL, I387_CW_TRUNC, I387_CW_UNINITIALIZED, I387_CW_ANY};
enum attr_avx_partial_xmm_update {AVX_PARTIAL_XMM_UPDATE_FALSE, AVX_PARTIAL_XMM_UPDATE_TRUE};
enum attr_use_carry {USE_CARRY_0, USE_CARRY_1};
enum attr_movu {MOVU_0, MOVU_1};
enum attr_isa {ISA_BASE, ISA_X64, ISA_NOX64, ISA_X64_SSE2, ISA_X64_SSE4, ISA_X64_SSE4_NOAVX, ISA_X64_AVX, ISA_X64_AVX512BW, ISA_X64_AVX512DQ, ISA_SSE_NOAVX, ISA_SSE2, ISA_SSE2_NOAVX, ISA_SSE3, ISA_SSE3_NOAVX, ISA_SSE4, ISA_SSE4_NOAVX, ISA_AVX, ISA_NOAVX, ISA_AVX2, ISA_NOAVX2, ISA_BMI, ISA_BMI2, ISA_FMA4, ISA_FMA, ISA_AVX512F, ISA_NOAVX512F, ISA_AVX512BW, ISA_NOAVX512BW, ISA_AVX512DQ, ISA_NOAVX512DQ, ISA_FMA_OR_AVX512VL, ISA_AVX512VL, ISA_NOAVX512VL, ISA_AVXVNNI, ISA_AVX512VNNIVL, ISA_AVX512FP16};
enum attr_mmx_isa {MMX_ISA_BASE, MMX_ISA_NATIVE, MMX_ISA_SSE, MMX_ISA_SSE_NOAVX, MMX_ISA_AVX};
enum attr_pent_prefix {PENT_PREFIX_FALSE, PENT_PREFIX_TRUE};
enum attr_pent_pair {PENT_PAIR_UV, PENT_PAIR_PU, PENT_PAIR_PV, PENT_PAIR_NP};
enum attr_athlon_decode {ATHLON_DECODE_DIRECT, ATHLON_DECODE_VECTOR, ATHLON_DECODE_DOUBLE};
enum attr_amdfam10_decode {AMDFAM10_DECODE_DIRECT, AMDFAM10_DECODE_VECTOR, AMDFAM10_DECODE_DOUBLE};
enum attr_bdver1_decode {BDVER1_DECODE_DIRECT, BDVER1_DECODE_VECTOR, BDVER1_DECODE_DOUBLE};
enum attr_btver2_decode {BTVER2_DECODE_DIRECT, BTVER2_DECODE_VECTOR, BTVER2_DECODE_DOUBLE};
enum attr_btver2_sse_attr {BTVER2_SSE_ATTR_OTHER, BTVER2_SSE_ATTR_RCP, BTVER2_SSE_ATTR_SQRT, BTVER2_SSE_ATTR_MAXMIN};
enum attr_znver1_decode {ZNVER1_DECODE_DIRECT, ZNVER1_DECODE_VECTOR, ZNVER1_DECODE_DOUBLE};
enum attr_atom_unit {ATOM_UNIT_SISHUF, ATOM_UNIT_SIMUL, ATOM_UNIT_JEU, ATOM_UNIT_COMPLEX, ATOM_UNIT_OTHER};
enum attr_atom_sse_attr {ATOM_SSE_ATTR_RCP, ATOM_SSE_ATTR_MOVDUP, ATOM_SSE_ATTR_LFENCE, ATOM_SSE_ATTR_FENCE, ATOM_SSE_ATTR_PREFETCH, ATOM_SSE_ATTR_SQRT, ATOM_SSE_ATTR_MXCSR, ATOM_SSE_ATTR_OTHER};
enum attr_i7_domain {I7_DOMAIN_INT, I7_DOMAIN_FLOAT, I7_DOMAIN_SIMD};
enum attr_hsw_domain {HSW_DOMAIN_INT, HSW_DOMAIN_FLOAT, HSW_DOMAIN_SIMD};
enum attr_unord_subst {UNORD_SUBST_NO, UNORD_SUBST_YES};
enum attr_mask {MASK_NO, MASK_YES};
enum attr_maskc {MASKC_NO, MASKC_YES};
enum attr_merge_mask {MERGE_MASK_NO, MERGE_MASK_YES};
enum attr_mask_scalar_merge {MASK_SCALAR_MERGE_NO, MASK_SCALAR_MERGE_YES};
enum attr_sd {SD_NO, SD_YES};
enum attr_maskz_scalar {MASKZ_SCALAR_NO, MASKZ_SCALAR_YES};
enum attr_sdc {SDC_NO, SDC_YES};
enum attr_round {ROUND_NO, ROUND_YES};
enum attr_round_saeonly {ROUND_SAEONLY_NO, ROUND_SAEONLY_YES};
enum attr_round_expand {ROUND_EXPAND_NO, ROUND_EXPAND_YES};
enum attr_round_saeonly_expand {ROUND_SAEONLY_EXPAND_NO, ROUND_SAEONLY_EXPAND_YES};
enum attr_mask_expand4 {MASK_EXPAND4_NO, MASK_EXPAND4_YES};
enum attr_mask_scalar {MASK_SCALAR_NO, MASK_SCALAR_YES};
enum attr_mask_scalarcz {MASK_SCALARCZ_NO, MASK_SCALARCZ_YES};
enum attr_mask_scalarc {MASK_SCALARC_NO, MASK_SCALARC_YES};
enum attr_round_scalar {ROUND_SCALAR_NO, ROUND_SCALAR_YES};
enum attr_round_scalarcz {ROUND_SCALARCZ_NO, ROUND_SCALARCZ_YES};
enum attr_round_saeonly_scalar {ROUND_SAEONLY_SCALAR_NO, ROUND_SAEONLY_SCALAR_YES};
enum attr_maskz_half {MASKZ_HALF_NO, MASKZ_HALF_YES};
#define INSN_SCHEDULING
#define DELAY_SLOTS 0

#endif /* GCC_INSN_ATTR_COMMON_H */
