MATLAB="/Applications/MATLAB_R2013a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/nicolas/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for timeSynchronisationSIMO" > timeSynchronisationSIMO_mex.mki
echo "CC=$CC" >> timeSynchronisationSIMO_mex.mki
echo "CFLAGS=$CFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "CLIBS=$CLIBS" >> timeSynchronisationSIMO_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "CXX=$CXX" >> timeSynchronisationSIMO_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "CXXLIBS=$CXXLIBS" >> timeSynchronisationSIMO_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "LD=$LD" >> timeSynchronisationSIMO_mex.mki
echo "LDFLAGS=$LDFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> timeSynchronisationSIMO_mex.mki
echo "Arch=$Arch" >> timeSynchronisationSIMO_mex.mki
echo OMPFLAGS= >> timeSynchronisationSIMO_mex.mki
echo OMPLINKFLAGS= >> timeSynchronisationSIMO_mex.mki
echo "EMC_COMPILER=" >> timeSynchronisationSIMO_mex.mki
echo "EMC_CONFIG=optim" >> timeSynchronisationSIMO_mex.mki
"/Applications/MATLAB_R2013a.app/bin/maci64/gmake" -B -f timeSynchronisationSIMO_mex.mk
