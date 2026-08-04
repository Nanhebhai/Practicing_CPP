#include <iostream>
using namespace std;

class Mobile
{
public:
    void call()
    {
        cout << "Calling..." << endl;
    }
};

class Smartphone : public Mobile
{
public:
    void internet()
    {
        cout << "Browsing Internet..." << endl;
    }
};

int main()
{
    Smartphone s;

    s.call();
    s.internet();

    return 0;
}