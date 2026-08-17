#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout << "Elements at even indexes: ";

    for(int i = 0; i < 6; i += 2)
    {
        cout << arr[i] << " ";
    }

    return 0;
}