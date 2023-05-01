#include <iostream>
using namespace std;

// determine leap year
int main() {
    int year = 0;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "leap year";
            } else
                cout << "not a leap year";
        } else
            cout << "leap year";
    } else 
        cout << "not a leap year";
    cout << "\n";
    return 0;
}