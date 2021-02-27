#include "hello.hh"
#include <cassert>
#include "gtest/gtest.h"

// case TRUE
TEST(HelloShould, ReturnHello)
{
  Hello hello;
  std::string expected = "Hello bazel";
  std::string actual = hello.sayHi();
  EXPECT_EQ(expected, actual);
}

// case FAIL
TEST(HelloShould2, ReturnHello2)
{
  Hello hello;
  std::string expected = "Hello world";
  std::string actual = hello.sayHi();
  EXPECT_EQ(expected, actual) << "ERROR: test error";
}

// int main()
// {
//   Hello hello;
//   std::string expected = "Hello bazel";
//   std::string actual = hello.sayHi();
//   assert(actual == expected);
// }
