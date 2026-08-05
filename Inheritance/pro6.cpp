#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void showStudent()
    {
        cout << "\nRoll No : " << roll;
        cout << "\nName    : " << name;
    }
};

class Result : public Student
{
private:
    float m1, m2, m3, total, percentage;

public:
    void getMarks()
    {
        cout << "Enter 3 Marks: ";
        cin >> m1 >> m2 >> m3;

        total = m1 + m2 + m3;
        percentage = total / 3;
    }

    void display()
    {
        showStudent();
        cout << "\nTotal      : " << total;
        cout << "\nPercentage : " << percentage << "%";
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();

    r.display();

    return 0;
}