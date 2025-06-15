#include <iostream>
#include "lib/calculator.h"

int main() {
    Calculator calc;
    std::cout << "3 + 4 = " << calc.add(3, 4) << std::endl;
    std::cout << "10 / 2 = " << calc.divide(10, 2) << std::endl;

    return 0;
}