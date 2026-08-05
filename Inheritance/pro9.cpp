#include <iostream>
using namespace std;

class Shape
{
protected:
    int length, width;

public:
    void input()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "\nArea = " << length * width;
    }

    void perimeter()
    {
        cout << "\nPerimeter = " << 2 * (length + width);
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.area();
    r.perimeter();
}