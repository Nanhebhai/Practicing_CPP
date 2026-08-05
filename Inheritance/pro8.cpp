#include <iostream>
using namespace std;

class BankAccount
{
protected:
    string name;
    float balance;

public:
    void input()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Balance: ";
        cin >> balance;
    }
};

class SavingsAccount : public BankAccount
{
public:
    void interest()
    {
        float interest = balance * 0.05;

        cout << "\nInterest = " << interest;
        cout << "\nFinal Balance = " << balance + interest;
    }
};

int main()
{
    SavingsAccount s;

    s.input();
    s.interest();
}