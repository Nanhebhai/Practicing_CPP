#include <iostream>
using namespace std;

class Book
{
public:
    void read()
    {
        cout << "Reading Book..." << endl;
    }
};

class LibraryBook : public Book
{
public:
    void issue()
    {
        cout << "Book Issued." << endl;
    }
};

int main()
{
    LibraryBook b;

    b.read();
    b.issue();

    return 0;
}