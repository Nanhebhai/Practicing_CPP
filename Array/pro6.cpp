#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {45, 12, 78, 34, 90, 56};

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < 6; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}