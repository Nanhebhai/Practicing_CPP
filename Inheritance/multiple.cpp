#include <iostream>
using namespace std;

class Father
{
public:
    void showFather()
    {
        cout << "Father Class" << endl;
    }
};

class Mother
{
public:
    void showMother()
    {
        cout << "Mother Class" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "Child Class" << endl;
    }
};

int main()
{
    Child c;

    c.showFather();
    c.showMother();
    c.showChild();

    return 0;
}