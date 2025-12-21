#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount (string accNum, double initialBlnc){
            accountNumber=accNum;
            balance=initialBlnc;
        }

        //getter
        double getBalance() const {
            return balance;
        }

        //Method to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout<<"Deposited: "<< amount <<endl;
            } else {
                cout<<"Invalid deposited amount!"<<endl;
            }
        }

        // method to withdraw money
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
            } else {
                cout<<"Invalid Withdraw request! \n";
            }
        }

};

int main(){
    BankAccount myAccount("17051705", 1500);

    myAccount.getBalance();

    myAccount.deposit(5000);
    myAccount.withdraw(2000);
    
    return 0;
}