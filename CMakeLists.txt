cmake_minimum_required(VERSION 2.8.9)

project(lbfgs CXX)
enable_language(C CXX Fortran)

set(CMAKE_Fortran_FLAGS_DEBUG "-O0")
set(CMAKE_Fortran_FLAGS_RELEASE "-O3 -DNDEBUG")
set(CMAKE_Fortran_FLAGS "-g -W -Wall -Wno-compare-reals")

add_library(lbfgs lbfgs.f)

include(FortranCInterface)
FortranCInterface_VERIFY(CXX)
FortranCInterface_HEADER(${PROJECT_SOURCE_DIR}/fc.h MACRO_NAMESPACE "FC_")

enable_testing()

add_executable(sdrive sdrive.f)
target_link_libraries(sdrive lbfgs)
add_test(driver sdrive)
