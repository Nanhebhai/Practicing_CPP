#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay(double amount)
    {
        cout << "Payment of " << amount << endl;
    }
};

class CreditCard : public Payment
{
public:
    void pay(double amount) override
    {
        cout << "Paid Rs. " << amount
             << " using Credit Card" << endl;
    }
};

class UPI : public Payment
{
public:
    void pay(double amount) override
    {
        cout << "Paid Rs. " << amount
             << " using UPI" << endl;
    }
};

class Cash : public Payment
{
public:
    void pay(double amount) override
    {
        cout << "Paid Rs. " << amount
             << " using Cash" << endl;
    }
};

int main()
{
    Payment *ptr;

    CreditCard card;
    UPI upi;
    Cash cash;

    ptr = &card;
    ptr->pay(2500);

    ptr = &upi;
    ptr->pay(1500);

    ptr = &cash;
    ptr->pay(1000);

    return 0;
}