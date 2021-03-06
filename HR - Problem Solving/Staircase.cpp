/**
 * Copyright 2018
 * Staircase 
 */
#include <iostream>

using std::cin;
using std::cout;

// Printing the staircase.
void staircase(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j < n - i - 1)
                cout << ' ';
            else
                cout << '#';
        }
        cout << '\n';
    }
}

int main() {
    int n;

    cin >> n;
    staircase(n);

    return 0;
}
