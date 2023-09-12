#include <iostream>
#include <stdexcept>

void checkEven(int num)
{
    if (num % 2 != 0)
    {
        throw std::runtime_error("The number is odd.");
    }
}

int main()
{
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    try
    {
        checkEven(number);
        std::cout << "The number is even." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
