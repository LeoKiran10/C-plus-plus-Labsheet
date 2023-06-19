// A program to convert feet into meter
#include <iostream>

using namespace std;

int main() {
    float feet, meter;

    cout << "Enter length in feet(ft): ";
    cin >> feet;

    meter = feet * 0.3048;
    cout << "The length in meters is " << meter << "m" << endl;
    return 0;
}