#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r(12, 8);

    r.area();

    return 0;
}