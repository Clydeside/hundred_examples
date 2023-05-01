#include <iostream>
using namespace std;

// Product table
int main() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            printf("%2d ", i * j);
        }
        cout << "\n";
    }
    return 0;
}