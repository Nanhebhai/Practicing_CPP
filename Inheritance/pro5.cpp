#include <iostream>
using namespace std;

class Laptop
{
public:
    void powerOn()
    {
        cout << "Laptop Started." << endl;
    }
};

class GamingLaptop : public Laptop
{
public:
    void playGame()
    {
        cout << "Playing High-End Games." << endl;
    }
};

int main()
{
    GamingLaptop g;

    g.powerOn();
    g.playGame();

    return 0;
}