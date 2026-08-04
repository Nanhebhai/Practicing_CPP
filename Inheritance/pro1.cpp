#include <iostream>
using namespace std;

class Teacher
{
public:
    void teach()
    {
        cout << "Teacher is teaching." << endl;
    }
};

class MathTeacher : public Teacher
{
public:
    void solveMath()
    {
        cout << "Math Teacher is solving equations." << endl;
    }
};

int main()
{
    MathTeacher t;

    t.teach();
    t.solveMath();

    return 0;
}