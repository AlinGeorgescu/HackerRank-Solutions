/**
 * Copyright 2018
 * Birthday Chocolate
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int birthday(vector<int> s, int d, int m) {
    vector<int> sum(s.size() + 1);
    int count = 0;
    
    sum[0] = 0;
    for(int i = 0; i < s.size(); ++i) {
        sum[i + 1] = sum[i] + s[i];
    }

    for(int i = 0; i <= s.size() - m; ++i) {
        if( (sum[i + m] - sum[i]) == d ){
            ++count;
        }
    }

    return count;
}

int main() {
    int n, m, d;
    vector<int> s;

    cin >> n;
    s.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    cin >> d >> m;

    cout << birthday(s, d, m) << '\n';

    return 0;
}
