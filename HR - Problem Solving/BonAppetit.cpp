#include <iostream>
#include <vector>
#include <numeric>

using std::cin;
using std::cout;
using std::vector;
using std::accumulate;

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = accumulate(bill.begin(), bill.end(), 0);
    sum = (sum - bill[k]) / 2;

    if (sum == b) {
        cout << "Bon Appetit\n";
    } else {
        cout << b - sum << '\n';
    }
}

int main() {
    int n, k, b;
    vector<int> bill;

    cin >> n >> k;
    bill.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> bill[i];
    }

    cin >> b;

    bonAppetit(bill, k, b);

    return 0;
}
