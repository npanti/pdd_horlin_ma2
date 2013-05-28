MATLAB="/Applications/MATLAB_R2013a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/nicolas/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for timeSynchronisation" > timeSynchronisation_mex.mki
echo "CC=$CC" >> timeSynchronisation_mex.mki
echo "CFLAGS=$CFLAGS" >> timeSynchronisation_mex.mki
echo "CLIBS=$CLIBS" >> timeSynchronisation_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> timeSynchronisation_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> timeSynchronisation_mex.mki
echo "CXX=$CXX" >> timeSynchronisation_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> timeSynchronisation_mex.mki
echo "CXXLIBS=$CXXLIBS" >> timeSynchronisation_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> timeSynchronisation_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> timeSynchronisation_mex.mki
echo "LD=$LD" >> timeSynchronisation_mex.mki
echo "LDFLAGS=$LDFLAGS" >> timeSynchronisation_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> timeSynchronisation_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> timeSynchronisation_mex.mki
echo "Arch=$Arch" >> timeSynchronisation_mex.mki
echo OMPFLAGS= >> timeSynchronisation_mex.mki
echo OMPLINKFLAGS= >> timeSynchronisation_mex.mki
echo "EMC_COMPILER=" >> timeSynchronisation_mex.mki
echo "EMC_CONFIG=optim" >> timeSynchronisation_mex.mki
"/Applications/MATLAB_R2013a.app/bin/maci64/gmake" -B -f timeSynchronisation_mex.mk
