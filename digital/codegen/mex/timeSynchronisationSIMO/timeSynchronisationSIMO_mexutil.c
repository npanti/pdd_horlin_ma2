/*
 * timeSynchronisationSIMO_mexutil.c
 *
 * Code generation for function 'timeSynchronisationSIMO_mexutil'
 *
 * C source code generated on: Wed May 29 16:15:15 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisationSIMO.h"
#include "timeSynchronisationSIMO_mexutil.h"
#include "timeSynchronisationSIMO_emxutil.h"
#include "timeSynchronisationSIMO_data.h"

/* Function Declarations */
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct_T *y);
static real_T e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret);
static real_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[32] = { "M", "SNRMin", "SNRStep", "SNRMax",
    "subCarriers", "cyclicPrefix", "messageLength", "numberPreamble",
    "cyclicPrefixPreamble", "preambleBoost", "synchronisationPlots",
    "pilotPattern", "RXAntenna", "bandwidthMeasured", "bandwidth", "enableCFO",
    "Ts", "bitsPerSymbol", "OFDM", "SNRIterations", "preamble",
    "preambleConstellations", "preambleOFDM", "preambleLength", "data",
    "numberPilots", "referenceSymbol", "referenceSymbolMatrix", "maskData",
    "maskPilots", "dataLength", "signalLength" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 32, fieldNames, 0U, 0);
  thisId.fIdentifier = "M";
  y->M = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "M")), &thisId);
  thisId.fIdentifier = "SNRMin";
  y->SNRMin = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRMin")), &thisId);
  thisId.fIdentifier = "SNRStep";
  y->SNRStep = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRStep")), &thisId);
  thisId.fIdentifier = "SNRMax";
  y->SNRMax = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRMax")), &thisId);
  thisId.fIdentifier = "subCarriers";
  y->subCarriers = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "subCarriers")), &thisId);
  thisId.fIdentifier = "cyclicPrefix";
  y->cyclicPrefix = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "cyclicPrefix")), &thisId);
  thisId.fIdentifier = "messageLength";
  y->messageLength = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "messageLength")), &thisId);
  thisId.fIdentifier = "numberPreamble";
  y->numberPreamble = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numberPreamble")), &thisId);
  thisId.fIdentifier = "cyclicPrefixPreamble";
  y->cyclicPrefixPreamble = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "cyclicPrefixPreamble")), &thisId);
  thisId.fIdentifier = "preambleBoost";
  y->preambleBoost = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "preambleBoost")), &thisId);
  thisId.fIdentifier = "synchronisationPlots";
  y->synchronisationPlots = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "synchronisationPlots")), &thisId);
  thisId.fIdentifier = "pilotPattern";
  y->pilotPattern = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pilotPattern")), &thisId);
  thisId.fIdentifier = "RXAntenna";
  y->RXAntenna = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "RXAntenna")), &thisId);
  thisId.fIdentifier = "bandwidthMeasured";
  y->bandwidthMeasured = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "bandwidthMeasured")), &thisId);
  thisId.fIdentifier = "bandwidth";
  y->bandwidth = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "bandwidth")), &thisId);
  thisId.fIdentifier = "enableCFO";
  y->enableCFO = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "enableCFO")), &thisId);
  thisId.fIdentifier = "Ts";
  y->Ts = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "Ts")), &thisId);
  thisId.fIdentifier = "bitsPerSymbol";
  y->bitsPerSymbol = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "bitsPerSymbol")), &thisId);
  thisId.fIdentifier = "OFDM";
  y->OFDM = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "OFDM")), &thisId);
  thisId.fIdentifier = "SNRIterations";
  y->SNRIterations = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SNRIterations")), &thisId);
  thisId.fIdentifier = "preamble";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "preamble")), &thisId, y->preamble);
  thisId.fIdentifier = "preambleConstellations";
  b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "preambleConstellations")), &thisId, y->preambleConstellations);
  thisId.fIdentifier = "preambleOFDM";
  b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "preambleOFDM")), &thisId, y->preambleOFDM);
  thisId.fIdentifier = "preambleLength";
  y->preambleLength = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "preambleLength")), &thisId);
  thisId.fIdentifier = "data";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "data")), &thisId, y->data);
  thisId.fIdentifier = "numberPilots";
  y->numberPilots = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numberPilots")), &thisId);
  thisId.fIdentifier = "referenceSymbol";
  b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "referenceSymbol")), &thisId, y->referenceSymbol);
  thisId.fIdentifier = "referenceSymbolMatrix";
  b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "referenceSymbolMatrix")), &thisId, y->referenceSymbolMatrix);
  thisId.fIdentifier = "maskData";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maskData")), &thisId, y->maskData);
  thisId.fIdentifier = "maskPilots";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maskPilots")), &thisId, y->maskPilots);
  thisId.fIdentifier = "dataLength";
  y->dataLength = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "dataLength")), &thisId);
  thisId.fIdentifier = "signalLength";
  y->signalLength = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "signalLength")), &thisId);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret)
{
  int32_T iv16[1];
  boolean_T bv0[1];
  int32_T iv17[1];
  int32_T i5;
  iv16[0] = -1;
  bv0[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 1U,
    iv16, bv0, iv17);
  i5 = ret->size[0];
  ret->size[0] = iv17[0];
  emxEnsureCapacity((emxArray__common *)ret, i5, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, TRUE);
  emlrtDestroyArray(&src);
}

