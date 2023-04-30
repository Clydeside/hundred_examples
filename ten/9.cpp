#include <iostream>
using namespace std;

// determine even/odd number
int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "\n ";
    if (number % 2 == 0) 
        cout << number << " is even number";
    else
        cout << number << " is odd number";
    cout << "\n";
    return 0;
}