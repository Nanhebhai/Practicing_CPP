#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "Student is studying." << endl;
    }
};

class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teacher is teaching." << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    s.display();
    s.study();

    t.display();
    t.teach();

    return 0;
}