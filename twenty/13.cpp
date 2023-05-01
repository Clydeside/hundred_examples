#include <iostream>
#include <vector>
using namespace std;

// count sum of natural numbers
int main() {
    int sum = 0, n = 0;
    cout << "Enter n number: ";
    cin >> n;
    for (int i = 1; i < n + 1; ++i) {
        sum += i;
    } 
    cout << "\nSum of numbers: " << sum << "\n";
    return 0;
}