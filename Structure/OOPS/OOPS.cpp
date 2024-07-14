#include <iostream>
using namespace std;

class BankAccount{
    private:
      double balance;
      int accountNumber;

    public:
      BankAccount(double initialBalance, int accountNum){
        balance = initialBalance;
        accountNumber = accountNum;
      }
      void deposit(double amount){
        balance += amount;
      }
      void withdraw(double amount){
        balance -= amount;
      }
      double getBalance(){
        return balance;
      }
      int getAccountNumber(){
        return accountNumber;
      }
};

int main(){

BankAccount b(1000,123456);
b.deposit(100);
b.withdraw(50);
cout<<"Account Balance: "<< b.getBalance()<<endl;
cout<<"Account number: "<< b.getAccountNumber()<<endl;

  return 0;
}
