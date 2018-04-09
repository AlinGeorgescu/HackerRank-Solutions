/**
 * Copyright 2018
 * Diagonal Difference 
 */
#include <iostream>
#include <vector>

// Using declarations better than namespace.
using std::cin;
using std::cout;
using std::vector;


int diagonalDifference(vector< vector<int> > a, int n) {
    /**
     * PD = primary diagonal
     * SD = secondary diagonal
     */ 
    int sumPD = 0, sumSD = 0;

    for (int i = 0; i < n; ++i) {
        sumPD += a[i][i];
        sumSD += a[i][n - i - 1];
    }

    // reuse of sumPD variable as the wanted difference
    sumPD = sumPD - sumSD;
    if (sumPD > 0)
        return sumPD;
    else
        return sumPD * (-1);
}

int main() {
    int n;
    cin >> n;
    // Matrix as vector of vectors.
    vector< vector<int> > a(n, vector<int>(n));

    // Reading the matrix.
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    cout << diagonalDifference(a, n) << '\n';
    return 0;
}
