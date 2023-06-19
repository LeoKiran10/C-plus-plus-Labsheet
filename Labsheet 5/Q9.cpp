// A program to find cube of the given number using inline function
#include <iostream>

using namespace std;

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The cube of given number " << num << " is " << cube(num) << endl;
    return 0;
}