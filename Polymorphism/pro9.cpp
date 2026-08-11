#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void makePayment(double amount) = 0;

    virtual void paymentStatus()
    {
        cout << "Payment processing..." << endl;
    }

    virtual ~Payment() {}
};

class UPI : public Payment
{
public:
    void makePayment(double amount) override
    {
        cout << "Paid Rs. " << amount << " using UPI." << endl;
    }

    void paymentStatus() override
    {
        cout << "UPI Payment Successful." << endl;
    }
};

class CreditCard : public Payment
{
public:
    void makePayment(double amount) override
    {
        cout << "Paid Rs. " << amount << " using Credit Card." << endl;
    }

    void paymentStatus() override
    {
        cout << "Credit Card Payment Successful." << endl;
    }
};

class NetBanking : public Payment
{
public:
    void makePayment(double amount) override
    {
        cout << "Paid Rs. " << amount << " using Net Banking." << endl;
    }

    void paymentStatus() override
    {
        cout << "Net Banking Payment Successful." << endl;
    }
};

void processPayment(Payment* payment, double amount)
{
    payment->makePayment(amount);
    payment->paymentStatus();
    cout << endl;
}

int main()
{
    UPI upi;
    CreditCard card;
    NetBanking bank;

    processPayment(&upi, 2500);
    processPayment(&card, 5000);
    processPayment(&bank, 7500);

    return 0;
}