# A simple CMake project template
This is a simple CMake project template that works for small and medium sized projects. It will automatically compile all files in the src/ directory and look for headers in the include/ directory.
You can write your own cmake scripts in the cmake/ directory, but you must add any files you add to the CMakeLists.txt main file to execute them. There is a gen_headers.cmake file which will process any headers in include/ which end with .in. Generated headers are written to build/include. This project is intended to be an out of source build.

If you are not familiar with cmake, please read up on it here: https://cmake.org/cmake/help/latest/index.html

You may copy the source files and use it without giving credit to me.
