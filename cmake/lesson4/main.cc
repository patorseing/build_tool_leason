#include <iostream>
#include <cat.hh>
#include <variant>

int main() {
  hello();
  using FancyVariant = std::variant<double, int>;
}
