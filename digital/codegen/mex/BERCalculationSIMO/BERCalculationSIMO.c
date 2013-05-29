/*
 * BERCalculationSIMO.c
 *
 * Code generation for function 'BERCalculationSIMO'
 *
 * C source code generated on: Wed May 29 17:02:01 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculationSIMO.h"
#include "fprintf.h"
#include "BERCalculationSIMO_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 16, "BERCalculationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculationSIMO.m"
};

static emlrtRSInfo b_emlrtRSI = { 26, "BERCalculationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculationSIMO.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 21, 12, "bitsRX", "BERCalculationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculationSIMO.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 21, 23, "d.preamble",
  "BERCalculationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculationSIMO.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 11, 12, "bitsRX", "BERCalculationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculationSIMO.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 11, 23, "d.data", "BERCalculationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculationSIMO.m",
  0 };

/* Function Definitions */
real_T BERCalculationSIMO(const emxArray_real_T *bitsRX, real_T type)
{
  real_T BER;
  real_T incorrectBits;
  int32_T m;
  int32_T i0;
  int32_T i1;

  /* type=0 ->preamble */
  /* type=1 ->data */
  if (type == 1.0) {
    incorrectBits = 0.0;
    m = 1;
    while (m - 1 <= bitsRX->size[0] - 1) {
      i0 = bitsRX->size[0];
      i1 = d.data->size[0];
      if (bitsRX->data[emlrtDynamicBoundsCheckFastR2012b(m, 1, i0, &c_emlrtBCI,
           emlrtRootTLSGlobal) - 1] != d.data->
          data[emlrtDynamicBoundsCheckFastR2012b(m, 1, i1, &d_emlrtBCI,
           emlrtRootTLSGlobal) - 1]) {
        incorrectBits++;
      }

      m++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    BER = incorrectBits / d.messageLength;
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    b_fprintf(BER);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);

    /* disp(['BER for data: ',num2str(BER)]); */
  } else if (type == 0.0) {
    incorrectBits = 0.0;
    m = 1;
    while (m - 1 <= bitsRX->size[0] - 1) {
      i0 = bitsRX->size[0];
      i1 = d.preamble->size[0];
      if (bitsRX->data[emlrtDynamicBoundsCheckFastR2012b(m, 1, i0, &emlrtBCI,
           emlrtRootTLSGlobal) - 1] != d.preamble->
          data[emlrtDynamicBoundsCheckFastR2012b(m, 1, i1, &b_emlrtBCI,
           emlrtRootTLSGlobal) - 1]) {
        incorrectBits++;
      }

      m++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    BER = incorrectBits / (real_T)bitsRX->size[0];
    emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    d_fprintf(BER);
    emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);

    /* disp(['BER for preamble: ',num2str(BER)]); */
  } else {
    BER = -1.0;
  }

  return BER;
}

/* End of code generation (BERCalculationSIMO.c) */
