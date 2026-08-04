#include <iostream>
using namespace std;

class Fruit
{
public:
    void taste()
    {
        cout << "Fruit is Sweet." << endl;
    }
};

class Mango : public Fruit
{
public:
    void color()
    {
        cout << "Mango is Yellow." << endl;
    }
};

int main()
{
    Mango m;

    m.taste();
    m.color();

    return 0;
}