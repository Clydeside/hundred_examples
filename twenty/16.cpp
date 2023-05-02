#include <iostream>
using namespace std;

// Fibonacci sequence
int main() {
    int n1 = 1, n2 = 2;
    int n = 5;
    int prev = 1;
    unsigned long long fib = 1;
    for (int i = 1; i < n + 1; ++i) {
        int cur = fib;
        fib = prev + cur;
        prev = cur;
    }
    cout << "Fib sequence: " << fib << "\n";

    return 0;
}