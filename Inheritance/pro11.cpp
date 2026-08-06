#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }
};

class Manager : public Employee
{
    float salary;

public:
    Manager(string n, int i, float s) : Employee(n, i)
    {
        salary = s;
    }

    void display()
    {
        cout << "\nEmployee Name : " << name;
        cout << "\nEmployee ID   : " << id;
        cout << "\nSalary        : " << salary << endl;
    }
};

int main()
{
    Manager m("Rahul", 101, 55000);
    m.display();

    return 0;
}