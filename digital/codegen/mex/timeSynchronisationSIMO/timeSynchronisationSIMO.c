/*
 * timeSynchronisationSIMO.c
 *
 * Code generation for function 'timeSynchronisationSIMO'
 *
 * C source code generated on: Wed May 29 16:15:18 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisationSIMO.h"
#include "timeSynchronisationSIMO_mexutil.h"
#include "timeSynchronisationSIMO_emxutil.h"
#include "signalPower.h"
#include "timeSynchronisationSIMO_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 27, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo b_emlrtRSI = { 28, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo c_emlrtRSI = { 29, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo d_emlrtRSI = { 30, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo e_emlrtRSI = { 33, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo f_emlrtRSI = { 34, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo g_emlrtRSI = { 35, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo h_emlrtRSI = { 10, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo i_emlrtRSI = { 12, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo j_emlrtRSI = { 20, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo k_emlrtRSI = { 23, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRSInfo v_emlrtRSI = { 31, "eml_refblas_xdotx",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m"
};

static emlrtRSInfo w_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo x_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo fb_emlrtRSI = { 33, "eml_xdotu",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m"
};

static emlrtRSInfo gb_emlrtRSI = { 22, "eml_blas_xdotu",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdotu.m"
};

static emlrtRSInfo hb_emlrtRSI = { 14, "eml_refblas_xdotu",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotu.m"
};

static emlrtRSInfo ib_emlrtRSI = { 17, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtRSInfo jb_emlrtRSI = { 20, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtRSInfo kb_emlrtRSI = { 36, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtRSInfo lb_emlrtRSI = { 61, "sum",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo mb_emlrtRSI = { 18, "max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo nb_emlrtRSI = { 15, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo ob_emlrtRSI = { 38, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo pb_emlrtRSI = { 73, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo qb_emlrtRSI = { 88, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo rb_emlrtRSI = { 219, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo sb_emlrtRSI = { 192, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo emlrtMCI = { 27, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo b_emlrtMCI = { 28, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo c_emlrtMCI = { 29, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo d_emlrtMCI = { 30, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo e_emlrtMCI = { 33, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo f_emlrtMCI = { 34, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo g_emlrtMCI = { 35, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo h_emlrtMCI = { 32, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtMCInfo m_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo n_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo o_emlrtMCI = { 18, 9, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtMCInfo p_emlrtMCI = { 17, 19, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtMCInfo q_emlrtMCI = { 23, 9, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtMCInfo r_emlrtMCI = { 20, 19, "mean",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtMCInfo s_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo t_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo u_emlrtMCI = { 74, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo v_emlrtMCI = { 73, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2013a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 16, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 6, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 18, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 4, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 20, 29, "correlation",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtDCInfo emlrtDCI = { 20, 29, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  1 };

static emlrtRTEInfo i_emlrtRTEI = { 19, 1, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 13, 20, "correlation",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 12, 26, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 12, 26, "input",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 12, 26, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  1 };

static emlrtECInfo b_emlrtECI = { -1, 11, 8, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtBCInfo d_emlrtBCI = { -1, -1, 11, 8, "input",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 11, 8, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  1 };

static emlrtECInfo c_emlrtECI = { -1, 10, 20, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m"
};

static emlrtBCInfo e_emlrtBCI = { -1, -1, 10, 20, "input",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 10, 20, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  1 };

static emlrtDCInfo e_emlrtDCI = { 4, 11, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  1 };

static emlrtDCInfo f_emlrtDCI = { 4, 11, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  4 };

static emlrtDCInfo g_emlrtDCI = { 6, 21, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  4 };

static emlrtDCInfo h_emlrtDCI = { 18, 25, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  1 };

static emlrtDCInfo i_emlrtDCI = { 18, 25, "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  4 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 20, 5, "correlationMean",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 12, 5, "correlation",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 13, 5, "correlation",
  "timeSynchronisationSIMO",
  "/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisationSIMO.m",
  0 };

/* Function Declarations */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location);
static void check_forloop_overflow_error(void);
static const mxArray *emlrt_marshallOut(emxArray_real_T *u);
static void figure(emlrtMCInfo *location);
static void plot(const mxArray *b, emlrtMCInfo *location);
static void xlabel(const mxArray *b, emlrtMCInfo *location);
static void ylabel(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[2];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m8, 2, pArrays, "message",
    TRUE, location);
}

