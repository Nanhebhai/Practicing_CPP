#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Calculating area..." << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Circle Area = "
             << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Rectangle Area = "
             << length * breadth << endl;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void area() override
    {
        cout << "Triangle Area = "
             << 0.5 * base * height << endl;
    }
};

int main()
{
    Shape *ptr;

    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 6);

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    ptr = &t;
    ptr->area();

    return 0;
}