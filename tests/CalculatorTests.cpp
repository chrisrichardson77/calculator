#include <gtest/gtest.h>
#include <Calculator.hpp>

TEST(CalculatorTests, ctor) {
  auto instance = new Calculator();

  delete instance;
}

TEST(CalculatorTests, addReturnsZeroForEmptyString) {
  Calculator calc;
  std::string testString;
  int result = calc.add(testString);

  ASSERT_EQ(result, 0);
}
