#include <iostream>
#include "calculator.h"

int main() {
    double num1, num2;
    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;

    double result = Calculator::Sub(num1, num2);
    std::cout << "Substraction: " << result << std::endl;

    result = Calculator::Add(num1, num2);
    std::cout << "Sum: " << result << std::endl;
    
    result = Calculator::Mul(num1, num2);
    std::cout << "Multiplication: " << result << std::endl;
    return 0;
}
