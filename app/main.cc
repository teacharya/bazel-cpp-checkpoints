#include <iostream>
#include <string>
#include <stdexcept>
#include "calculator.h"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <add|sub|mul|div> <int a> <int b>\n";
        return 1;
    }

    std::string op = argv[1];
    int a = std::stoi(argv[2]);
    int b = std::stoi(argv[3]);

    Calculator calc;

    try {
        if (op == "add") std::cout << calc.add(a, b) << "\n";
        else if (op == "sub") std::cout << calc.subtract(a, b) << "\n";
        else if (op == "mul") std::cout << calc.multiply(a, b) << "\n";
        else if (op == "div") std::cout << calc.divide(a, b) << "\n";
        else {
            std::cerr << "Unknown operation: " << op << "\n";
            return 1;
        }
    } catch (std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}