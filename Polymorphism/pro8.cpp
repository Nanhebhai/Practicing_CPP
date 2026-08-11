#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary() = 0;

    virtual void display()
    {
        cout << "Employee" << endl;
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee
{
private:
    double monthlySalary;

public:
    FullTimeEmployee(double salary)
    {
        monthlySalary = salary;
    }

    double calculateSalary() override
    {
        return monthlySalary;
    }

    void display() override
    {
        cout << "Full Time Employee" << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee
{
private:
    double hours;
    double rate;

public:
    PartTimeEmployee(double h, double r)
    {
        hours = h;
        rate = r;
    }

    double calculateSalary() override
    {
        return hours * rate;
    }

    void display() override
    {
        cout << "Part Time Employee" << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }
};

class Intern : public Employee
{
private:
    double stipend;

public:
    Intern(double s)
    {
        stipend = s;
    }

    double calculateSalary() override
    {
        return stipend;
    }

    void display() override
    {
        cout << "Intern" << endl;
        cout << "Stipend: " << calculateSalary() << endl;
    }
};

int main()
{
    Employee* employees[3];

    employees[0] = new FullTimeEmployee(50000);
    employees[1] = new PartTimeEmployee(80, 300);
    employees[2] = new Intern(15000);

    for(int i = 0; i < 3; i++)
    {
        employees[i]->display();
        cout << endl;
    }

    for(int i = 0; i < 3; i++)
    {
        delete employees[i];
    }

    return 0;
}