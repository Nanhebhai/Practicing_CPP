#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, -5, 20, -8, 15, 7};
    int sum = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    cout << "Sum of Positive Elements = " << sum;

    return 0;
}