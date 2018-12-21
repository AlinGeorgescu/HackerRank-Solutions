/**
 * Copyright 2018
 * Birthday Cake Candles
 */
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

// Getting the number of candles the niece can blow.
unsigned int birthdayCakeCandles(unsigned int n, vector<unsigned int> array) {
    unsigned int maxHeight = 0, number;
    
    for (int i = 0; i < n; ++i) {
        if (array[i] > maxHeight) {
            maxHeight = array[i];
            number = 1;
        } else {
            if (array[i] == maxHeight) {
                ++number;
            }
        }
    }
    
    return number;
}

int main() {
    unsigned int n;
    cin >> n;
    vector<unsigned int> array(n);

    for (unsigned int i = 0; i < n; ++i)
        cin >> array[i];

    cout << birthdayCakeCandles(n, array) << '\n';
    
    return 0;
}
