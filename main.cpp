#include "Calculator.hpp"
#include <iostream>

int main(int, char** args) {
  Calculator calc;

  auto result = calc.add(*args);
  std::cout << "Teddy says: " << result << std::endl;

  return result;
}
