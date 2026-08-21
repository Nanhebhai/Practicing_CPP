#include <iostream> 
using namespace std; 
int main() { 
    int arr[] = {12, 45, 7, 89, 34, 67}; 
    int n = 6; 
    int largest = arr[0]; 
    int secondLargest = arr[0]; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] > largest) { 
            secondLargest = largest; 
            largest = arr[i]; 
        } 
            else if (arr[i] > secondLargest && arr[i] != largest) { 
                secondLargest = arr[i]; 
            } 
        } 
                cout << "Second Largest Element = " << secondLargest; 
                return 0; 
 }