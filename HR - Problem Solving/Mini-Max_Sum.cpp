/**
 * Copyright 2018
 * Mini-Max Sum
 */
#include <iostream>

// Using declarations better than namespace.
using std::cin;
using std::cout;

int main() {
    long x, min = 2147483647, max = -2147483647;
    long long sum = 0;

    /**
     * Read all elements and calculate their sum, the smallest and largest
     * element.
     */
    for (int i = 0; i < 5; ++i) {
        cin >> x;

        sum += x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    /**
     * Smallest sum is the total sum - largest element.
     * Largest sum is the total sum - smallest element.
     */
    cout << sum - max << " " << sum - min << '\n';
    return 0;
}