static void check_forloop_overflow_error(void)
{
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 34 };

  const mxArray *m2;
  char_T cv21[34];
  int32_T i;
  static const char_T cv22[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 23 };

  char_T cv23[23];
  static const char_T cv24[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
  emlrt_synchGlobalsToML();
  y = NULL;
  m2 = mxCreateCharArray(2, iv13);
  for (i = 0; i < 34; i++) {
    cv21[i] = cv22[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m2, cv21);
  emlrtAssign(&y, m2);
  b_y = NULL;
  m2 = mxCreateCharArray(2, iv14);
  for (i = 0; i < 23; i++) {
    cv23[i] = cv24[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m2, cv23);
  emlrtAssign(&b_y, m2);
  error(b_message(y, b_y, &m_emlrtMCI), &n_emlrtMCI);
  emlrt_synchGlobalsFromML();
  emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T (*pData)[];
  int32_T i3;
  int32_T i;
  y = NULL;
  m3 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m3);
  i3 = 0;
  for (i = 0; i < u->size[1]; i++) {
    (*pData)[i3] = u->data[u->size[0] * i];
    i3++;
  }

  emlrtAssign(&y, m3);
  return y;
}

static void figure(emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 0, NULL, "figure", TRUE,
                        location);
}

static void plot(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "plot", TRUE,
                        location);
}

static void xlabel(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "xlabel", TRUE,
                        location);
}

static void ylabel(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "ylabel", TRUE,
                        location);
}

