#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPersonData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Teacher : public Person
{
protected:
    string subject;

public:
    void getTeacherData()
    {
        cout << "Enter Subject: ";
        cin >> subject;
    }
};

class Professor : public Teacher
{
private:
    int publications;

public:
    void getProfessorData()
    {
        cout << "Enter Number of Publications: ";
        cin >> publications;
    }

    void display()
    {
        cout << "\n--- Professor Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Publications: " << publications << endl;
    }
};

int main()
{
    Professor p;

    p.getPersonData();
    p.getTeacherData();
    p.getProfessorData();
    p.display();

    return 0;
}