#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int hh, mm, ss;
    char input[11], format[3];
    cin >> input;
    sscanf(input,"%d:%d:%d%s",&hh,&mm,&ss,format);
    if (!strcmp(format,"PM") && hh!=12)
        hh += 12;
    if (!strcmp(format,"AM") && hh == 12)
        hh=0;
    
    cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ":" << setfill('0') << setw(2) << ss;

    return 0;
}