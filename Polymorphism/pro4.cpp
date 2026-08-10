#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "General Employee Salary" << endl;
    }
};

class Developer : public Employee
{
public:
    void calculateSalary() override
    {
        int salary = 50000;
        int bonus = 10000;

        cout << "Developer Salary: "
             << salary + bonus << endl;
    }
};

class Manager : public Employee
{
public:
    void calculateSalary() override
    {
        int salary = 70000;
        int bonus = 20000;

        cout << "Manager Salary: "
             << salary + bonus << endl;
    }
};

int main()
{
    Employee *ptr;

    Developer d;
    Manager m;

    ptr = &d;
    ptr->calculateSalary();

    ptr = &m;
    ptr->calculateSalary();

    return 0;
}