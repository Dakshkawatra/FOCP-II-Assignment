#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    void setAccount(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    void setInterestRate(double rate) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

int main() {
    SavingsAccount s;

    s.setAccount(12345, 50000);
    s.setInterestRate(5);

    s.displayAccount();
    s.calculateInterest();

    return 0;
}