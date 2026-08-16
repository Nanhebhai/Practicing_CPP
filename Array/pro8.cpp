#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / 5;

    cout << "Average = " << average;

    return 0;
}