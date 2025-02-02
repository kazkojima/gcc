/* { dg-do compile } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3 -ftree-vectorize -fdump-rtl-expand-details" } */
/* { dg-skip-if "" { *-*-* } { "-flto" } } */

#include "../vec_sat_arith.h"

DEF_VEC_SAT_U_ADD_IMM_FMT_3(uint64_t, 9223372036854775807ull)

/* { dg-final { scan-rtl-dump-times ".SAT_ADD " 2 "expand" } } */
