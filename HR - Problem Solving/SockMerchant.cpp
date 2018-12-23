#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int sockMerchant(vector<int> arr) {
    int count = 0;
    vector<int> freq(101, 0);

    for (int x : arr) {
        ++freq[x];
    }

    for (int x : freq) {
        if (x / 2) {
            count += x / 2;
        }
    }

    return count;
}

int main() {
    int n;
    vector<int> arr;

    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << sockMerchant(arr) << '\n';

    return 0;
}
