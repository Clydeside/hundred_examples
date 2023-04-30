#include <iostream>
using namespace std;

// find max value of three numbers
int main() {
    int a = 0, b = 0, c = 0, max = -99999;

    cout << "Enter three integer numbers: ";
    cin >> a >> b >> c;
    if ((a >= b) && (a >= c))
        max = a;
    if ((b >= a) && (b >= c))
        max = b;
    if ((c >= a) && (c >= b))
        max = c;
    cout << "\n The max is: " << max << "\n";
    return 0;
}