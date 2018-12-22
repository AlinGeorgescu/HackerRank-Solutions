#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int gcdFunc(int a, int b) {
    while(b) {
        b ^= a ^= b ^= a %= b;
    }

    return a;
}

int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    int lcm = a[0];        // LCM for first set
    int gcd = b[0];        // GCD for second set

    // LCM of an array
    for (int i = 1; i < a.size(); ++i) {
        lcm = (lcm * a[i]) / gcdFunc(lcm, a[i]);
    }

    // GCD of an array
    for (int i = 1; i < b.size(); ++i) {
        gcd = gcdFunc(gcd, b[i]);
    }

    if (lcm > gcd) {
        return 0;
    }

    for (int i = 1; i * lcm <= gcd; ++i) {
        if (gcd % (i * lcm) == 0) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    int n, m;
    vector<int> a, b;

    cin >> n >> m;

    a.resize(n);
    b.resize(m);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    cout << getTotalX(a, b) << '\n';

    return 0;
}
