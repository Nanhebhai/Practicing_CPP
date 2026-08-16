#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {45, 12, 67, 8, 34, 25};

    int minimum = arr[0];

    for(int i = 1; i < 6; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "Minimum Element = " << minimum;

    return 0;
}