real_T timeSynchronisationSIMO(const emxArray_creal_T *input)
{
  real_T b_index;
  emxArray_real_T *correlation;
  real_T x_im;
  real_T indexMax;
  int32_T i0;
  int32_T i1;
  int32_T ixstart;
  int32_T i;
  emxArray_creal_T *x;
  emxArray_creal_T *b_input;
  emxArray_int32_T *r0;
  int32_T itmp;
  real_T Ps;
  real_T mtmp;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T re;
  real_T im;
  emxArray_real_T *correlationMean;
  int32_T j;
  boolean_T overflow;
  boolean_T p;
  int32_T exitg2;
  int32_T iv2[2];
  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 31 };

  char_T cv4[31];
  static const char_T cv5[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 'e', 'a', 'n', '_', 's', 'p', 'e', 'c', 'i',
    'a', 'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *d_y;
  static const int32_T iv4[2] = { 1, 36 };

  char_T cv6[36];
  static const char_T cv7[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T b0;
  const mxArray *e_y;
  static const int32_T iv5[2] = { 1, 36 };

  const mxArray *f_y;
  static const int32_T iv6[2] = { 1, 39 };

  char_T cv8[39];
  static const char_T cv9[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg1;
  const mxArray *g_y;
  static const int32_T iv7[2] = { 1, 13 };

  char_T cv10[13];
  static const char_T cv11[13] = { 'S', 'a', 'm', 'p', 'l', 'e', ' ', 'n', 'u',
    'm', 'b', 'e', 'r' };

  const mxArray *h_y;
  static const int32_T iv8[2] = { 1, 11 };

  char_T cv12[11];
  static const char_T cv13[11] = { 'C', 'o', 'r', 'r', 'e', 'l', 'a', 't', 'i',
    'o', 'n' };

  const mxArray *i_y;
  static const int32_T iv9[2] = { 1, 13 };

  static const char_T cv14[13] = { 's', 'a', 'm', 'p', 'l', 'e', ' ', 'n', 'u',
    'm', 'b', 'e', 'r' };

  const mxArray *j_y;
  static const int32_T iv10[2] = { 1, 20 };

  char_T cv15[20];
  static const char_T cv16[20] = { 'm', 'e', 'a', 'n', ' ', ' ', 'o', 'f', ' ',
    'c', 'o', 'r', 'r', 'e', 'l', 'a', 't', 'i', 'o', 'n' };

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  b_emxInit_real_T(&correlation, 2, &c_emlrtRTEI, TRUE);
  x_im = d.subCarriers;
  x_im = emlrtNonNegativeCheckFastR2012b(x_im, &f_emlrtDCI, emlrtRootTLSGlobal);
  emlrtIntegerCheckFastR2012b(x_im, &e_emlrtDCI, emlrtRootTLSGlobal);

  /* utilise pour calculer la correlation */
  indexMax = (real_T)input->size[0] - 2.0 * (real_T)(int32_T)d.subCarriers;
  i0 = correlation->size[0] * correlation->size[1];
  correlation->size[0] = 1;
  i1 = (int32_T)indexMax;
  correlation->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(i1,
    &g_emlrtDCI, emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)correlation, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  i0 = (int32_T)indexMax;
  ixstart = (int32_T)emlrtNonNegativeCheckFastR2012b(i0, &g_emlrtDCI,
    emlrtRootTLSGlobal);
  for (i0 = 0; i0 < ixstart; i0++) {
    correlation->data[i0] = 0.0;
  }

  /* Compute cross-correlation */
  i = 0;
  b_emxInit_creal_T(&x, 2, &e_emlrtRTEI, TRUE);
  emxInit_creal_T(&b_input, 1, &b_emlrtRTEI, TRUE);
  emxInit_int32_T(&r0, 1, &b_emlrtRTEI, TRUE);
  while (i <= (int32_T)indexMax - 1) {
    x_im = (d.subCarriers * d.numberPreamble + (1.0 + (real_T)i)) - 1.0;
    if (1.0 + (real_T)i > x_im) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = input->size[0];
      i1 = 1 + i;
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i1 = input->size[0];
      itmp = (int32_T)emlrtIntegerCheckFastR2012b(x_im, &d_emlrtDCI,
        emlrtRootTLSGlobal);
      i1 = emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i1, &e_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    emlrtVectorVectorIndexCheckR2012b(input->size[0], 1, 1, i1 - i0, &c_emlrtECI,
      emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    itmp = b_input->size[0];
    b_input->size[0] = i1 - i0;
    emxEnsureCapacity((emxArray__common *)b_input, itmp, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    ixstart = i1 - i0;
    for (i1 = 0; i1 < ixstart; i1++) {
      b_input->data[i1] = input->data[i0 + i1];
    }

    Ps = signalPower(b_input);
    emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    x_im = (d.subCarriers + (1.0 + (real_T)i)) - 1.0;
    if (1.0 + (real_T)i > x_im) {
      i0 = 1;
      i1 = 1;
    } else {
      i0 = input->size[0];
      i1 = 1 + i;
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI,
        emlrtRootTLSGlobal);
      i1 = input->size[0];
      itmp = (int32_T)emlrtIntegerCheckFastR2012b(x_im, &c_emlrtDCI,
        emlrtRootTLSGlobal);
      i1 = emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i1, &d_emlrtBCI,
        emlrtRootTLSGlobal) + 1;
    }

    emlrtVectorVectorIndexCheckR2012b(input->size[0], 1, 1, i1 - i0, &b_emlrtECI,
      emlrtRootTLSGlobal);
    itmp = r0->size[0];
    r0->size[0] = i1 - i0;
    emxEnsureCapacity((emxArray__common *)r0, itmp, (int32_T)sizeof(int32_T),
                      &b_emlrtRTEI);
    ixstart = i1 - i0;
    for (i1 = 0; i1 < ixstart; i1++) {
      r0->data[i1] = i0 + i1;
    }

    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)x, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    ixstart = r0->size[0];
    i0 = x->size[0] * x->size[1];
    x->size[1] = ixstart;
    emxEnsureCapacity((emxArray__common *)x, i0, (int32_T)sizeof(creal_T),
                      &b_emlrtRTEI);
    ixstart = r0->size[0];
    for (i0 = 0; i0 < ixstart; i0++) {
      x->data[i0].re = input->data[r0->data[i0] - 1].re;
      x->data[i0].im = -input->data[r0->data[i0] - 1].im;
    }

    x_im = (1.0 + (real_T)i) + d.subCarriers;
    mtmp = (2.0 * d.subCarriers + (1.0 + (real_T)i)) - 1.0;
    if (x_im > mtmp) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = input->size[0];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(x_im, &b_emlrtDCI,
        emlrtRootTLSGlobal);
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i1 = input->size[0];
      itmp = (int32_T)emlrtIntegerCheckFastR2012b(mtmp, &b_emlrtDCI,
        emlrtRootTLSGlobal);
      i1 = emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i1, &c_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    emlrtVectorVectorIndexCheckR2012b(input->size[0], 1, 1, i1 - i0, &emlrtECI,
      emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    if (!(x->size[1] == i1 - i0)) {
      if ((x->size[1] == 1) || (i1 - i0 == 1)) {
        emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
        emlrt_synchGlobalsToML();
        y = NULL;
        m0 = mxCreateCharArray(2, iv0);
        for (ixstart = 0; ixstart < 45; ixstart++) {
          cv0[ixstart] = cv1[ixstart];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv0);
        emlrtAssign(&y, m0);
        error(message(y, &i_emlrtMCI), &j_emlrtMCI);
        emlrt_synchGlobalsFromML();
        emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      } else {
        emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
        emlrt_synchGlobalsToML();
        b_y = NULL;
        m0 = mxCreateCharArray(2, iv1);
        for (ixstart = 0; ixstart < 21; ixstart++) {
          cv2[ixstart] = cv3[ixstart];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv2);
        emlrtAssign(&b_y, m0);
        error(message(b_y, &k_emlrtMCI), &l_emlrtMCI);
        emlrt_synchGlobalsFromML();
        emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      }
    }

    emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
    if ((x->size[1] == 1) || (i1 - i0 == 1)) {
      re = 0.0;
      im = 0.0;
      for (i1 = 0; i1 < x->size[1]; i1++) {
        mtmp = x->data[x->size[0] * i1].re * input->data[i0 + i1].re - x->data
          [x->size[0] * i1].im * input->data[i0 + i1].im;
        x_im = x->data[x->size[0] * i1].re * input->data[i0 + i1].im + x->data
          [x->size[0] * i1].im * input->data[i0 + i1].re;
        re += mtmp;
        im += x_im;
      }
    } else {
      emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
      re = 0.0;
      im = 0.0;
      if (x->size[1] < 1) {
      } else {
        emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
        if (x->size[1] > 2147483646) {
          emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
          check_forloop_overflow_error();
          emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
        }

        emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
        for (ixstart = 0; ixstart + 1 <= x->size[1]; ixstart++) {
          mtmp = x->data[ixstart].re * input->data[i0 + ixstart].re - x->
            data[ixstart].im * input->data[i0 + ixstart].im;
          x_im = x->data[ixstart].re * input->data[i0 + ixstart].im + x->
            data[ixstart].im * input->data[i0 + ixstart].re;
          re += mtmp;
          im += x_im;
        }
      }

      emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    }

    i0 = correlation->size[1];
    i1 = 1 + i;
    correlation->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &g_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = muDoubleScalarHypot(re, im);
    emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
    i0 = correlation->size[1];
    i1 = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, emlrtRootTLSGlobal);
    i0 = correlation->size[1];
    i1 = 1 + i;
    correlation->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &h_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = correlation->data[i] / (64.0 * Ps);

    /* correlation(i)=abs(transpose(input(i:d.subCarriers*d.numberPreamble+i-1))*x); */
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_int32_T(&r0);
  emxFree_creal_T(&b_input);
  emxFree_creal_T(&x);
  b_emxInit_real_T(&correlationMean, 2, &d_emlrtRTEI, TRUE);

  /* Compute mean of cross-correlation over d.cyclicPrefixPreamble values */
  i0 = correlationMean->size[0] * correlationMean->size[1];
  correlationMean->size[0] = 1;
  x_im = indexMax - d.cyclicPrefixPreamble;
  x_im = emlrtNonNegativeCheckFastR2012b(x_im, &i_emlrtDCI, emlrtRootTLSGlobal);
  correlationMean->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(x_im,
    &h_emlrtDCI, emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)correlationMean, i0, (int32_T)sizeof
                    (real_T), &b_emlrtRTEI);
  x_im = indexMax - d.cyclicPrefixPreamble;
  x_im = emlrtNonNegativeCheckFastR2012b(x_im, &i_emlrtDCI, emlrtRootTLSGlobal);
  ixstart = (int32_T)emlrtIntegerCheckFastR2012b(x_im, &h_emlrtDCI,
    emlrtRootTLSGlobal);
  for (i0 = 0; i0 < ixstart; i0++) {
    correlationMean->data[i0] = 0.0;
  }

  x_im = indexMax - d.cyclicPrefixPreamble;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, x_im, mxDOUBLE_CLASS, (int32_T)x_im,
    &i_emlrtRTEI, emlrtRootTLSGlobal);
  j = 0;
  while (j <= (int32_T)x_im - 1) {
    mtmp = (d.cyclicPrefixPreamble + (1.0 + (real_T)j)) - 1.0;
    if (1.0 + (real_T)j > mtmp) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = correlation->size[1];
      i1 = (int32_T)(1.0 + (real_T)j);
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI,
        emlrtRootTLSGlobal) - 1;
      i1 = correlation->size[1];
      itmp = (int32_T)emlrtIntegerCheckFastR2012b(mtmp, &emlrtDCI,
        emlrtRootTLSGlobal);
      i1 = emlrtDynamicBoundsCheckFastR2012b(itmp, 1, i1, &emlrtBCI,
        emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    overflow = FALSE;
    p = FALSE;
    ixstart = 0;
    do {
      exitg2 = 0;
      if (ixstart < 2) {
        iv2[0] = 1;
        iv2[1] = i1 - i0;
        if (iv2[ixstart] != 0) {
          exitg2 = 1;
        } else {
          ixstart++;
        }
      } else {
        p = TRUE;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (!p) {
    } else {
      overflow = TRUE;
    }

    if (!overflow) {
    } else {
      emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_synchGlobalsToML();
      c_y = NULL;
      m0 = mxCreateCharArray(2, iv3);
      for (i = 0; i < 31; i++) {
        cv4[i] = cv5[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m0, cv4);
      emlrtAssign(&c_y, m0);
      error(message(c_y, &o_emlrtMCI), &p_emlrtMCI);
      emlrt_synchGlobalsFromML();
      emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
    }

    if ((i1 - i0 == 1) || (i1 - i0 != 1)) {
      overflow = TRUE;
    } else {
      overflow = FALSE;
    }

    if (overflow) {
    } else {
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrt_synchGlobalsToML();
      d_y = NULL;
      m0 = mxCreateCharArray(2, iv4);
      for (i = 0; i < 36; i++) {
        cv6[i] = cv7[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv6);
      emlrtAssign(&d_y, m0);
      error(message(d_y, &q_emlrtMCI), &r_emlrtMCI);
      emlrt_synchGlobalsFromML();
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    if (i1 - i0 == 0) {
      mtmp = 0.0;
    } else {
      mtmp = correlation->data[i0];
      emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      if (2 > i1 - i0) {
        b0 = FALSE;
      } else {
        b0 = (i1 - i0 > 2147483646);
      }

      if (b0) {
        emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error();
        emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      for (ixstart = 0; ixstart + 2 <= i1 - i0; ixstart++) {
        mtmp += correlation->data[(i0 + ixstart) + 1];
      }
    }

    emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
    itmp = correlationMean->size[1];
    ixstart = (int32_T)(1.0 + (real_T)j);
    correlationMean->data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, itmp,
      &f_emlrtBCI, emlrtRootTLSGlobal) - 1] = mtmp / (real_T)(i1 - i0);
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  if ((correlationMean->size[1] == 1) || (correlationMean->size[1] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
    emlrt_synchGlobalsToML();
    e_y = NULL;
    m0 = mxCreateCharArray(2, iv5);
    for (i = 0; i < 36; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv6);
    emlrtAssign(&e_y, m0);
    error(message(e_y, &s_emlrtMCI), &t_emlrtMCI);
    emlrt_synchGlobalsFromML();
    emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (correlationMean->size[1] > 0) {
  } else {
    emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
    emlrt_synchGlobalsToML();
    f_y = NULL;
    m0 = mxCreateCharArray(2, iv6);
    for (i = 0; i < 39; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv8);
    emlrtAssign(&f_y, m0);
    error(message(f_y, &u_emlrtMCI), &v_emlrtMCI);
    emlrt_synchGlobalsFromML();
    emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  ixstart = 1;
  mtmp = correlationMean->data[0];
  itmp = 1;
  if (correlationMean->size[1] > 1) {
    if (muDoubleScalarIsNaN(correlationMean->data[0])) {
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      if (2 > correlationMean->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (correlationMean->size[1] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error();
        emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      j = 2;
      exitg1 = FALSE;
      while ((exitg1 == FALSE) && (j <= correlationMean->size[1])) {
        ixstart = j;
        if (!muDoubleScalarIsNaN(correlationMean->data[j - 1])) {
          mtmp = correlationMean->data[j - 1];
          itmp = j;
          exitg1 = TRUE;
        } else {
          j++;
        }
      }
    }

    if (ixstart < correlationMean->size[1]) {
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      if (ixstart + 1 > correlationMean->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (correlationMean->size[1] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error();
        emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      while (ixstart + 1 <= correlationMean->size[1]) {
        if (correlationMean->data[ixstart] > mtmp) {
          mtmp = correlationMean->data[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  b_index = (real_T)itmp - 5.0;
  if (d.synchronisationPlots == 1.0) {
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    figure(&emlrtMCI);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    plot(emlrt_marshallOut(correlation), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    g_y = NULL;
    m0 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 13; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m0, cv10);
    emlrtAssign(&g_y, m0);
    xlabel(g_y, &c_emlrtMCI);
    emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    h_y = NULL;
    m0 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 11; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 11, m0, cv12);
    emlrtAssign(&h_y, m0);
    ylabel(h_y, &d_emlrtMCI);
    emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    figure(&h_emlrtMCI);
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    plot(emlrt_marshallOut(correlationMean), &e_emlrtMCI);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    i_y = NULL;
    m0 = mxCreateCharArray(2, iv9);
    for (i = 0; i < 13; i++) {
      cv10[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m0, cv10);
    emlrtAssign(&i_y, m0);
    xlabel(i_y, &f_emlrtMCI);
    emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    j_y = NULL;
    m0 = mxCreateCharArray(2, iv10);
    for (i = 0; i < 20; i++) {
      cv15[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 20, m0, cv15);
    emlrtAssign(&j_y, m0);
    ylabel(j_y, &g_emlrtMCI);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&correlationMean);
  emxFree_real_T(&correlation);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  return b_index;
}

/* End of code generation (timeSynchronisationSIMO.c) */
