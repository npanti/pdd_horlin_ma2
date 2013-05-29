/*
 * BERCalculationSIMO_mexutil.c
 *
 * Code generation for function 'BERCalculationSIMO_mexutil'
 *
 * C source code generated on: Wed May 29 17:01:58 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculationSIMO.h"
#include "BERCalculationSIMO_mexutil.h"
#include "BERCalculationSIMO_emxutil.h"
#include "fprintf.h"
#include "BERCalculationSIMO_data.h"
#include <stdio.h>

/* Function Declarations */
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct_T *y);
static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_creal_T *y);
static creal_T i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret);
static creal_T n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);

/* Function Definitions */
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[31] = { "M", "SNRMin", "SNRStep", "SNRMax",
    "subCarriers", "cyclicPrefix", "messageLength", "numberPreamble",
    "cyclicPrefixPreamble", "preambleBoost", "synchronisationPlots",
    "pilotPattern", "RXAntenna", "bandwidthMeasured", "bandwidth", "enableCFO",
    "Ts", "bitsPerSymbol", "OFDM", "SNRIterations", "preamble",
    "preambleConstellations", "preambleOFDM", "preambleLength", "data",
    "referenceSymbol", "maskData", "maskPilots", "numberPilots", "dataLength",
    "signalLength" };

  const mxArray *m4;
  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 31, fieldNames, 0U, 0);
  thisId.fIdentifier = "M";
  y->M = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "M")), &thisId);
  thisId.fIdentifier = "SNRMin";
  y->SNRMin = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRMin")), &thisId);
  thisId.fIdentifier = "SNRStep";
  y->SNRStep = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRStep")), &thisId);
  thisId.fIdentifier = "SNRMax";
  y->SNRMax = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRMax")), &thisId);
  thisId.fIdentifier = "subCarriers";
  y->subCarriers = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "subCarriers")), &thisId);
  thisId.fIdentifier = "cyclicPrefix";
  y->cyclicPrefix = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "cyclicPrefix")), &thisId);
  thisId.fIdentifier = "messageLength";
  y->messageLength = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "messageLength")), &thisId);
  thisId.fIdentifier = "numberPreamble";
  y->numberPreamble = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numberPreamble")), &thisId);
  thisId.fIdentifier = "cyclicPrefixPreamble";
  y->cyclicPrefixPreamble = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "cyclicPrefixPreamble")), &thisId);
  thisId.fIdentifier = "preambleBoost";
  y->preambleBoost = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "preambleBoost")), &thisId);
  thisId.fIdentifier = "synchronisationPlots";
  y->synchronisationPlots = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "synchronisationPlots")), &thisId);
  thisId.fIdentifier = "pilotPattern";
  y->pilotPattern = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pilotPattern")), &thisId);
  thisId.fIdentifier = "RXAntenna";
  y->RXAntenna = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "RXAntenna")), &thisId);
  thisId.fIdentifier = "bandwidthMeasured";
  y->bandwidthMeasured = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "bandwidthMeasured")), &thisId);
  thisId.fIdentifier = "bandwidth";
  y->bandwidth = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "bandwidth")), &thisId);
  thisId.fIdentifier = "enableCFO";
  y->enableCFO = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "enableCFO")), &thisId);
  thisId.fIdentifier = "Ts";
  y->Ts = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "Ts")), &thisId);
  thisId.fIdentifier = "bitsPerSymbol";
  y->bitsPerSymbol = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "bitsPerSymbol")), &thisId);
  thisId.fIdentifier = "OFDM";
  y->OFDM = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "OFDM")), &thisId);
  thisId.fIdentifier = "SNRIterations";
  y->SNRIterations = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRIterations")), &thisId);
  thisId.fIdentifier = "preamble";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "preamble")), &thisId, y->preamble);
  thisId.fIdentifier = "preambleConstellations";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "preambleConstellations")), &thisId, y->preambleConstellations);
  thisId.fIdentifier = "preambleOFDM";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "preambleOFDM")), &thisId, y->preambleOFDM);
  thisId.fIdentifier = "preambleLength";
  y->preambleLength = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "preambleLength")), &thisId);
  thisId.fIdentifier = "data";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "data")), &thisId, y->data);
  thisId.fIdentifier = "referenceSymbol";
  m4 = emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0, "referenceSymbol");
  y->referenceSymbol = i_emlrt_marshallIn(emlrtAlias(m4), &thisId);
  thisId.fIdentifier = "maskData";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maskData")), &thisId, y->maskData);
  thisId.fIdentifier = "maskPilots";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maskPilots")), &thisId, y->maskPilots);
  thisId.fIdentifier = "numberPilots";
  y->numberPilots = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numberPilots")), &thisId);
  thisId.fIdentifier = "dataLength";
  y->dataLength = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "dataLength")), &thisId);
  thisId.fIdentifier = "signalLength";
  y->signalLength = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "signalLength")), &thisId);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  l_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_creal_T *y)
{
  m_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static creal_T i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  creal_T y;
  y = n_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv7[1];
  boolean_T bv1[1];
  int32_T iv8[1];
  int32_T i3;
  iv7[0] = -1;
  bv1[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv7, bv1, iv8);
  i3 = ret->size[0];
  ret->size[0] = iv8[0];
  emxEnsureCapacity((emxArray__common *)ret, i3, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret)
{
  int32_T iv9[1];
  boolean_T bv2[1];
  int32_T iv10[1];
  int32_T i4;
  iv9[0] = -1;
  bv2[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 1U,
    iv9, bv2, iv10);
  i4 = ret->size[0];
  ret->size[0] = iv10[0];
  emxEnsureCapacity((emxArray__common *)ret, i4, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, TRUE);
  emlrtDestroyArray(&src);
}

static creal_T n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  creal_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 0U, 0);
  emlrtImportArrayR2011b(src, &ret, 8, TRUE);
  emlrtDestroyArray(&src);
  return ret;
}

