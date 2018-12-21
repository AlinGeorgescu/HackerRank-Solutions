/**
 * Copyright 2018
 * Apple and Orange
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

// Count how any fruits fall on the house.
void countApplesAndOranges(int s, int t, int a, int b,
                           vector<int> apples,
                           vector<int> oranges) {
    int numberA = 0, numberO = 0;

    for (int i = 0; i < apples.size(); ++i) {
        if (a + apples[i] >= s && a + apples[i] <= t)
            ++numberA;
    }
    for (int i = 0; i < oranges.size(); ++i) {
        if (b + oranges[i] >= s && b + oranges[i] <= t)
            ++numberO;
    }

    cout << numberA << '\n' << numberO << '\n';
}

int main() {
    int s, t, a, b, m, n;

    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    vector<int> apples(m), oranges(n);

    for (int i = 0; i < m; ++i)
        cin >> apples[i];
    for (int i = 0; i < n; ++i)
        cin >> oranges[i];

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}
