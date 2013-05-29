/*
 * BERCalculation_terminate.c
 *
 * Code generation for function 'BERCalculation_terminate'
 *
 * C source code generated on: Wed May 29 16:57:07 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculation.h"
#include "BERCalculation_terminate.h"
#include <stdio.h>

/* Function Definitions */
void BERCalculation_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void BERCalculation_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (BERCalculation_terminate.c) */
