#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int migratoryBirds(vector<int> arr) {
    vector<int> freq(6, 0);
    int maxFreq = 0;
    int mostFreqElem = 0;

    for (int x : arr) {
        ++freq[x];

        if (freq[x] > maxFreq) {
            maxFreq = freq[x];
            mostFreqElem = x;
        } else {
            if (freq[x] == maxFreq && mostFreqElem > x) {
                mostFreqElem = x;
            }
        }
    }

    return mostFreqElem;
}

int main(){
    int n;
    vector<int> arr;

    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout <<  migratoryBirds(arr) << '\n';

    return 0;
}
