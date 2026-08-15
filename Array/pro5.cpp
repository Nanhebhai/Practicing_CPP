#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 25, 30, 45, 50, 65};
    int search;

    cout << "Enter element to search: ";
    cin >> search;

    bool found = false;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == search)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Element not found.";

    return 0;
}