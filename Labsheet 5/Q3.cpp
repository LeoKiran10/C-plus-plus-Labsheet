// A program to compute subtraction of two complex number using operator overloading
#include <iostream>

using namespace std;

class Complex {
    private:
        int real;
        int imaginary;
    public:
        // Default Constructor
        Complex() {};

        // Parameterized Constructor
        Complex(int r, int i) {
            real = r;
            imaginary = i;
        }

        // Overloading (-) operator
        Complex operator -(Complex obj) {
            Complex temp;
            temp.real = real - obj.real;
            temp.imaginary = imaginary - obj.imaginary;
            return temp;
        }

        // showData() function
        void showData() {
            cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
        }
};

int main() {
    // Creating objects
    Complex n1(7, 14);
    Complex n2(4, 6);
    Complex n3;

    // Printing complex number of object 1 and 2
    n1.showData();
    n2.showData();

    // Subtracting two complex numbers
    n3 = n1 - n2;

    // Printing resulting complex number after subtraction
    n3.showData();

    return 0;
}