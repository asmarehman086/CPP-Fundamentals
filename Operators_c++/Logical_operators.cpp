#include <iostream>
using namespace std;

int main() {
    bool x = true;
    bool y = false;

    cout << "x && y = " << (x && y) << endl; // Logical AND operator
    cout << "x || y = " << (x || y) << endl; // Logical OR operator
    cout << "!x = " << (!x) << endl; // Logical NOT operator

    return 0;
}