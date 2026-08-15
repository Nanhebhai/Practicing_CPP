#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {12, 7, 9, 20, 15, 8};
    int even = 0, odd = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Elements = " << even << endl;
    cout << "Odd Elements = " << odd << endl;

    return 0;
}