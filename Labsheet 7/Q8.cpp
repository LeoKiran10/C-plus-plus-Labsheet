// A program to find square root of a given integer using inline function
#include <iostream>
#include <math.h>

using namespace std;

inline float sqRoot(int n) {
    return pow(n, 0.5);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The square root of the given number is " << sqRoot(num) << endl;

    return 0;
}