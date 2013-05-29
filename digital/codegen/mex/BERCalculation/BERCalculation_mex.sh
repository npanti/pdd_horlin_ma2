MATLAB="/Applications/MATLAB_R2013a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/nicolas/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for BERCalculation" > BERCalculation_mex.mki
echo "CC=$CC" >> BERCalculation_mex.mki
echo "CFLAGS=$CFLAGS" >> BERCalculation_mex.mki
echo "CLIBS=$CLIBS" >> BERCalculation_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> BERCalculation_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> BERCalculation_mex.mki
echo "CXX=$CXX" >> BERCalculation_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> BERCalculation_mex.mki
echo "CXXLIBS=$CXXLIBS" >> BERCalculation_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> BERCalculation_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> BERCalculation_mex.mki
echo "LD=$LD" >> BERCalculation_mex.mki
echo "LDFLAGS=$LDFLAGS" >> BERCalculation_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> BERCalculation_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> BERCalculation_mex.mki
echo "Arch=$Arch" >> BERCalculation_mex.mki
echo OMPFLAGS= >> BERCalculation_mex.mki
echo OMPLINKFLAGS= >> BERCalculation_mex.mki
echo "EMC_COMPILER=" >> BERCalculation_mex.mki
echo "EMC_CONFIG=optim" >> BERCalculation_mex.mki
"/Applications/MATLAB_R2013a.app/bin/maci64/gmake" -B -f BERCalculation_mex.mk
