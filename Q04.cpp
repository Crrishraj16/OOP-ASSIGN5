#include <iostream>
#include <stdexcept>

int main() {
    int n;

    // taking the number from the user
    std::cout << "Enter a number: ";
    std::cin >> n;

    try {
        // checking if the number is between 0 and 100
        if (n < 0 || n > 100) {
            throw std::runtime_error("The number should be between 0 and 100");
        }
    } catch (const std::exception& e) {
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }

    return 0;
}
