// A program to find square of given number using inline function
#include <iostream>

using namespace std;

inline int square(int num) {
    return num * num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The square of given number " << num << " is " << square(num) << endl;
    return 0;
}