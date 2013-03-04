cmake_minimum_required(VERSION 2.8)

# The name of the project is "PATH".  CMakeLists files in this project can
# refer to the root source directory of the project as ${PATH_SOURCE_DIR} and
# to the root binary directory of the project as ${PATH_BINARY_DIR}.
project (PATH)

add_subdirectory (Dependencies)

### C4
# Make sure the compiler can find include files from the C4 library.
include_directories (${C4_SOURCE_DIR})

# Make sure the linker can find the F8 library once it is built.
link_directories (${C4_BINARY_DIR})

# Create a library called "PATH" which includes the source file "path.cxx".
# The extension is already found.  Any number of sources could be listed here.
add_library (PATH path.cxx)

target_link_libraries (PATH C4)
