#include "hello.hh"
#include <iostream>
#include "HelloConfig.hh"

int main() {
  Hello hello;
  std::cout << hello.sayHi() << std::endl;
  std::cout << "Major version: " << hello_VERSION_MAJOR << std::endl;
  std::cout << "Minor version: " << hello_VERSION_MINOR << std::endl;
}
