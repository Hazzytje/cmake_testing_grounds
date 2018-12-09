# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

include("cmake/modules/HunterGate.cmake")

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.58.tar.gz"
    SHA1 "ee80dc91f91f5eb6892f80a0a92c83b4de8e980a"
)

project (CMakeProject1)

# Include sub-projects.
add_subdirectory (CMakeProject1)
