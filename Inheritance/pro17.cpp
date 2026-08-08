#include <iostream>
using namespace std;

class Account
{
protected:
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
};

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    void calculateInterest()
    {
        interestRate = 5.0;
        double interest = balance * interestRate / 100;

        cout << "\nAccount Number: " << accountNumber;
        cout << "\nInitial Balance: " << balance;
        cout << "\nInterest: " << interest;
        cout << "\nFinal Balance: " << balance + interest << endl;
    }
};

int main()
{
    SavingsAccount s;

    s.createAccount();
    s.calculateInterest();

    return 0;
}