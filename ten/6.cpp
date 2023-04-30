#include <iostream>
using namespace std;

// swap
int main() {
    int x = 0, y = 0;
    cout << "Please, enter first number: ";
    cin >> x;
    cout << "\nPlease, enter second number: ";
    cin >> y;
    cout << "Your numbers: " << x << " and " << y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "\nSwapped numbers: " << x << " and " << y << "\n";
    return 0;
}