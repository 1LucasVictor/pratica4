#include "calculadora.hpp"
#include <iostream>

int main() {
  std::cout << "Welcome to the calculator program!" << std::endl;

  int a, b;
  char op;
  std::cout << "Enter an operation (e.g., 2 + 3): ";
  std::cin >> a >> op >> b;

  try {
    int result;
    switch (op) {
    case '+':
      result = Calculator::add(a, b);
      break;
    case '-':
      result = Calculator::subtract(a, b);
      break;
    case '*':
      result = Calculator::multiply(a, b);
      break;
    case '/':
      result = Calculator::divide(a, b);
      break;
    case '%':
      result = Calculator::mod(a, b);
      break;
    default:
      throw std::invalid_argument("Invalid operator");
    }
    std::cout << "Result: " << result << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
