#include <iostream>
#include <stdexcept>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    try {
        if (age < 18) {
            throw std::runtime_error("You are not eligible for a license. Minimum age requirement is 18.");
        }
        std::cout << "Congratulations! You are eligible for a license." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
