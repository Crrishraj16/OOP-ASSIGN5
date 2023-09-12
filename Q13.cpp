#include <iostream>
#include <stdexcept>
#include <cmath>

bool isArmstrong(int n) {
    int sum = 0;
    int temp = n;
    
    // calculating the sum of the cubes of the digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    
    // returning true if the number is an Armstrong number
    return n == sum;
}

int main() {
    int n;

    // taking the number from the user
    std::cout << "Enter a number: ";
    std::cin >> n;

    try {
        // checking if the number is an Armstrong number
        if (!isArmstrong(n)) {
            throw std::runtime_error("The number is not an Armstrong number");
        }

        std::cout << "The number is an Armstrong number." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception thrown: " << e.what() << std::endl;
    }

    return 0;
}
