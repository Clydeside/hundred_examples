#include <iostream>
using namespace std;

// counting factorial
int main() {
    unsigned int n = 0;
    unsigned long long fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i < n + 1; ++i) {
        fact *= i;
    }
    cout << "\nFactorial: " << fact << "\n";
    return 0;
}