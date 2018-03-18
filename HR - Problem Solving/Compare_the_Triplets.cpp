#include <iostream>

using namespace std;

int main() {
    // memory efficient use of variables
    unsigned short a[3], b, i, aScore = 0, bScore = 0;

    for (i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < 3; ++i) {
        cin >> b;
        if (a[i] > b)
            ++aScore;
        else if (a[i] < b)
            ++bScore;
    }

    cout << aScore << " " << bScore;

    return 0;
}