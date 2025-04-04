#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "Addition: " << add(5, 3) << "\n";
    std::cout << "Subtraction: " << subtract(10, 4) << "\n";
    std::cout << "Multiplication: " << multiply(6, 7) << "\n";
    std::cout << "Division: " << divide(10, 2) << "\n";
    std::cout << "Factorial: " << factorial(5) << "\n";
    std::cout << "GCD: " << gcd(24, 36) << "\n";
    std::cout << "LCM: " << lcm(4, 5) << "\n";
    std::cout << "Random Number: " << randomNumber(1, 100) << "\n";
    return 0;
}
