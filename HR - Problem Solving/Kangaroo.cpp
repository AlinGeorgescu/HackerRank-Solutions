/**
 * Copyright 2018
 * Kangaroo 
 */
#include <iostream>
#include <string>

// Using declarations better than namespace.
using std::cin;
using std::cout;
using std::string;

//  Cheack if they can land on the same location at the same time.
string kangaroo(int x1, int v1, int x2, int v2) {
    int DeltaX, DeltaV;
    
    if(v1 <= v2)
        return "NO";

    DeltaX = x1 - x2;
    DeltaV = v1 - v2;

    if (DeltaX < 0 )
        DeltaX *= -1;
    if (DeltaV < 0)
        DeltaV *= -1;

    if(DeltaX % DeltaV == 0)
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
