#include <iostream>
#include <cat.hh>
#include <variant>
#include <QuickbitsConfig.hh>

int main() {
  hello();
  using FancyVariant = std::variant<double, int>;
  std::cout << "Major version: " << quickbits_VERSION_MAJOR << std::endl;
  std::cout << "Minor version: " << quickbits_VERSION_MINOR << std::endl;
}
