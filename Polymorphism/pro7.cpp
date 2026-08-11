#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
public:
    void start() override
    {
        cout << "Car engine started." << endl;
    }

    void stop() override
    {
        cout << "Car stopped." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void start() override
    {
        cout << "Bike engine started." << endl;
    }

    void stop() override
    {
        cout << "Bike stopped." << endl;
    }
};

int main()
{
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    v1->start();
    v1->stop();

    cout << endl;

    v2->start();
    v2->stop();

    delete v1;
    delete v2;

    return 0;
}