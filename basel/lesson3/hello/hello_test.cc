#include "hello.hh"

int main() {
  Hello hello;
  assert(hello.sayHi() == "Hello bazel");
  // assert(hello.sayHi() == "Annie");
}
