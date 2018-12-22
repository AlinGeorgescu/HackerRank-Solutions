/**
 * Copyright 2018
 * Divisible Sum Pairs
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int divisibleSumPairs(int n, int k, vector<int> array) {
    int number;
    vector<int> freq(k, 0);

    for(int i = 0; i < n; ++i) {
        ++freq[ array[i] % k ];
    }

    number = ( freq[0] * (freq[0] - 1) ) / 2;
    for(int i = 1; i <= k / 2  && i != k - i; ++i) {
        number += freq[i] * freq[k - i];
    }

    if(k % 2 == 0) {
        number += ( freq[k / 2] * (freq[k / 2] - 1) ) / 2;
    }

    return number;
}

int main() {
    int n, k;
    vector<int> array;

    cin >> n >> k;
    array.resize(n);

    for(int i = 0; i < n; ++i){
       cin >> array[i];
    }

    cout << divisibleSumPairs(n, k, array) << '\n';

    return 0;
}
