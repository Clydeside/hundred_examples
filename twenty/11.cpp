#include <iostream>
#include <cmath>
using namespace std;

// Solving square equasion
/*
0 0 0
1 0 0
0 1 0
0 0 1
1 1 0
0 1 1
1 0 1
1 1 1
*/
int main() {
    int a = 0, b = 0, c = 0;
    double descriminant = 0;
    double result = 0;
    double x1 = 0, x2 = 0;

    descriminant = pow(b, 2) - 4 * a * c;
    if (descriminant < 0)
        cout << "Empty set";
    if (descriminant == 0)
        result = b / c;
    if (descriminant > 0) {
        x1 = b - sqrt(descriminant) / (-2 * a);
        x2 = b + sqrt(descriminant) / (-2 * a);
    }

    cout << "\nResult: " << result << "\n";
    return 0;
}