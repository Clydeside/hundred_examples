#include <iostream>
using namespace std;

// div and rem
int main() {
    int number = 1, divisor = 1;
    cout << "Please, enter number: ";
    cin >> number;
    cout << "\nPlease, enter divisor: ";
    cin >> divisor;
    cout << "\nDiv: " << number / divisor << "\n";
    cout << "\nRem: " << number % divisor << "\n";
    return 0;
}