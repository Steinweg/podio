# CMake generated Testfile for 
# Source directory: /afs/desy.de/user/s/steinweg/devel/podio/tests
# Build directory: /afs/desy.de/user/s/steinweg/devel/podio/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(write "/afs/desy.de/user/s/steinweg/devel/podio/tests/write")
SET_TESTS_PROPERTIES(write PROPERTIES  ENVIRONMENT "LD_LIBRARY_PATH=/usr/local/lib:/usr/local/tests:/afs/desy.de/user/s/steinweg/devel/plcio/lib:/afs/desy.de/user/s/steinweg/devel/podio/install/tests:/afs/desy.de/user/s/steinweg/devel/podio/install/lib:/afs/desy.de/user/s/steinweg/devel/podio/install/tests:/afs/desy.de/project/ilcsoft/sw/x86_64_gcc48_sl6/root/6.06.02/lib:/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib:/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib64:/afs/cern.ch/sw/lcg/external/Python/2.7.4/x86_64-slc6-gcc48-opt/lib:")
ADD_TEST(read "/afs/desy.de/user/s/steinweg/devel/podio/tests/read")
SET_TESTS_PROPERTIES(read PROPERTIES  DEPENDS "write" ENVIRONMENT "LD_LIBRARY_PATH=/usr/local/lib:/usr/local/tests:/afs/desy.de/user/s/steinweg/devel/plcio/lib:/afs/desy.de/user/s/steinweg/devel/podio/install/tests:/afs/desy.de/user/s/steinweg/devel/podio/install/lib:/afs/desy.de/user/s/steinweg/devel/podio/install/tests:/afs/desy.de/project/ilcsoft/sw/x86_64_gcc48_sl6/root/6.06.02/lib:/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib:/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib64:/afs/cern.ch/sw/lcg/external/Python/2.7.4/x86_64-slc6-gcc48-opt/lib:")
ADD_TEST(pyunittest "python" "-m" "unittest" "discover" "-s" "/usr/local/python")
SET_TESTS_PROPERTIES(pyunittest PROPERTIES  DEPENDS "write" ENVIRONMENT "LD_LIBRARY_PATH=/usr/local/lib:/usr/local/tests:/afs/desy.de/user/s/steinweg/devel/plcio/lib:/afs/desy.de/user/s/steinweg/devel/podio/install/tests:/afs/desy.de/user/s/steinweg/devel/podio/install/lib:/afs/desy.de/user/s/steinweg/devel/podio/install/tests:/afs/desy.de/project/ilcsoft/sw/x86_64_gcc48_sl6/root/6.06.02/lib:/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib:/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib64:/afs/cern.ch/sw/lcg/external/Python/2.7.4/x86_64-slc6-gcc48-opt/lib:;PYTHONPATH=/usr/local/python:/afs/desy.de/user/s/steinweg/devel/podio/install/python:/afs/desy.de/project/ilcsoft/sw/x86_64_gcc48_sl6/root/6.06.02/lib:/afs/desy.de/user/s/steinweg/python/packages")
ADD_TEST(unittest "/afs/desy.de/user/s/steinweg/devel/podio/tests/unittest")
