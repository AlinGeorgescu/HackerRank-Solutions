#include <iostream>
#include <string>

// Using declarations better than namespace.
using std::cin;
using std::cout;
using std::string;

//  Cheack if they can land on the same location at the same time.
string kangaroo(int x1, int v1, int x2, int v2) {
    // x1 < x2
    if (v1 < v2)
        return "NO";

    while (x1 < x2) {
        x1 += v1;
        x2 += v2;
    }
    
    if (x1 == x2)
        return "YES";
    else
        return "NO";
}

int main() {
    int x1, v1;
    int x2, v2;

    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << "\n";

    return 0;
}