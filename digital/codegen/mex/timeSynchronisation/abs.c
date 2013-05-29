/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Wed May 29 16:20:33 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisation.h"
#include "abs.h"
#include "timeSynchronisation_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 16, 5, "abs",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/elfun/abs.m" };

/* Function Definitions */
void b_abs(const emxArray_creal_T *x, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  unnamed_idx_0 = (uint32_T)x->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = muDoubleScalarHypot(x->data[k].re, x->data[k].im);
  }
}

/* End of code generation (abs.c) */
