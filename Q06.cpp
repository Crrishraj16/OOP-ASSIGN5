#include <iostream>
#include <stdexcept>

int main()
{
    std::string email;

    // taking the email address from the user
    std::cout << "Enter an email address: ";
    std::cin >> email;

    try
    {
        // checking if the email address contains @ symbol
        if (email.find('@') == std::string::npos)
        {
            throw std::runtime_error("The email address does not contain @ symbol");
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }

    return 0;
}
