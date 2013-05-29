/*
 * BERCalculation_api.c
 *
 * Code generation for function 'BERCalculation_api'
 *
 * C source code generated on: Wed May 29 16:22:14 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculation.h"
#include "BERCalculation_api.h"
#include "BERCalculation_emxutil.h"
#include "fprintf.h"
#include "BERCalculation_mexutil.h"
#include "BERCalculation_data.h"
#include <stdio.h>

/* Type Definitions */
#ifndef typedef_ResolvedFunctionInfo
#define typedef_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} ResolvedFunctionInfo;

#endif                                 /*typedef_ResolvedFunctionInfo*/

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "BERCalculation_api", "" };

/* Function Declarations */
static void c_emlrt_marshallIn(const mxArray *bitsRX, const char_T *identifier,
  emxArray_real_T *y);
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void c_emlrt_marshallIn(const mxArray *bitsRX, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(emlrtAlias(bitsRX), &thisId, y);
  emlrtDestroyArray(&bitsRX);
}

static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  j_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv5[1];
  boolean_T bv0[1];
  int32_T iv6[1];
  iv5[0] = -1;
  bv0[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv5, bv0, iv6);
  ret->size[0] = iv6[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

void BERCalculation_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *bitsRX;
  real_T type;
  const mxArray *tmp;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&bitsRX, 1, &b_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  c_emlrt_marshallIn(emlrtAlias(prhs[0]), "bitsRX", bitsRX);
  type = emlrt_marshallIn(emlrtAliasP(prhs[1]), "type");

  /* Marshall in global variables */
  tmp = mexGetVariable("global", "d");
  if (tmp) {
    e_emlrt_marshallIn(tmp, "d", &d);
    d_dirty = 0U;
  }

  /* Invoke the target function */
  type = BERCalculation(bitsRX, type);

  /* Marshall out global variables */
  mexPutVariable("global", "d", b_emlrt_marshallOut(&d));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(type);
  bitsRX->canFreeData = FALSE;
  emxFree_real_T(&bitsRX);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[12];
  ResolvedFunctionInfo (*b_info)[12];
  ResolvedFunctionInfo u[12];
  int32_T i;
  const mxArray *y;
  int32_T iv4[1];
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m3;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  nameCaptureInfo = NULL;
  b_info = (ResolvedFunctionInfo (*)[12])info;
  (*b_info)[0].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculation.m";
  (*b_info)[0].name = "length";
  (*b_info)[0].dominantType = "double";
  (*b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  (*b_info)[0].fileTimeLo = 1303146206U;
  (*b_info)[0].fileTimeHi = 0U;
  (*b_info)[0].mFileTimeLo = 0U;
  (*b_info)[0].mFileTimeHi = 0U;
  (*b_info)[1].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculation.m";
  (*b_info)[1].name = "mrdivide";
  (*b_info)[1].dominantType = "double";
  (*b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*b_info)[1].fileTimeLo = 1357951548U;
  (*b_info)[1].fileTimeHi = 0U;
  (*b_info)[1].mFileTimeLo = 1319729966U;
  (*b_info)[1].mFileTimeHi = 0U;
  (*b_info)[2].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  (*b_info)[2].name = "rdivide";
  (*b_info)[2].dominantType = "double";
  (*b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*b_info)[2].fileTimeLo = 1346510388U;
  (*b_info)[2].fileTimeHi = 0U;
  (*b_info)[2].mFileTimeLo = 0U;
  (*b_info)[2].mFileTimeHi = 0U;
  (*b_info)[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*b_info)[3].name = "eml_scalexp_compatible";
  (*b_info)[3].dominantType = "double";
  (*b_info)[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  (*b_info)[3].fileTimeLo = 1286818796U;
  (*b_info)[3].fileTimeHi = 0U;
  (*b_info)[3].mFileTimeLo = 0U;
  (*b_info)[3].mFileTimeHi = 0U;
  (*b_info)[4].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  (*b_info)[4].name = "eml_div";
  (*b_info)[4].dominantType = "double";
  (*b_info)[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  (*b_info)[4].fileTimeLo = 1313347810U;
  (*b_info)[4].fileTimeHi = 0U;
  (*b_info)[4].mFileTimeLo = 0U;
  (*b_info)[4].mFileTimeHi = 0U;
  (*b_info)[5].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/BERCalculation.m";
  (*b_info)[5].name = "fprintf";
  (*b_info)[5].dominantType = "char";
  (*b_info)[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  (*b_info)[5].fileTimeLo = 1354840784U;
  (*b_info)[5].fileTimeHi = 0U;
  (*b_info)[5].mFileTimeLo = 0U;
  (*b_info)[5].mFileTimeHi = 0U;
  (*b_info)[6].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  (*b_info)[6].name = "isequal";
  (*b_info)[6].dominantType = "char";
  (*b_info)[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  (*b_info)[6].fileTimeLo = 1286818758U;
  (*b_info)[6].fileTimeHi = 0U;
  (*b_info)[6].mFileTimeLo = 0U;
  (*b_info)[6].mFileTimeHi = 0U;
  (*b_info)[7].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  (*b_info)[7].name = "eml_isequal_core";
  (*b_info)[7].dominantType = "char";
  (*b_info)[7].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  (*b_info)[7].fileTimeLo = 1286818786U;
  (*b_info)[7].fileTimeHi = 0U;
  (*b_info)[7].mFileTimeLo = 0U;
  (*b_info)[7].mFileTimeHi = 0U;
  (*b_info)[8].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar";
  (*b_info)[8].name = "isnan";
  (*b_info)[8].dominantType = "char";
  (*b_info)[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  (*b_info)[8].fileTimeLo = 1286818760U;
  (*b_info)[8].fileTimeHi = 0U;
  (*b_info)[8].mFileTimeLo = 0U;
  (*b_info)[8].mFileTimeHi = 0U;
  (*b_info)[9].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  (*b_info)[9].name = "fprintf";
  (*b_info)[9].dominantType = "double";
  (*b_info)[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m";
  (*b_info)[9].fileTimeLo = 1354840784U;
  (*b_info)[9].fileTimeHi = 0U;
  (*b_info)[9].mFileTimeLo = 0U;
  (*b_info)[9].mFileTimeHi = 0U;
  (*b_info)[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m!validate_arguments";
  (*b_info)[10].name = "coder.internal.assert";
  (*b_info)[10].dominantType = "char";
  (*b_info)[10].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  (*b_info)[10].fileTimeLo = 1334071938U;
  (*b_info)[10].fileTimeHi = 0U;
  (*b_info)[10].mFileTimeLo = 0U;
  (*b_info)[10].mFileTimeHi = 0U;
  (*b_info)[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/fprintf.m!check_type";
  (*b_info)[11].name = "coder.internal.assert";
  (*b_info)[11].dominantType = "char";
  (*b_info)[11].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m";
  (*b_info)[11].fileTimeLo = 1334071938U;
  (*b_info)[11].fileTimeHi = 0U;
  (*b_info)[11].mFileTimeLo = 0U;
  (*b_info)[11].mFileTimeHi = 0U;
  for (i = 0; i < 12; i++) {
    u[i] = info[i];
  }

  y = NULL;
  iv4[0] = 12;
  emlrtAssign(&y, mxCreateStructArray(1, iv4, 0, NULL));
  for (i = 0; i < 12; i++) {
    r0 = &u[i];
    b_u = r0->context;
    b_y = NULL;
    m3 = mxCreateString(b_u);
    emlrtAssign(&b_y, m3);
    emlrtAddField(y, b_y, "context", i);
    b_u = r0->name;
    c_y = NULL;
    m3 = mxCreateString(b_u);
    emlrtAssign(&c_y, m3);
    emlrtAddField(y, c_y, "name", i);
    b_u = r0->dominantType;
    d_y = NULL;
    m3 = mxCreateString(b_u);
    emlrtAssign(&d_y, m3);
    emlrtAddField(y, d_y, "dominantType", i);
    b_u = r0->resolved;
    e_y = NULL;
    m3 = mxCreateString(b_u);
    emlrtAssign(&e_y, m3);
    emlrtAddField(y, e_y, "resolved", i);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m3) = c_u;
    emlrtAssign(&f_y, m3);
    emlrtAddField(y, f_y, "fileTimeLo", i);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m3) = c_u;
    emlrtAssign(&g_y, m3);
    emlrtAddField(y, g_y, "fileTimeHi", i);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m3) = c_u;
    emlrtAssign(&h_y, m3);
    emlrtAddField(y, h_y, "mFileTimeLo", i);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m3 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m3) = c_u;
    emlrtAssign(&i_y, m3);
    emlrtAddField(y, i_y, "mFileTimeHi", i);
  }

  emlrtAssign(&nameCaptureInfo, y);
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

/* End of code generation (BERCalculation_api.c) */
