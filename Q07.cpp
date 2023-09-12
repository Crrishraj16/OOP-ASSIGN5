#include <iostream>
#include <stdexcept>

class InsufficientBalanceException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance for withdrawal.";
    }
};

class BankAccount {
private:
    int accountNo;
    double balance;

public:
    BankAccount(int accNo, double initialBalance) : accountNo(accNo), balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientBalanceException();
        }
        balance -= amount;
        std::cout << "Withdrawal successful. Remaining balance: " << balance << std::endl;
    }
};

int main() {
    int accountNo;
    double initialBalance, withdrawalAmount;

    std::cout << "Enter your account number: ";
    std::cin >> accountNo;

    std::cout << "Enter your initial balance: ";
    std::cin >> initialBalance;

    BankAccount account(accountNo, initialBalance);

    while (true) {
        std::cout << "Enter the withdrawal amount: ";
        std::cin >> withdrawalAmount;

        try {
            account.withdraw(withdrawalAmount);
            break; // Exit the loop if withdrawal is successful
        } catch (const InsufficientBalanceException& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    return 0;
}
