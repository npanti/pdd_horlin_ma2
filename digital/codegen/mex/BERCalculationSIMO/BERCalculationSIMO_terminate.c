/*
 * BERCalculationSIMO_terminate.c
 *
 * Code generation for function 'BERCalculationSIMO_terminate'
 *
 * C source code generated on: Wed May 29 17:02:01 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculationSIMO.h"
#include "BERCalculationSIMO_terminate.h"
#include "BERCalculationSIMO_emxutil.h"
#include "BERCalculationSIMO_data.h"
#include <stdio.h>

/* Function Definitions */
void BERCalculationSIMO_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emxFreeStruct_struct_T(&d);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void BERCalculationSIMO_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (BERCalculationSIMO_terminate.c) */
