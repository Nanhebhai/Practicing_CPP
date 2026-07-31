#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper Half
    for (int i = 1; i <= n; i++) {

        // Left Stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Right Stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower Half
    for (int i = n - 1; i >= 1; i--) {

        // Left Stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Right Stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}