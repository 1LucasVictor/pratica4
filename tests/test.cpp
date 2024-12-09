#include "calculadora.hpp"
#include <cassert>
#include <iostream>

void test_addition() {
  std::cout << "[TEST] Testing addition..." << std::endl;

  int a = 2, b = 3;
  int expected = 5;

  int result = Calculator::add(a, b);

  assert(result == expected);

  std::cout << "[PASS] Addition test passed." << std::endl;
}

void test_subtraction() {
  std::cout << "[TEST] Testing subtraction..." << std::endl;

  int a = 10, b = 4;
  int expected = 6;

  int result = Calculator::subtract(a, b);

  assert(result == expected);

  std::cout << "[PASS] Subtraction test passed." << std::endl;
}

void test_multiplication() {
  std::cout << "[TEST] Testing multiplication..." << std::endl;

  int a = 3, b = 5;
  int expected = 15;

  int result = Calculator::multiply(a, b);

  assert(result == expected);

  std::cout << "[PASS] Multiplication test passed." << std::endl;
}

void test_division() {
  std::cout << "[TEST] Testing division..." << std::endl;

  int a = 20, b = 4;
  int expected = 5;

  int result = Calculator::divide(a, b);

  assert(result == expected);

  std::cout << "[PASS] Division test passed." << std::endl;

  // Test division by zero
  std::cout << "[TEST] Testing division by zero..." << std::endl;
  try {
    Calculator::divide(1, 0);
    assert(false); // Should not reach here
  } catch (const std::invalid_argument &) {
    std::cout << "[PASS] Division by zero handled correctly." << std::endl;
  }
}

void test_modulo() {
  std::cout << "[TEST] Testing modulo..." << std::endl;

  int a = 10, b = 3;
  int expected = 1;

  int result = Calculator::mod(a, b);

  assert(result == expected);

  std::cout << "[PASS] Modulo test passed." << std::endl;

  // Test modulo by zero
  std::cout << "[TEST] Testing modulo by zero..." << std::endl;
  try {
    Calculator::mod(1, 0);
    assert(false); // Should not reach here
  } catch (const std::invalid_argument &) {
    std::cout << "[PASS] Modulo by zero handled correctly." << std::endl;
  }
}

int main() {
  std::cout << "Starting tests..." << std::endl;

  test_addition();
  test_subtraction();
  test_multiplication();
  test_division();
  test_modulo();

  std::cout << "All tests completed successfully!" << std::endl;
  return 0;
}
