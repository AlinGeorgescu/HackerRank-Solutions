/**
 * Copyright 2018
 * Solve Me First 
 */
#include <iostream>

// Using declarations better than namespace.
using std::cin;
using std::cout;

// Sum of 2 integers.
int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;
    cout << solveMeFirst(num1, num2);

    return 0;
}
