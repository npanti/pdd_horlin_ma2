/*
 * signalPower.c
 *
 * Code generation for function 'signalPower'
 *
 * C source code generated on: Wed May 29 17:00:04 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisationSIMO.h"
#include "signalPower.h"
#include "timeSynchronisationSIMO_emxutil.h"
#include "timeSynchronisationSIMO_mexutil.h"
#include "abs.h"
#include "timeSynchronisationSIMO_data.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 6, "signalPower",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m" };

static emlrtRSInfo q_emlrtRSI = { 31, "eml_xdotu",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m"
};

static emlrtRSInfo r_emlrtRSI = { 28, "eml_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m" };

static emlrtRSInfo t_emlrtRSI = { 28, "eml_blas_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

static emlrtRSInfo y_emlrtRSI = { 64, "eml_blas_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

static emlrtRSInfo ab_emlrtRSI = { 65, "eml_blas_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

static emlrtRSInfo bb_emlrtRSI = { 66, "eml_blas_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

static emlrtRSInfo cb_emlrtRSI = { 70, "eml_blas_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

static emlrtRSInfo db_emlrtRSI = { 73, "eml_blas_xdot",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m"
};

static emlrtRSInfo eb_emlrtRSI = { 14, "eml_c_cast",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_c_cast.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 14, "signalPower",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m" };

/* Function Definitions */
real_T signalPower(const emxArray_creal_T *input)
{
  real_T out;
  emxArray_real_T *a;
  emxArray_real_T *b;
  int32_T i2;
  int32_T i;
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv17[45];
  static const char_T cv18[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 21 };

  char_T cv19[21];
  static const char_T cv20[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T c_y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&a, 2, &f_emlrtRTEI, TRUE);
  emxInit_real_T(&b, 1, &f_emlrtRTEI, TRUE);

  /* out=input'*input/sentBitsSize; */
  /* out=abs(out); */
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  b_abs(input, b);
  i2 = a->size[0] * a->size[1];
  a->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)a, i2, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  i = b->size[0];
  i2 = a->size[0] * a->size[1];
  a->size[1] = i;
  emxEnsureCapacity((emxArray__common *)a, i2, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  i = b->size[0];
  for (i2 = 0; i2 < i; i2++) {
    a->data[i2] = b->data[i2];
  }

  b_abs(input, b);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  if (!(a->size[1] == b->size[0])) {
    if ((a->size[1] == 1) || (b->size[0] == 1)) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_synchGlobalsToML();
      y = NULL;
      m1 = mxCreateCharArray(2, iv11);
      for (i = 0; i < 45; i++) {
        cv17[i] = cv18[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m1, cv17);
      emlrtAssign(&y, m1);
      error(message(y, &i_emlrtMCI), &j_emlrtMCI);
      emlrt_synchGlobalsFromML();
      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_synchGlobalsToML();
      b_y = NULL;
      m1 = mxCreateCharArray(2, iv12);
      for (i = 0; i < 21; i++) {
        cv19[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m1, cv19);
      emlrtAssign(&b_y, m1);
      error(message(b_y, &k_emlrtMCI), &l_emlrtMCI);
      emlrt_synchGlobalsFromML();
      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    c_y = 0.0;
    for (i2 = 0; i2 < a->size[1]; i2++) {
      c_y += a->data[a->size[0] * i2] * b->data[i2];
    }
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    if (a->size[1] < 1) {
      c_y = 0.0;
    } else {
      emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_checkEscapedGlobals();
      n_t = (ptrdiff_t)(a->size[1]);
      emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_checkEscapedGlobals();
      incx_t = (ptrdiff_t)(1);
      emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_checkEscapedGlobals();
      incy_t = (ptrdiff_t)(1);
      emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_checkEscapedGlobals();
      xix0_t = (double *)(&a->data[0]);
      emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_checkEscapedGlobals();
      yiy0_t = (double *)(&b->data[0]);
      emlrtPopRtStackR2012b(&db_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_checkEscapedGlobals();
      c_y = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
      emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&b);
  emxFree_real_T(&a);
  out = c_y / (real_T)input->size[0];
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  return out;
}

/* End of code generation (signalPower.c) */
