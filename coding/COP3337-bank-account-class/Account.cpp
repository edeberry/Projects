#include <iostream>

// Make Account class
class Account {
public:
    // No-arg constructor
    Account();

    // Get methods
    int getID();
    double getBalance();
    double getMonthlyInterest();

    // Set methods
    void setID(int id_);
    void setBalance(double balance_);
    void setInterest(double annual_interest_rate_);
    
    // Class methods
    void withdraw(double amount);
    void deposit(double amount);

private:
    int id;
    double balance;
    double annual_interest_rate;
};

// Write implementations for class outside of the class for clarity and readability
// Define no-arg constructor
Account::Account() {
    setID(0);
    setBalance(0);
    setInterest(0);
}

// Define get methods
int Account::getID() {
    return id;
}

double Account::getBalance() {
    return balance;
}

double Account::getMonthlyInterest() {
    // Calculate based on account balance and annual interest rate
    double monthly_interest_rate = (annual_interest_rate / 100) * balance / 12;
    return monthly_interest_rate;
}

// Define set methods
void Account::setID(int id_) {
    if (id_ >= 0) {
        id = id_;
    }
    else id = 0;
}

void Account::setBalance(double balance_) {
    if (balance_ >= 0) {
        balance = balance_;
    }
    else balance = 0;
}

void Account::setInterest(double annual_interest_rate_) {
    if (annual_interest_rate_ >= 0) {
        annual_interest_rate = annual_interest_rate_;
    }
    else annual_interest_rate = 0;
}

// Define class methods
void Account::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "Insufficient funds: Current balance is: $" << balance << std::endl;
    }
    else balance = balance - amount;
}

void Account::deposit(double amount) {
    if (amount >= 0) {
        balance += amount;
    }
}

int main (void) {
    Account myAccount;
    myAccount.setID(-1);
    myAccount.setBalance(20000);
    myAccount.setInterest(4.5);
    myAccount.withdraw(25000);
    myAccount.deposit(3000);

    std::cout << "ID is: " << myAccount.getID() << std::endl;
    std::cout << "Balance is: " << myAccount.getBalance() << std::endl;
    std::cout << "Monthly interest is: $" << myAccount.getMonthlyInterest() << std::endl;

    return 0;
}
