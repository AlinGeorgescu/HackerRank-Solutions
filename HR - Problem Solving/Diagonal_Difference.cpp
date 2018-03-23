#include <bits/stdc++.h>

using namespace std;

/*
 * Completed the aVeryBigSum function below.
 */
int diagonalDifference(vector < vector<int> > a, int n) {
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
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a, n);
    cout << result << endl;
    return 0;
}
