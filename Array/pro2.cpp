#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {25, 10, 45, 30, 15};
    int largest = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest Element = " << largest;

    return 0;
}