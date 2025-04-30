cmake_minimum_required(VERSION 3.12)

# change "my-project" to whatever your project will be called!
# this also is where you define what languages your project will be written in and the current version of your project
project(
  my-project
  VERSION 1.0.0.0
  LANGUAGES C CXX
)

# this gets all files in the src/ directory, change the path if you like.
file(
  GLOB_RECURSE 
  SRC_FILES 
  CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"     # remove this if you dont want to compile .c files
  CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"   # remove this if you dont wanto to compile .cpp files
)

# this runs cmake/gen_headers.cmake, which generates any needed header files.
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/gen_headers.cmake)

# this adds a rule to compile all files in the src/ directory.
add_executable(
  ${PROJECT_NAME}
  ${SRC_FILES}
)

# this adds include/ and our generated headers in build/include/ as include directories. 
target_include_directories(
  ${PROJECT_NAME} 
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
  PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/include
)