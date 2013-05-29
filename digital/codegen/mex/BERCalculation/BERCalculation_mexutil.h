/*
 * BERCalculation_mexutil.h
 *
 * Code generation for function 'BERCalculation_mexutil'
 *
 * C source code generated on: Wed May 29 16:57:06 2013
 *
 */

#ifndef __BERCALCULATION_MEXUTIL_H__
#define __BERCALCULATION_MEXUTIL_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "BERCalculation_types.h"

/* Function Declarations */
extern real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId);
#ifdef __WATCOMC__
#pragma aux b_emlrt_marshallIn value [8087];
#endif
extern const mxArray *b_emlrt_marshallOut(const struct_T *u);
extern void e_emlrt_marshallIn(const mxArray *c_d, const char_T *identifier, struct_T *y);
extern void emlrt_checkEscapedGlobals(void);
extern real_T emlrt_marshallIn(const mxArray *b_feval, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux emlrt_marshallIn value [8087];
#endif
extern const mxArray *emlrt_marshallOut(real_T u);
extern void emlrt_synchGlobalsFromML(void);
extern void emlrt_synchGlobalsToML(void);
#endif
/* End of code generation (BERCalculation_mexutil.h) */
