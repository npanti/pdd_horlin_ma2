/*
 * timeSynchronisation_terminate.c
 *
 * Code generation for function 'timeSynchronisation_terminate'
 *
 * C source code generated on: Wed May 29 16:20:33 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisation.h"
#include "timeSynchronisation_terminate.h"
#include "timeSynchronisation_emxutil.h"
#include "timeSynchronisation_data.h"

/* Function Definitions */
void timeSynchronisation_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emxFreeStruct_struct_T(&d);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void timeSynchronisation_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (timeSynchronisation_terminate.c) */
