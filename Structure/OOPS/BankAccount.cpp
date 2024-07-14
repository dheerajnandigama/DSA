#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    string accountType;
    float accountBalance;
public:
    BankAccount(string accNum, string accHolderName, string accType, float accBalance) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        accountType = accType;
        accountBalance = accBalance;
    }
    void setAccountNumber(string accNum) {
        accountNumber = accNum;
    }
    void setAccountHolderName(string accHolderName) {
        accountHolderName = accHolderName;
    }
    void setAccountType(string accType) {
        accountType = accType;
    }
    void setAccountBalance(float accBalance) {
        accountBalance = accBalance;
    }
    string getAccountNumber() {
        return accountNumber;
    }
    string getAccountHolderName() {
        return accountHolderName;
    }
    string getAccountType() {
        return accountType;
    }
    float getAccountBalance() {
        return accountBalance;
    }
    void deposit(float amount) {
        accountBalance += amount;
    }
    void withdraw(float amount) {
        if (amount > accountBalance) {
            cout << "Error: Insufficient funds" << endl;
        }
        else {
            accountBalance -= amount;
        }
    }
    BankAccount operator+(const BankAccount& other) {
        BankAccount result("", "", "", 0);
        result.accountBalance = accountBalance + other.accountBalance;
        return result;
    }
    bool operator==(const BankAccount& other) {
        return accountNumber == other.accountNumber;
    }
    virtual float getInterestRate() {
        return 0.0;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string accNum, string accHolderName, float accBalance) : BankAccount(accNum, accHolderName, "savings", accBalance) {}
    float getInterestRate() override {
        return 0.01;
    }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(string accNum, string accHolderName, float accBalance) : BankAccount(accNum, accHolderName, "checking", accBalance) {}
    float getInterestRate() override {
        return 0.0;
    }
};

int main() {
    BankAccount acc1("123456", "Alex Brenton", "savings", 1000.0);
    SavingsAccount acc2("789012", "Jane Smith", 2000.0);
    CheckingAccount acc3("345678", "Bob Johnson", 5000.0);

    // Deposit and withdraw funds
    acc1.deposit(500.0);
    acc2.withdraw(1000.0);
    acc3.withdraw(2000.0);

    // Add two BankAccount objects together
    BankAccount acc4 = acc1 + acc2;
    cout << "Combined balance: " << acc4.getAccountBalance() << endl;

    // Compare two BankAccount objects
    if (acc1 == acc2) {
        cout << "Account numbers match" << endl;
    }
    else {
        cout << "Account numbers do not match" << endl;
    }

    // Call getInterestRate method on child objects
    cout << "Savings account interest rate: " << acc2.getInterestRate() << endl;
    cout << "Checking account interest rate: " << acc3.getInterestRate() << endl;

    return 0;
}