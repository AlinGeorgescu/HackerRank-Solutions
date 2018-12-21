/**
 * Copyright 2018
 * A Very Big Sum 
 */
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

long aVeryBigSum(unsigned int n, vector<long> array) {
    long sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    
    return sum;
}

int main() {
    unsigned int n;
    vector<long> array;
    
    cin >> n;
    array.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    cout << aVeryBigSum(n, array) << '\n';
    
    return 0;
}