static real_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv18[1];
  boolean_T bv1[1];
  int32_T iv19[1];
  int32_T i6;
  iv18[0] = -1;
  bv1[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv18, bv1, iv19);
  i6 = ret->size[0];
  ret->size[0] = iv19[0];
  emxEnsureCapacity((emxArray__common *)ret, i6, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId,
  emxArray_creal_T *y)
{
  g_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

const mxArray *b_emlrt_marshallOut(const struct_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  emxArray_creal_T *c_u;
  emxArray_creal_T *d_u;
  emxArray_real_T *e_u;
  emxArray_creal_T *f_u;
  emxArray_creal_T *g_u;
  emxArray_real_T *h_u;
  emxArray_real_T *i_u;
  int32_T i4;
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
  const mxArray *i_y;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&b_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_creal_T(&c_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_creal_T(&d_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(&e_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_creal_T(&f_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_creal_T(&g_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(&h_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  emxInit_real_T(&i_u, 1, (emlrtRTEInfo *)NULL, TRUE);
  y = NULL;
  emlrtAssign(&y, mxCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(y, c_emlrt_marshallOut(u->M), "M", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->SNRMin), "SNRMin", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->SNRStep), "SNRStep", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->SNRMax), "SNRMax", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->subCarriers), "subCarriers", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->cyclicPrefix), "cyclicPrefix", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->messageLength), "messageLength", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->numberPreamble), "numberPreamble", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->cyclicPrefixPreamble),
                "cyclicPrefixPreamble", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->preambleBoost), "preambleBoost", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->synchronisationPlots),
                "synchronisationPlots", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->pilotPattern), "pilotPattern", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->RXAntenna), "RXAntenna", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->bandwidthMeasured),
                "bandwidthMeasured", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->bandwidth), "bandwidth", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->enableCFO), "enableCFO", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->Ts), "Ts", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->bitsPerSymbol), "bitsPerSymbol", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->OFDM), "OFDM", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->SNRIterations), "SNRIterations", 0);
  i4 = b_u->size[0];
  b_u->size[0] = u->preamble->size[0];
  emxEnsureCapacity((emxArray__common *)b_u, i4, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->preamble->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_u->data[i4] = u->preamble->data[i4];
  }

  b_y = NULL;
  m5 = mxCreateNumericArray(1, b_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i4 = 0;
  for (loop_ub = 0; loop_ub < b_u->size[0]; loop_ub++) {
    (*pData)[i4] = b_u->data[loop_ub];
    i4++;
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "preamble", 0);
  i4 = c_u->size[0];
  c_u->size[0] = u->preambleConstellations->size[0];
  emxEnsureCapacity((emxArray__common *)c_u, i4, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->preambleConstellations->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_u->data[i4] = u->preambleConstellations->data[i4];
  }

  c_y = NULL;
  m5 = mxCreateNumericArray(1, c_u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m5, (void *)c_u->data, 8);
  emlrtAssign(&c_y, m5);
  emlrtAddField(y, c_y, "preambleConstellations", 0);
  i4 = d_u->size[0];
  d_u->size[0] = u->preambleOFDM->size[0];
  emxEnsureCapacity((emxArray__common *)d_u, i4, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->preambleOFDM->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    d_u->data[i4] = u->preambleOFDM->data[i4];
  }

  d_y = NULL;
  m5 = mxCreateNumericArray(1, d_u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m5, (void *)d_u->data, 8);
  emlrtAssign(&d_y, m5);
  emlrtAddField(y, d_y, "preambleOFDM", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->preambleLength), "preambleLength", 0);
  i4 = e_u->size[0];
  e_u->size[0] = u->data->size[0];
  emxEnsureCapacity((emxArray__common *)e_u, i4, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->data->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    e_u->data[i4] = u->data->data[i4];
  }

  e_y = NULL;
  m5 = mxCreateNumericArray(1, e_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i4 = 0;
  for (loop_ub = 0; loop_ub < e_u->size[0]; loop_ub++) {
    (*pData)[i4] = e_u->data[loop_ub];
    i4++;
  }

  emlrtAssign(&e_y, m5);
  emlrtAddField(y, e_y, "data", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->numberPilots), "numberPilots", 0);
  i4 = f_u->size[0];
  f_u->size[0] = u->referenceSymbol->size[0];
  emxEnsureCapacity((emxArray__common *)f_u, i4, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->referenceSymbol->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    f_u->data[i4] = u->referenceSymbol->data[i4];
  }

  f_y = NULL;
  m5 = mxCreateNumericArray(1, f_u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m5, (void *)f_u->data, 8);
  emlrtAssign(&f_y, m5);
  emlrtAddField(y, f_y, "referenceSymbol", 0);
  i4 = g_u->size[0];
  g_u->size[0] = u->referenceSymbolMatrix->size[0];
  emxEnsureCapacity((emxArray__common *)g_u, i4, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->referenceSymbolMatrix->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    g_u->data[i4] = u->referenceSymbolMatrix->data[i4];
  }

  g_y = NULL;
  m5 = mxCreateNumericArray(1, g_u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m5, (void *)g_u->data, 8);
  emlrtAssign(&g_y, m5);
  emlrtAddField(y, g_y, "referenceSymbolMatrix", 0);
  i4 = h_u->size[0];
  h_u->size[0] = u->maskData->size[0];
  emxEnsureCapacity((emxArray__common *)h_u, i4, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->maskData->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    h_u->data[i4] = u->maskData->data[i4];
  }

  h_y = NULL;
  m5 = mxCreateNumericArray(1, h_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i4 = 0;
  for (loop_ub = 0; loop_ub < h_u->size[0]; loop_ub++) {
    (*pData)[i4] = h_u->data[loop_ub];
    i4++;
  }

  emlrtAssign(&h_y, m5);
  emlrtAddField(y, h_y, "maskData", 0);
  i4 = i_u->size[0];
  i_u->size[0] = u->maskPilots->size[0];
  emxEnsureCapacity((emxArray__common *)i_u, i4, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = u->maskPilots->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    i_u->data[i4] = u->maskPilots->data[i4];
  }

  i_y = NULL;
  m5 = mxCreateNumericArray(1, i_u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i4 = 0;
  for (loop_ub = 0; loop_ub < i_u->size[0]; loop_ub++) {
    (*pData)[i4] = i_u->data[loop_ub];
    i4++;
  }

  emlrtAssign(&i_y, m5);
  emlrtAddField(y, i_y, "maskPilots", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->dataLength), "dataLength", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->signalLength), "signalLength", 0);
  emxFree_real_T(&i_u);
  emxFree_real_T(&h_u);
  emxFree_creal_T(&g_u);
  emxFree_creal_T(&f_u);
  emxFree_real_T(&e_u);
  emxFree_creal_T(&d_u);
  emxFree_creal_T(&c_u);
  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  return y;
}

void c_emlrt_marshallIn(const mxArray *c_d, const char_T *identifier, struct_T
  *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(emlrtAlias(c_d), &thisId, y);
  emlrtDestroyArray(&c_d);
}

const mxArray *c_emlrt_marshallOut(real_T u)
{
  const mxArray *y;
  const mxArray *m6;
  y = NULL;
  m6 = mxCreateDoubleScalar(u);
  emlrtAssign(&y, m6);
  return y;
}

void emlrt_checkEscapedGlobals(void)
{
  d_dirty |= d_dirty >> 1U;
}

void emlrt_synchGlobalsFromML(void)
{
  c_emlrt_marshallIn(mexGetVariable("global", "d"), "d", &d);
}

void emlrt_synchGlobalsToML(void)
{
  if (d_dirty & 1U) {
    mexPutVariable("global", "d", b_emlrt_marshallOut(&d));
    d_dirty &= 2U;
  }
}

void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m7;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m7, 1, &pArray, "message",
    TRUE, location);
}

/* End of code generation (timeSynchronisationSIMO_mexutil.c) */
