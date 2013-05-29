/*
 * timeSynchronisationSIMO_types.h
 *
 * Code generation for function 'timeSynchronisationSIMO'
 *
 * C source code generated on: Wed May 29 13:24:31 2013
 *
 */

#ifndef __TIMESYNCHRONISATIONSIMO_TYPES_H__
#define __TIMESYNCHRONISATIONSIMO_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct
{
    real_T M;
    real_T SNRMin;
    real_T SNRStep;
    real_T SNRMax;
    real_T subCarriers;
    real_T cyclicPrefix;
    real_T messageLength;
    real_T numberPreamble;
    real_T cyclicPrefixPreamble;
    real_T preambleBoost;
    real_T synchronisationPlots;
    real_T pilotPattern;
    real_T RXAntenna;
    real_T bandwidthMeasured;
    real_T bandwidth;
    real_T enableCFO;
    real_T Ts;
    real_T bitsPerSymbol;
    real_T OFDM;
    real_T SNRIterations;
    real_T preamble[512];
    creal_T preambleConstellations[64];
    creal_T preambleOFDM[64];
    real_T preambleLength;
    real_T data[393216];
    creal_T referenceSymbol;
    real_T numberPilots;
    real_T maskData[64];
    real_T maskPilots[64];
    real_T dataLength;
    real_T signalLength;
} b_struct_T;
#endif /*typedef_b_struct_T*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_creal_T
#define struct_emxArray_creal_T
struct emxArray_creal_T
{
    creal_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_creal_T*/
#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct emxArray_creal_T emxArray_creal_T;
#endif /*typedef_emxArray_creal_T*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    real_T M;
    real_T SNRMin;
    real_T SNRStep;
    real_T SNRMax;
    real_T subCarriers;
    real_T cyclicPrefix;
    real_T messageLength;
    real_T numberPreamble;
    real_T cyclicPrefixPreamble;
    real_T preambleBoost;
    real_T synchronisationPlots;
    real_T pilotPattern;
    real_T RXAntenna;
    real_T bandwidthMeasured;
    real_T bandwidth;
    real_T enableCFO;
    real_T Ts;
    real_T bitsPerSymbol;
    real_T OFDM;
    real_T SNRIterations;
    emxArray_real_T *preamble;
    emxArray_creal_T *preambleConstellations;
    emxArray_creal_T *preambleOFDM;
    real_T preambleLength;
    emxArray_real_T *data;
    creal_T referenceSymbol;
    real_T numberPilots;
    emxArray_real_T *maskData;
    emxArray_real_T *maskPilots;
    real_T dataLength;
    real_T signalLength;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (timeSynchronisationSIMO_types.h) */
