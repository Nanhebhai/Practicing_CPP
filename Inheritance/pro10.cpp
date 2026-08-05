#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void input()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Voter : public Person
{
public:
    void check()
    {
        cout << "\nName : " << name;

        if(age >= 18)
            cout << "\nEligible to Vote";
        else
            cout << "\nNot Eligible to Vote";
    }
};

int main()
{
    Voter v;

    v.input();
    v.check();
}