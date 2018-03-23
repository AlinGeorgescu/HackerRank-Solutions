#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> arr) {
    double nrPos = 0, nrNeg = 0, nrZero = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0)
            ++nrPos;
        else if(arr[i] < 0)
            ++nrNeg;
        else
            ++nrZero;
    }
    cout << fixed;
    cout << setprecision(6);
    cout << nrPos / n << '\n' << nrNeg / n << '\n' << nrZero / n;
}

int main() {
    int n, aux;
    vector<int> arr;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> aux;
        arr.push_back(aux);
    }
    plusMinus(arr);

    return 0;
}