#include <iostream>
#include <stdexcept>

int main() {
    char op;
    int a, b;

    // taking the operator and two numbers from the user
    std::cout << "Enter the operator: ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    try {
        // performing the arithmetic operation
        if (op == '/') {
            if (b == 0) {
                throw std::runtime_error("Division by zero");
            }
        }
        switch (op) {
            case '+':
                std::cout << a + b << std::endl;
                break;
            case '-':
                std::cout << a - b << std::endl;
                break;
            case '*':
                std::cout << a * b << std::endl;
                break;
            case '/':
                std::cout << a / b << std::endl;
                break;
            default:
                std::cout << "Invalid operator" << std::endl;
                break;
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception thrown: " << e.what() << std::endl;
    }

    return 0;
}
