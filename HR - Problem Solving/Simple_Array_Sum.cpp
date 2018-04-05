#include <iostream>
#include <vector>

// Using declarations better than namespace.
using std::cin;
using std::cout;
using std::vector;

// Array sum function.
int simpleArraySum(vector <int> array) {
    int s = 0;

    for(int i = 0; i < array.size(); ++i)
        s += array[i];

    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> array(n);

    for(int i = 0; i < n; ++i){
       cin >> array[i];
    }
    
    cout << simpleArraySum(array) << '\n';
    return 0;
}