real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *b_emlrt_marshallOut(const struct_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  emxArray_creal_T *c_u;
  emxArray_creal_T *d_u;
  emxArray_real_T *e_u;
  emxArray_real_T *f_u;
  emxArray_real_T *g_u;
  int32_T i2;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m5;
  real_T (*pData)[];
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&b_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_creal_T(&c_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_creal_T(&d_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(&e_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(&f_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(&g_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  y = NULL;
  emlrtAssign(&y, mxCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(y, emlrt_marshallOut(u->M), "M", 0);
  emlrtAddField(y, emlrt_marshallOut(u->SNRMin), "SNRMin", 0);
  emlrtAddField(y, emlrt_marshallOut(u->SNRStep), "SNRStep", 0);
  emlrtAddField(y, emlrt_marshallOut(u->SNRMax), "SNRMax", 0);
  emlrtAddField(y, emlrt_marshallOut(u->subCarriers), "subCarriers", 0);
  emlrtAddField(y, emlrt_marshallOut(u->cyclicPrefix), "cyclicPrefix", 0);
  emlrtAddField(y, emlrt_marshallOut(u->messageLength), "messageLength", 0);
  emlrtAddField(y, emlrt_marshallOut(u->numberPreamble), "numberPreamble", 0);
  emlrtAddField(y, emlrt_marshallOut(u->cyclicPrefixPreamble),
                "cyclicPrefixPreamble", 0);
  emlrtAddField(y, emlrt_marshallOut(u->preambleBoost), "preambleBoost", 0);
  emlrtAddField(y, emlrt_marshallOut(u->synchronisationPlots),
                "synchronisationPlots", 0);
  emlrtAddField(y, emlrt_marshallOut(u->pilotPattern), "pilotPattern", 0);
  emlrtAddField(y, emlrt_marshallOut(u->RXAntenna), "RXAntenna", 0);
  emlrtAddField(y, emlrt_marshallOut(u->bandwidthMeasured), "bandwidthMeasured",
                0);
  emlrtAddField(y, emlrt_marshallOut(u->bandwidth), "bandwidth", 0);
  emlrtAddField(y, emlrt_marshallOut(u->enableCFO), "enableCFO", 0);
  emlrtAddField(y, emlrt_marshallOut(u->Ts), "Ts", 0);
  emlrtAddField(y, emlrt_marshallOut(u->bitsPerSymbol), "bitsPerSymbol", 0);
  emlrtAddField(y, emlrt_marshallOut(u->OFDM), "OFDM", 0);
  emlrtAddField(y, emlrt_marshallOut(u->SNRIterations), "SNRIterations", 0);
  i2 = b_u->size[0];
  b_u->size[0] = u->preamble->size[0];
  emxEnsureCapacity((emxArray__common *)b_u, i2, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->preamble->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_u->data[i2] = u->preamble->data[i2];
  }

  b_y = NULL;
  m5 = mxCreateNumericArray(1, b_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i2 = 0;
  for (loop_ub = 0; loop_ub < b_u->size[0]; loop_ub++) {
    (*pData)[i2] = b_u->data[loop_ub];
    i2++;
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "preamble", 0);
  i2 = c_u->size[0];
  c_u->size[0] = u->preambleConstellations->size[0];
  emxEnsureCapacity((emxArray__common *)c_u, i2, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->preambleConstellations->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_u->data[i2] = u->preambleConstellations->data[i2];
  }

  c_y = NULL;
  m5 = mxCreateNumericArray(1, c_u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m5, (void *)c_u->data, 8);
  emlrtAssign(&c_y, m5);
  emlrtAddField(y, c_y, "preambleConstellations", 0);
  i2 = d_u->size[0];
  d_u->size[0] = u->preambleOFDM->size[0];
  emxEnsureCapacity((emxArray__common *)d_u, i2, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->preambleOFDM->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    d_u->data[i2] = u->preambleOFDM->data[i2];
  }

  d_y = NULL;
  m5 = mxCreateNumericArray(1, d_u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m5, (void *)d_u->data, 8);
  emlrtAssign(&d_y, m5);
  emlrtAddField(y, d_y, "preambleOFDM", 0);
  emlrtAddField(y, emlrt_marshallOut(u->preambleLength), "preambleLength", 0);
  i2 = e_u->size[0];
  e_u->size[0] = u->data->size[0];
  emxEnsureCapacity((emxArray__common *)e_u, i2, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->data->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    e_u->data[i2] = u->data->data[i2];
  }

  e_y = NULL;
  m5 = mxCreateNumericArray(1, e_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i2 = 0;
  for (loop_ub = 0; loop_ub < e_u->size[0]; loop_ub++) {
    (*pData)[i2] = e_u->data[loop_ub];
    i2++;
  }

  emlrtAssign(&e_y, m5);
  emlrtAddField(y, e_y, "data", 0);
  f_y = NULL;
  m5 = mxCreateNumericMatrix(1, 1, mxDOUBLE_CLASS, mxCOMPLEX);
  *mxGetPr(m5) = u->referenceSymbol.re;
  *mxGetPi(m5) = u->referenceSymbol.im;
  emlrtAssign(&f_y, m5);
  emlrtAddField(y, f_y, "referenceSymbol", 0);
  i2 = f_u->size[0];
  f_u->size[0] = u->maskData->size[0];
  emxEnsureCapacity((emxArray__common *)f_u, i2, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->maskData->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    f_u->data[i2] = u->maskData->data[i2];
  }

  g_y = NULL;
  m5 = mxCreateNumericArray(1, f_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i2 = 0;
  for (loop_ub = 0; loop_ub < f_u->size[0]; loop_ub++) {
    (*pData)[i2] = f_u->data[loop_ub];
    i2++;
  }

  emlrtAssign(&g_y, m5);
  emlrtAddField(y, g_y, "maskData", 0);
  i2 = g_u->size[0];
  g_u->size[0] = u->maskPilots->size[0];
  emxEnsureCapacity((emxArray__common *)g_u, i2, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->maskPilots->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    g_u->data[i2] = u->maskPilots->data[i2];
  }

  h_y = NULL;
  m5 = mxCreateNumericArray(1, g_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i2 = 0;
  for (loop_ub = 0; loop_ub < g_u->size[0]; loop_ub++) {
    (*pData)[i2] = g_u->data[loop_ub];
    i2++;
  }

  emlrtAssign(&h_y, m5);
  emlrtAddField(y, h_y, "maskPilots", 0);
  emlrtAddField(y, emlrt_marshallOut(u->numberPilots), "numberPilots", 0);
  emlrtAddField(y, emlrt_marshallOut(u->dataLength), "dataLength", 0);
  emlrtAddField(y, emlrt_marshallOut(u->signalLength), "signalLength", 0);
  emxFree_real_T(&g_u);
  emxFree_real_T(&f_u);
  emxFree_real_T(&e_u);
  emxFree_creal_T(&d_u);
  emxFree_creal_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  return y;
}

void e_emlrt_marshallIn(const mxArray *c_d, const char_T *identifier, struct_T
  *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(c_d), &thisId, y);
  emlrtDestroyArray(&c_d);
}

void emlrt_checkEscapedGlobals(void)
{
  d_dirty |= d_dirty >> 1U;
}

real_T emlrt_marshallIn(const mxArray *b_feval, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(b_feval), &thisId);
  emlrtDestroyArray(&b_feval);
  return y;
}

const mxArray *emlrt_marshallOut(real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = mxCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

void emlrt_synchGlobalsFromML(void)
{
  e_emlrt_marshallIn(mexGetVariable("global", "d"), "d", &d);
}

void emlrt_synchGlobalsToML(void)
{
  if (d_dirty & 1U) {
    mexPutVariable("global", "d", b_emlrt_marshallOut(&d));
    d_dirty &= 2U;
  }
}

/* End of code generation (BERCalculationSIMO_mexutil.c) */
