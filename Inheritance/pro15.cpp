#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : virtual public Person
{
};

class Employee : virtual public Person
{
};

class Intern : public Student, public Employee
{
public:
    void display()
    {
        cout << "Intern Name: " << name << endl;
    }
};

int main()
{
    Intern i;

    i.getName();
    i.display();

    return 0;
}