/*
 * timeSynchronisationSIMO_mexutil.h
 *
 * Code generation for function 'timeSynchronisationSIMO_mexutil'
 *
 * C source code generated on: Wed May 29 17:00:01 2013
 *
 */

#ifndef __TIMESYNCHRONISATIONSIMO_MEXUTIL_H__
#define __TIMESYNCHRONISATIONSIMO_MEXUTIL_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "timeSynchronisationSIMO_types.h"

/* Function Declarations */
extern void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
extern const mxArray *b_emlrt_marshallOut(const struct_T *u);
extern void c_emlrt_marshallIn(const mxArray *c_d, const char_T *identifier, struct_T *y);
extern const mxArray *c_emlrt_marshallOut(real_T u);
extern void emlrt_checkEscapedGlobals(void);
extern void emlrt_synchGlobalsFromML(void);
extern void emlrt_synchGlobalsToML(void);
extern void error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const mxArray *b, emlrtMCInfo *location);
#endif
/* End of code generation (timeSynchronisationSIMO_mexutil.h) */
