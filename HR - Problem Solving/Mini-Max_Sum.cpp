#include <iostream>
#include <values.h> // MAXINT

using namespace std;

int main() {
    long x, min = MAXINT, max = -MAXINT;
    long long sum = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> x;
        sum += x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    cout << sum - max << " " << sum - min;

    return 0;
}