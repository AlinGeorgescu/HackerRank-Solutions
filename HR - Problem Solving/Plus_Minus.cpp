#include <iostream>
#include <vector>
#include <iomanip> // Precision

// Using declarations better than namespace.
using std::cin;
using std::cout;
using std::vector;
using std::fixed;
using std::setprecision;

// Solving function
void plusMinus(vector<int> array) {
    double nrPos = 0, nrNeg = 0, nrZero = 0;
    int n = array.size();

    // Calcualting number of negative / positive numbers.
    for (int i = 0; i < n; ++i) {
        if (array[i] > 0)
            ++nrPos;
        else if (array[i] < 0)
            ++nrNeg;
        else
            ++nrZero;
    }

    //  The fractions are equal to cathegory number / total number.
    cout << fixed;
    cout << setprecision(6);
    cout << nrPos / n << '\n' << nrNeg / n << '\n' << nrZero / n << '\n';
}

int main() {
    int n, aux;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; ++i) {
        cin >> aux;
        array[i] = aux;
    }  
    plusMinus(array);

    return 0;
}
