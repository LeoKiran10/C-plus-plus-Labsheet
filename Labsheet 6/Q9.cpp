// A program to find area of a rectangle using inline function
#include <iostream>

using namespace std;

inline int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;

    cout << "The area of the given rectangle is " << area(length, breadth) << endl;
    return 0;
}