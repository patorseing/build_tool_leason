#include "hello.hh"
#include <cassert>

int main() {
  Hello hello;
  assert(hello.sayHi() == "Hello bazel");
  // assert(hello.sayHi() == "Annie");
}
