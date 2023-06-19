// A program to convert inch into centimeter
#include <iostream>

using namespace std;

int main() {
    float inch, centimeter;
    cout << "Enter length in inch(in): ";
    cin >> inch;

    centimeter = inch * 2.54;

    cout << "The length in centimeter is " << centimeter << " cm" << endl;
    return 0;
}