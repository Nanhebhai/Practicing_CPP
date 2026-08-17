#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, -5, 8, -12, 20, -3};
    int positive = 0, negative = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] >= 0)
            positive++;
        else
            negative++;
    }

    cout << "Positive Numbers = " << positive << endl;
    cout << "Negative Numbers = " << negative << endl;

    return 0;
}