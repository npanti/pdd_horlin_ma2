/*
 * timeSynchronisationSIMO_terminate.c
 *
 * Code generation for function 'timeSynchronisationSIMO_terminate'
 *
 * C source code generated on: Wed May 29 13:24:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisationSIMO.h"
#include "timeSynchronisationSIMO_terminate.h"
#include "timeSynchronisationSIMO_emxutil.h"
#include "timeSynchronisationSIMO_data.h"

/* Function Definitions */
void timeSynchronisationSIMO_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emxFreeStruct_struct_T(&d);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void timeSynchronisationSIMO_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (timeSynchronisationSIMO_terminate.c) */
