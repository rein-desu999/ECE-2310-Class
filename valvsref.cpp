#include <iostream>
using namespace std;

void incrementByReference(int &x) {
    x = x + 10; // Modifies the original variable
    cout << "Inside function (pass by reference): " << x << endl;
}

void incrementByValue(int x) {
    x = x + 10; // Modifies the copy, not the original
    cout << "Inside function (pass by value): " << x << endl;
}

int main() {
    int num = 5;
    incrementByValue(num); // Passes a copy of num
    cout << "Outside function (original variable): " << num << endl;
    int num1 = 5;
    incrementByReference(num1); // Passes the actual variable
    cout << "Outside function (original variable): " << num1 << endl;
    return 0;
}
