/*
 * BERCalculation_mexutil.c
 *
 * Code generation for function 'BERCalculation_mexutil'
 *
 * C source code generated on: Wed May 29 16:57:06 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BERCalculation.h"
#include "BERCalculation_mexutil.h"
#include "fprintf.h"
#include "BERCalculation_data.h"
#include <stdio.h>

/* Function Declarations */
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct_T *y);
static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[512]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[64]);
static creal_T i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[64]);
static void k_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[393216]);
static real_T l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[512]);
static void o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[64]);
static creal_T p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void q_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[64]);
static void r_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[393216]);

/* Function Definitions */
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[29] = { "M", "SNRMin", "SNRStep", "SNRMax",
    "subCarriers", "cyclicPrefix", "messageLength", "numberPreamble",
    "cyclicPrefixPreamble", "preambleBoost", "synchronisationPlots",
    "pilotPattern", "bandwidthMeasured", "bandwidth", "enableCFO", "Ts",
    "bitsPerSymbol", "OFDM", "SNRIterations", "preamble",
    "preambleConstellations", "preambleOFDM", "preambleLength",
    "referenceSymbol", "maskData", "maskPilots", "numberPilots", "data",
    "signalLength" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 29, fieldNames, 0U, 0);
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
  thisId.fIdentifier = "referenceSymbol";
  y->referenceSymbol = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "referenceSymbol")), &thisId);
  thisId.fIdentifier = "maskData";
  j_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maskData")), &thisId, y->maskData);
  thisId.fIdentifier = "maskPilots";
  j_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maskPilots")), &thisId, y->maskPilots);
  thisId.fIdentifier = "numberPilots";
  y->numberPilots = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numberPilots")), &thisId);
  thisId.fIdentifier = "data";
  k_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "data")), &thisId, y->data);
  thisId.fIdentifier = "signalLength";
  y->signalLength = b_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "signalLength")), &thisId);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[512])
{
  n_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[64])
{
  o_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static creal_T i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  creal_T y;
  y = p_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[64])
{
  q_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[393216])
{
  r_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[512])
{
  int32_T iv13[1];
  int32_T i1;
  iv13[0] = 512;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv13);
  for (i1 = 0; i1 < 512; i1++) {
    ret[i1] = (*(real_T (*)[512])mxGetData(src))[i1];
  }

  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[64])
{
  int32_T iv14[1];
  iv14[0] = 64;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 1U,
    iv14);
  emlrtImportArrayR2011b(src, ret, 8, TRUE);
  emlrtDestroyArray(&src);
}

static creal_T p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  creal_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 0U, 0);
  emlrtImportArrayR2011b(src, &ret, 8, TRUE);
  emlrtDestroyArray(&src);
  return ret;
}

static void q_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[64])
{
  int32_T iv15[1];
  int32_T i2;
  iv15[0] = 64;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv15);
  for (i2 = 0; i2 < 64; i2++) {
    ret[i2] = (*(real_T (*)[64])mxGetData(src))[i2];
  }

  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[393216])
{
  int32_T iv16[1];
  int32_T i3;
  iv16[0] = 393216;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv16);
  for (i3 = 0; i3 < 393216; i3++) {
    ret[i3] = (*(real_T (*)[393216])mxGetData(src))[i3];
  }

  emlrtDestroyArray(&src);
}

real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *b_emlrt_marshallOut(const struct_T *u)
{
  const mxArray *y;
  const mxArray *b_y;
  static const int32_T iv5[1] = { 512 };

  const mxArray *m4;
  real_T (*pData)[];
  int32_T i;
  const mxArray *c_y;
  static const int32_T iv6[1] = { 64 };

  creal_T b_u[64];
  const mxArray *d_y;
  static const int32_T iv7[1] = { 64 };

  const mxArray *e_y;
  const mxArray *f_y;
  static const int32_T iv8[1] = { 64 };

  const mxArray *g_y;
  static const int32_T iv9[1] = { 64 };

  const mxArray *h_y;
  static const int32_T iv10[1] = { 393216 };

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
  emlrtAddField(y, emlrt_marshallOut(u->bandwidthMeasured), "bandwidthMeasured",
                0);
  emlrtAddField(y, emlrt_marshallOut(u->bandwidth), "bandwidth", 0);
  emlrtAddField(y, emlrt_marshallOut(u->enableCFO), "enableCFO", 0);
  emlrtAddField(y, emlrt_marshallOut(u->Ts), "Ts", 0);
  emlrtAddField(y, emlrt_marshallOut(u->bitsPerSymbol), "bitsPerSymbol", 0);
  emlrtAddField(y, emlrt_marshallOut(u->OFDM), "OFDM", 0);
  emlrtAddField(y, emlrt_marshallOut(u->SNRIterations), "SNRIterations", 0);
  b_y = NULL;
  m4 = mxCreateNumericArray(1, (int32_T *)&iv5, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m4);
  for (i = 0; i < 512; i++) {
    (*pData)[i] = u->preamble[i];
  }

  emlrtAssign(&b_y, m4);
  emlrtAddField(y, b_y, "preamble", 0);
  c_y = NULL;
  m4 = mxCreateNumericArray(1, (int32_T *)&iv6, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i = 0; i < 64; i++) {
    b_u[i] = u->preambleConstellations[i];
  }

  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m4, b_u, 8);
  emlrtAssign(&c_y, m4);
  emlrtAddField(y, c_y, "preambleConstellations", 0);
  d_y = NULL;
  m4 = mxCreateNumericArray(1, (int32_T *)&iv7, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i = 0; i < 64; i++) {
    b_u[i] = u->preambleOFDM[i];
  }

  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m4, b_u, 8);
  emlrtAssign(&d_y, m4);
  emlrtAddField(y, d_y, "preambleOFDM", 0);
  emlrtAddField(y, emlrt_marshallOut(u->preambleLength), "preambleLength", 0);
  e_y = NULL;
  m4 = mxCreateNumericMatrix(1, 1, mxDOUBLE_CLASS, mxCOMPLEX);
  *mxGetPr(m4) = u->referenceSymbol.re;
  *mxGetPi(m4) = u->referenceSymbol.im;
  emlrtAssign(&e_y, m4);
  emlrtAddField(y, e_y, "referenceSymbol", 0);
  f_y = NULL;
  m4 = mxCreateNumericArray(1, (int32_T *)&iv8, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m4);
  for (i = 0; i < 64; i++) {
    (*pData)[i] = u->maskData[i];
  }

  emlrtAssign(&f_y, m4);
  emlrtAddField(y, f_y, "maskData", 0);
  g_y = NULL;
  m4 = mxCreateNumericArray(1, (int32_T *)&iv9, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m4);
  for (i = 0; i < 64; i++) {
    (*pData)[i] = u->maskPilots[i];
  }

  emlrtAssign(&g_y, m4);
  emlrtAddField(y, g_y, "maskPilots", 0);
  emlrtAddField(y, emlrt_marshallOut(u->numberPilots), "numberPilots", 0);
  h_y = NULL;
  m4 = mxCreateNumericArray(1, (int32_T *)&iv10, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m4);
  for (i = 0; i < 393216; i++) {
    (*pData)[i] = u->data[i];
  }

  emlrtAssign(&h_y, m4);
  emlrtAddField(y, h_y, "data", 0);
  emlrtAddField(y, emlrt_marshallOut(u->signalLength), "signalLength", 0);
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

/* End of code generation (BERCalculation_mexutil.c) */
