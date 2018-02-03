#
#  @file CMakeLists.txt
# 
#  @author Jaroslaw Wiosna
# 
#  @par Licence
#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at http://mozilla.org/MPL/2.0/.
#

cmake_minimum_required (VERSION 2.6)

option(SANITIZER "Address Sanitizer" OFF)
option(BUILD_TESTS "Build tests" ON)
option(BUILD_LONG_RUNNING_TESTS "Build tests" OFF)

set(COMPILE_FLAGS "-std=c++1z -Wall -O3 -Wno-missing-braces")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}" )
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINK_EXECUTABLE} ${LINK_FLAGS}" )

include_directories( 
  Primes
  Antiprimes
)
set(files
  Primes/Primes.cpp
  Antiprimes/Antiprimes.cpp
)

######

project (MetaPrimes)
add_executable(MetaPrimes main.cpp ${files}) 
target_link_libraries(MetaPrimes)


