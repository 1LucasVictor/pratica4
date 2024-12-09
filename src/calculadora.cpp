#include "calculadora.hpp"
#include <iostream>
#include <limits>
#include <stdexcept>

// Addition
int Calculator::add(int a, int b) { return a + b; }

// Subtraction
int Calculator::subtract(int a, int b) { return a - b; }

// Multiplication
int Calculator::multiply(int a, int b) { return a * b; }

// Division
int Calculator::divide(int a, int b) {
  if (b == 0) {
    throw std::invalid_argument("Division by zero");
  }
  return a / b;
}

// Modulo
int Calculator::mod(int a, int b) {
  if (b == 0) {
    throw std::invalid_argument("Modulo by zero");
  }
  return a % b;
}
