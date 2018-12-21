/**
 * Copyright 2018
 * Grading Students
 */
#include <iostream>

using std::cin;
using std::cout;

// Checking if the grade can be rounded.
void checkGrade(int grade) {
    if (grade < 38) {
        cout << grade << '\n';
        return;
    }
    else if ( (10 - grade % 10 < 3) && (10 - grade % 10 >= 0) ) {
        cout << (grade + 10) / 10 << "0\n";
        return;
    }
    else if ( (5 - grade % 10 < 3) && (5 - grade % 10 >= 0) ) {
        cout << grade / 10 << "5\n";
        return;
    }
    else
        cout << grade << '\n';
}

int main() {
    int n, grade;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> grade;
        checkGrade(grade);
    }

    return 0;
}
