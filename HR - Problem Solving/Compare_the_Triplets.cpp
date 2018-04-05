#include <iostream>

// Using declarations better than namespace.
using std::cin;
using std::cout;

int main() {
    unsigned short a[3], b, i, aScore = 0, bScore = 0;

    // Read ratings for Alice's challenge.
    for (i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < 3; ++i) {
        // Read one of Bob's ratings each time.
        cin >> b;
        // Compare Bob's ratings with Alice's.
        if (a[i] > b)
            ++aScore;
        else if (a[i] < b)
            ++bScore;
    }

    // Print the 2 scores.
    cout << aScore << " " << bScore;
    return 0;
}
