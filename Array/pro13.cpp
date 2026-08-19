#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int reverseArr[5];

    for(int i = 0; i < 5; i++)
    {
        reverseArr[i] = arr[4 - i];
    }

    cout << "Reverse Array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << reverseArr[i] << " ";
    }

    return 0;
}