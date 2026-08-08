#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id;

public:
    void inputEmployee()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;
    }
};

class Developer : public Employee
{
private:
    string language;
    int experience;

public:
    void inputDeveloper()
    {
        cout << "Enter Programming Language: ";
        cin >> language;

        cout << "Enter Experience (years): ";
        cin >> experience;
    }

    void display()
    {
        cout << "\n--- Developer Details ---\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Language: " << language << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

int main()
{
    Developer d;

    d.inputEmployee();
    d.inputDeveloper();
    d.display();

    return 0;
}