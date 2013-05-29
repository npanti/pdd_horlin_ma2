/*
 * BERCalculation_types.h
 *
 * Code generation for function 'BERCalculation'
 *
 * C source code generated on: Wed May 29 16:57:06 2013
 *
 */

#ifndef __BERCALCULATION_TYPES_H__
#define __BERCALCULATION_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
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
    creal_T referenceSymbol;
    real_T maskData[64];
    real_T maskPilots[64];
    real_T numberPilots;
    real_T data[393216];
    real_T signalLength;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (BERCalculation_types.h) */
