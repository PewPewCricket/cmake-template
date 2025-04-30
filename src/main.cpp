#include <iostream>

#include <version.h>

int main() {
  std::cout << "Hello world from: " << PROJECT_NAME_STRING << " version " << PROJECT_VERSION_STRING << std::endl;
}