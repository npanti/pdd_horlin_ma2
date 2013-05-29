/*
 * timeSynchronisation_api.c
 *
 * Code generation for function 'timeSynchronisation_api'
 *
 * C source code generated on: Wed May 29 16:20:33 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "timeSynchronisation.h"
#include "timeSynchronisation_api.h"
#include "timeSynchronisation_emxutil.h"
#include "timeSynchronisation_mexutil.h"
#include "timeSynchronisation_data.h"

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
static emlrtRTEInfo h_emlrtRTEI = { 1, 1, "timeSynchronisation_api", "" };

/* Function Declarations */
static void emlrt_marshallIn(const mxArray *input, const char_T *identifier,
  emxArray_creal_T *y);
static void info_helper(ResolvedFunctionInfo info[65]);

/* Function Definitions */
static void emlrt_marshallIn(const mxArray *input, const char_T *identifier,
  emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(input), &thisId, y);
  emlrtDestroyArray(&input);
}

static void info_helper(ResolvedFunctionInfo info[65])
{
  info[0].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[0].name = "length";
  info[0].dominantType = "double";
  info[0].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[0].fileTimeLo = 1303146206U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[1].name = "mtimes";
  info[1].dominantType = "double";
  info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[1].fileTimeLo = 1289519692U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 0U;
  info[1].mFileTimeHi = 0U;
  info[2].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[2].name = "signalPower";
  info[2].dominantType = "double";
  info[2].resolved =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m";
  info[2].fileTimeLo = 1369396576U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 0U;
  info[2].mFileTimeHi = 0U;
  info[3].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m";
  info[3].name = "length";
  info[3].dominantType = "double";
  info[3].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[3].fileTimeLo = 1303146206U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 0U;
  info[3].mFileTimeHi = 0U;
  info[4].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m";
  info[4].name = "abs";
  info[4].dominantType = "double";
  info[4].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[4].fileTimeLo = 1343830366U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[5].name = "eml_scalar_abs";
  info[5].dominantType = "double";
  info[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[5].fileTimeLo = 1286818712U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[6].name = "eml_dlapy2";
  info[6].dominantType = "double";
  info[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m";
  info[6].fileTimeLo = 1350410654U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m";
  info[7].name = "mtimes";
  info[7].dominantType = "double";
  info[7].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[7].fileTimeLo = 1289519692U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[8].name = "eml_index_class";
  info[8].dominantType = "";
  info[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[8].fileTimeLo = 1323170578U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[9].name = "eml_scalar_eg";
  info[9].dominantType = "double";
  info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[9].fileTimeLo = 1286818796U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[10].name = "eml_xdotu";
  info[10].dominantType = "double";
  info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  info[10].fileTimeLo = 1299076772U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  info[11].name = "eml_blas_inline";
  info[11].dominantType = "";
  info[11].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[11].fileTimeLo = 1299076768U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  info[12].name = "eml_xdot";
  info[12].dominantType = "double";
  info[12].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m";
  info[12].fileTimeLo = 1299076772U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m";
  info[13].name = "eml_blas_inline";
  info[13].dominantType = "";
  info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[13].fileTimeLo = 1299076768U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  info[14].name = "eml_index_class";
  info[14].dominantType = "";
  info[14].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[14].fileTimeLo = 1323170578U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  info[15].name = "eml_refblas_xdot";
  info[15].dominantType = "double";
  info[15].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m";
  info[15].fileTimeLo = 1299076772U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m";
  info[16].name = "eml_refblas_xdotx";
  info[16].dominantType = "char";
  info[16].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[16].fileTimeLo = 1299076774U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[17].name = "eml_scalar_eg";
  info[17].dominantType = "double";
  info[17].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[17].fileTimeLo = 1286818796U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[18].name = "eml_index_class";
  info[18].dominantType = "";
  info[18].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[18].fileTimeLo = 1323170578U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[19].name = "eml_index_minus";
  info[19].dominantType = "double";
  info[19].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[19].fileTimeLo = 1286818778U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[20].name = "eml_index_class";
  info[20].dominantType = "";
  info[20].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[20].fileTimeLo = 1323170578U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[21].name = "eml_index_times";
  info[21].dominantType = "coder.internal.indexInt";
  info[21].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[21].fileTimeLo = 1286818780U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[22].name = "eml_index_class";
  info[22].dominantType = "";
  info[22].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[22].fileTimeLo = 1323170578U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[23].name = "eml_index_plus";
  info[23].dominantType = "coder.internal.indexInt";
  info[23].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[23].fileTimeLo = 1286818778U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 0U;
  info[23].mFileTimeHi = 0U;
  info[24].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[24].name = "eml_index_class";
  info[24].dominantType = "";
  info[24].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[24].fileTimeLo = 1323170578U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[25].name = "eml_int_forloop_overflow_check";
  info[25].dominantType = "";
  info[25].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[25].fileTimeLo = 1346510340U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[26].name = "intmax";
  info[26].dominantType = "char";
  info[26].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[26].fileTimeLo = 1311255316U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  info[27].name = "eml_scalar_eg";
  info[27].dominantType = "double";
  info[27].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[27].fileTimeLo = 1286818796U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m!ceval_xdot";
  info[28].name = "eml_scalar_eg";
  info[28].dominantType = "double";
  info[28].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[28].fileTimeLo = 1286818796U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/signalPower.m";
  info[29].name = "mrdivide";
  info[29].dominantType = "double";
  info[29].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[29].fileTimeLo = 1357951548U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 1319729966U;
  info[29].mFileTimeHi = 0U;
  info[30].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[30].name = "rdivide";
  info[30].dominantType = "double";
  info[30].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[30].fileTimeLo = 1346510388U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[31].name = "eml_scalexp_compatible";
  info[31].dominantType = "double";
  info[31].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[31].fileTimeLo = 1286818796U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[32].name = "eml_div";
  info[32].dominantType = "double";
  info[32].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[32].fileTimeLo = 1313347810U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdotu.m";
  info[33].name = "eml_index_class";
  info[33].dominantType = "";
  info[33].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[33].fileTimeLo = 1323170578U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdotu.m";
  info[34].name = "eml_refblas_xdotu";
  info[34].dominantType = "double";
  info[34].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotu.m";
  info[34].fileTimeLo = 1299076774U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotu.m";
  info[35].name = "eml_refblas_xdotx";
  info[35].dominantType = "char";
  info[35].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  info[35].fileTimeLo = 1299076774U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 0U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[36].name = "abs";
  info[36].dominantType = "double";
  info[36].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[36].fileTimeLo = 1343830366U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[37].name = "mrdivide";
  info[37].dominantType = "double";
  info[37].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[37].fileTimeLo = 1357951548U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 1319729966U;
  info[37].mFileTimeHi = 0U;
  info[38].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[38].name = "mean";
  info[38].dominantType = "double";
  info[38].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[38].fileTimeLo = 1286818694U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[39].name = "isequal";
  info[39].dominantType = "double";
  info[39].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[39].fileTimeLo = 1286818758U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[40].name = "eml_isequal_core";
  info[40].dominantType = "double";
  info[40].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[40].fileTimeLo = 1286818786U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[41].name = "eml_const_nonsingleton_dim";
  info[41].dominantType = "double";
  info[41].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[41].fileTimeLo = 1286818696U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[42].name = "sum";
  info[42].dominantType = "double";
  info[42].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[42].fileTimeLo = 1314736612U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[43].name = "eml_assert_valid_dim";
  info[43].dominantType = "double";
  info[43].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[43].fileTimeLo = 1286818694U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[44].name = "eml_scalar_floor";
  info[44].dominantType = "double";
  info[44].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[44].fileTimeLo = 1286818726U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[45].name = "eml_index_class";
  info[45].dominantType = "";
  info[45].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[45].fileTimeLo = 1323170578U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_dim.m";
  info[46].name = "intmax";
  info[46].dominantType = "char";
  info[46].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[46].fileTimeLo = 1311255316U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[47].name = "eml_index_class";
  info[47].dominantType = "";
  info[47].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[47].fileTimeLo = 1323170578U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[48].name = "eml_scalar_eg";
  info[48].dominantType = "double";
  info[48].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[48].fileTimeLo = 1286818796U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[49].name = "eml_int_forloop_overflow_check";
  info[49].dominantType = "";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[49].fileTimeLo = 1346510340U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/mean.m";
  info[50].name = "rdivide";
  info[50].dominantType = "double";
  info[50].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[50].fileTimeLo = 1346510388U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[51].name = "max";
  info[51].dominantType = "double";
  info[51].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[51].fileTimeLo = 1311255316U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m";
  info[52].name = "eml_min_or_max";
  info[52].dominantType = "char";
  info[52].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[52].fileTimeLo = 1334071490U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[53].name = "eml_const_nonsingleton_dim";
  info[53].dominantType = "double";
  info[53].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[53].fileTimeLo = 1286818696U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 0U;
  info[53].mFileTimeHi = 0U;
  info[54].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[54].name = "eml_scalar_eg";
  info[54].dominantType = "double";
  info[54].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[54].fileTimeLo = 1286818796U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum";
  info[55].name = "eml_index_class";
  info[55].dominantType = "";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[55].fileTimeLo = 1323170578U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[56].name = "eml_index_class";
  info[56].dominantType = "";
  info[56].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[56].fileTimeLo = 1323170578U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[57].name = "isnan";
  info[57].dominantType = "double";
  info[57].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m";
  info[57].fileTimeLo = 1286818760U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[58].name = "eml_index_plus";
  info[58].dominantType = "coder.internal.indexInt";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[58].fileTimeLo = 1286818778U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[59].name = "eml_int_forloop_overflow_check";
  info[59].dominantType = "";
  info[59].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[59].fileTimeLo = 1346510340U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub";
  info[60].name = "eml_relop";
  info[60].dominantType = "function_handle";
  info[60].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m";
  info[60].fileTimeLo = 1342451182U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[61].name = "figure";
  info[61].dominantType = "";
  info[61].resolved = "[IXMB]$matlabroot$/toolbox/matlab/graphics/figure";
  info[61].fileTimeLo = MAX_uint32_T;
  info[61].fileTimeHi = MAX_uint32_T;
  info[61].mFileTimeLo = MAX_uint32_T;
  info[61].mFileTimeHi = MAX_uint32_T;
  info[62].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[62].name = "plot";
  info[62].dominantType = "double";
  info[62].resolved = "[IXMB]$matlabroot$/toolbox/matlab/graph2d/plot";
  info[62].fileTimeLo = MAX_uint32_T;
  info[62].fileTimeHi = MAX_uint32_T;
  info[62].mFileTimeLo = MAX_uint32_T;
  info[62].mFileTimeHi = MAX_uint32_T;
  info[63].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  info[63].name = "xlabel";
  info[63].dominantType = "char";
  info[63].resolved = "[IXE]$matlabroot$/toolbox/matlab/graph2d/xlabel.m";
  info[63].fileTimeLo = 1303556946U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[65];
  ResolvedFunctionInfo (*b_info)[65];
  ResolvedFunctionInfo u[65];
  int32_T i;
  const mxArray *y;
  int32_T iv15[1];
  ResolvedFunctionInfo *r1;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m4;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info = (ResolvedFunctionInfo (*)[65])info;
  (*b_info)[64].context =
    "[E]/Users/nicolas/Documents/MATLAB/pdd_horlin_ma2/digital/timeSynchronisation.m";
  (*b_info)[64].name = "ylabel";
  (*b_info)[64].dominantType = "char";
  (*b_info)[64].resolved = "[IXE]$matlabroot$/toolbox/matlab/graph2d/ylabel.m";
  (*b_info)[64].fileTimeLo = 1303556946U;
  (*b_info)[64].fileTimeHi = 0U;
  (*b_info)[64].mFileTimeLo = 0U;
  (*b_info)[64].mFileTimeHi = 0U;
  for (i = 0; i < 65; i++) {
    u[i] = info[i];
  }

  y = NULL;
  iv15[0] = 65;
  emlrtAssign(&y, mxCreateStructArray(1, iv15, 0, NULL));
  for (i = 0; i < 65; i++) {
    r1 = &u[i];
    b_u = r1->context;
    b_y = NULL;
    m4 = mxCreateString(b_u);
    emlrtAssign(&b_y, m4);
    emlrtAddField(y, b_y, "context", i);
    b_u = r1->name;
    c_y = NULL;
    m4 = mxCreateString(b_u);
    emlrtAssign(&c_y, m4);
    emlrtAddField(y, c_y, "name", i);
    b_u = r1->dominantType;
    d_y = NULL;
    m4 = mxCreateString(b_u);
    emlrtAssign(&d_y, m4);
    emlrtAddField(y, d_y, "dominantType", i);
    b_u = r1->resolved;
    e_y = NULL;
    m4 = mxCreateString(b_u);
    emlrtAssign(&e_y, m4);
    emlrtAddField(y, e_y, "resolved", i);
    c_u = r1->fileTimeLo;
    f_y = NULL;
    m4 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m4) = c_u;
    emlrtAssign(&f_y, m4);
    emlrtAddField(y, f_y, "fileTimeLo", i);
    c_u = r1->fileTimeHi;
    g_y = NULL;
    m4 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m4) = c_u;
    emlrtAssign(&g_y, m4);
    emlrtAddField(y, g_y, "fileTimeHi", i);
    c_u = r1->mFileTimeLo;
    h_y = NULL;
    m4 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m4) = c_u;
    emlrtAssign(&h_y, m4);
    emlrtAddField(y, h_y, "mFileTimeLo", i);
    c_u = r1->mFileTimeHi;
    i_y = NULL;
    m4 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m4) = c_u;
    emlrtAssign(&i_y, m4);
    emlrtAddField(y, i_y, "mFileTimeHi", i);
  }

  emlrtAssign(&nameCaptureInfo, y);
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void timeSynchronisation_api(const mxArray * const prhs[1], const mxArray *plhs
  [1])
{
  emxArray_creal_T *input;
  const mxArray *tmp;
  real_T b_index;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_creal_T(&input, 1, &h_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(emlrtAliasP(prhs[0]), "input", input);

  /* Marshall in global variables */
  tmp = mexGetVariable("global", "d");
  if (tmp) {
    c_emlrt_marshallIn(tmp, "d", &d);
    d_dirty = 0U;
  }

  /* Invoke the target function */
  b_index = timeSynchronisation(input);

  /* Marshall out global variables */
  mexPutVariable("global", "d", b_emlrt_marshallOut(&d));

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(b_index);
  emxFree_creal_T(&input);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (timeSynchronisation_api.c) */
