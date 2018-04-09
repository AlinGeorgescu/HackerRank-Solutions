/**
 * Copyright 2018
 * Divisible Sum Pairs
 */
#include <iostream>
#include <vector>

// Using declarations better than namespace.
using std::cin;
using std::cout;
using std::vector;

int divisibleSumPairs(int n, int k, vector <int> array) {
    int number = 0;

    for (int i = 0; i < array.size(); ++i) {
        for (int j = i + 1; j < array.size(); ++j) {
            if ( (array[i] + array[j]) % k == 0 )
                ++number;
        }
    }

    return number;
}

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> array(n);

    for(int i = 0; i < n; ++i){
       cin >> array[i];
    }

    cout << divisibleSumPairs(n, k, array) << '\n';

    return 0;
}
