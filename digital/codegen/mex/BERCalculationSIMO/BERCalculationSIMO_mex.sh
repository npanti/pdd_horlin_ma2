MATLAB="/Applications/MATLAB_R2013a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/nicolas/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for BERCalculationSIMO" > BERCalculationSIMO_mex.mki
echo "CC=$CC" >> BERCalculationSIMO_mex.mki
echo "CFLAGS=$CFLAGS" >> BERCalculationSIMO_mex.mki
echo "CLIBS=$CLIBS" >> BERCalculationSIMO_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> BERCalculationSIMO_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> BERCalculationSIMO_mex.mki
echo "CXX=$CXX" >> BERCalculationSIMO_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> BERCalculationSIMO_mex.mki
echo "CXXLIBS=$CXXLIBS" >> BERCalculationSIMO_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> BERCalculationSIMO_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> BERCalculationSIMO_mex.mki
echo "LD=$LD" >> BERCalculationSIMO_mex.mki
echo "LDFLAGS=$LDFLAGS" >> BERCalculationSIMO_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> BERCalculationSIMO_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> BERCalculationSIMO_mex.mki
echo "Arch=$Arch" >> BERCalculationSIMO_mex.mki
echo OMPFLAGS= >> BERCalculationSIMO_mex.mki
echo OMPLINKFLAGS= >> BERCalculationSIMO_mex.mki
echo "EMC_COMPILER=" >> BERCalculationSIMO_mex.mki
echo "EMC_CONFIG=optim" >> BERCalculationSIMO_mex.mki
"/Applications/MATLAB_R2013a.app/bin/maci64/gmake" -B -f BERCalculationSIMO_mex.mk
