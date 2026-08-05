#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    float basic;

public:
    void input()
    {
        cout << "Enter ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basic;
    }
};

class Salary : public Employee
{
public:
    void calculate()
    {
        float hra = basic * 0.20;
        float da = basic * 0.10;
        float gross = basic + hra + da;

        cout << "\nGross Salary = " << gross << endl;
    }
};

int main()
{
    Salary s;

    s.input();
    s.calculate();
}