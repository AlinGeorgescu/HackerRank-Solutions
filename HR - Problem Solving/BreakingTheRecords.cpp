/**
 * Copyright 2018
 * Breaking The Records
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

vector<int> breakingRecords(vector<int> scores) {
    int max = scores[0];
    int min = scores[0];
    int numMax = 0;
    int numMin = 0;

    for (int i = 1; i < scores.size(); ++i) {
        if (scores[i] > max) {
            max = scores[i];
            ++numMax;
        }

        if (scores[i] < min) {
            min = scores[i];
            ++numMin;
        }
    }

    scores.clear();
    scores[0] = numMax;
    scores[1] = numMin;

    return scores;
}

int main() {
    int n;
    vector<int> scores;

    cin >> n;
    scores.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    scores = breakingRecords(scores);
    cout << scores[0] << ' ' << scores[1] << '\n';

    return 0;
}
