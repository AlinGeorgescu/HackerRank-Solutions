/**
 * Copyright 2018
 * Arrays DS
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
    int n;
    vector<int> array;
    
    cin >> n;
    array.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        cout << array[i] << ' ';
    }
    cout << '\n';

    return 0;
}
