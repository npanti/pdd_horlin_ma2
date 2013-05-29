/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Wed May 29 16:22:14 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculation.h"
#include "fprintf.h"
#include "BERCalculation_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = { 33, "fprintf",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo d_emlrtRSI = { 66, "fprintf",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo emlrtMCI = { 66, 14, "fprintf",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static real_T c_fprintf(real_T varargin_1);
static real_T e_fprintf(real_T varargin_1);
static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *e,
  const mxArray *f, emlrtMCInfo *location);

/* Function Definitions */
static real_T c_fprintf(real_T varargin_1)
{
  real_T nbytes;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 7 };

  const mxArray *m0;
  char_T cv0[7];
  int32_T i;
  static const char_T cv1[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'B', 'E', 'R', ' ', 'f', 'o', 'r', ' ', 'd',
    'a', 't', 'a', ':', ' ', '%', '.', '1', '0', 'f', '\\', 'n' };

  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_synchGlobalsToML();
  y = NULL;
  m0 = mxCreateCharArray(2, iv0);
  for (i = 0; i < 7; i++) {
    cv0[i] = cv1[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m0, cv0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateCharArray(2, iv1);
  for (i = 0; i < 21; i++) {
    cv2[i] = cv3[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv2);
  emlrtAssign(&b_y, m0);
  nbytes = emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y,
    emlrt_marshallOut(varargin_1), &emlrtMCI), "feval");
  emlrt_synchGlobalsFromML();
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static real_T e_fprintf(real_T varargin_1)
{
  real_T nbytes;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 7 };

  const mxArray *m1;
  char_T cv4[7];
  int32_T i;
  static const char_T cv5[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 25 };

  char_T cv6[25];
  static const char_T cv7[25] = { 'B', 'E', 'R', ' ', 'f', 'o', 'r', ' ', 'p',
    'r', 'e', 'a', 'm', 'b', 'l', 'e', ':', ' ', '%', '.', '1', '0', 'f', '\\',
    'n' };

  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_synchGlobalsToML();
  y = NULL;
  m1 = mxCreateCharArray(2, iv2);
  for (i = 0; i < 7; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m1, cv4);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = mxCreateCharArray(2, iv3);
  for (i = 0; i < 25; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 25, m1, cv6);
  emlrtAssign(&b_y, m1);
  nbytes = emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y,
    emlrt_marshallOut(varargin_1), &emlrtMCI), "feval");
  emlrt_synchGlobalsFromML();
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  return nbytes;
}

static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *e,
  const mxArray *f, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = e;
  pArrays[3] = f;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m5, 4, pArrays, "feval",
    TRUE, location);
}

void b_fprintf(real_T formatSpec)
{
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  c_fprintf(formatSpec);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
}

void d_fprintf(real_T formatSpec)
{
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  e_fprintf(formatSpec);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (fprintf.c) */
