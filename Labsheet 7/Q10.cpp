// A program to find volume of a rectangular box using inline function
#include <iostream>

using namespace std;

inline float volume(float l, float b, float h) {
    return (l * b * h);
}

int main() {
    float length, breadth, height;
    
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "Enter height: ";
    cin >> height;

    cout << "The volume of the given rectangular box is " << volume(length, breadth, height) << " cube units" << endl;
    return 0;
}