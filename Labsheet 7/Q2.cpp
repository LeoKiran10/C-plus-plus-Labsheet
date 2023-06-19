// A program to make a parent class Shape and derive two child classes Rectangle and Triangle with their proper properties and methods
#include <iostream>
#include <math.h>

using namespace std;

// Abstract class
class Shape {
    protected:
        float area;
    public:
        // Parameterized constructor for Rectangle
        Shape(float l, float b) {
            area = l * b;
        }

        // Parameterized constructor for Triangle
        Shape(float a, float b, float c) {
            // Semi-Perimeter
            float s = (a + b + c) / 2;
            area = pow((s * (s - a) * (s - b) * (s - c)), 0.5);
        }

        // Pure virtual function
        virtual void showArea() = 0;
};

// Rectangle class
class Rectangle:public Shape {
    private:
        float length;
        float breadth;
    public:
        Rectangle(float l, float b):Shape(l, b) {}

        void showArea() {
            cout << "The area of the given rectangle is " << area << endl;
        }
};

// Triangle class
class Triangle:public Shape {
    private:
        float sideA;
        float sideB;
        float sideC;
    public:
        Triangle(float a, float b, float c):Shape(a, b, c) {}

        void showArea() {
            cout << "The area of the given triangle is " << area << endl;
        }
};

int main() {
    // User input section
    float length, breadth, a, b, c;
    
    cout << "For Rectangle" << endl;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;

    cout << "\nFor Triangle" << endl;
    cout << "Enter length of side a: ";
    cin >> a;
    cout << "Enter length of side b: ";
    cin >> b;
    cout << "Enter length of side c: ";
    cin >> c;

    cout << "\nResults:" << endl;

    // Pointer to object
    Shape *s;
    // Creating objects
    Rectangle r(length, breadth);
    Triangle t(a, b, c);

    s = &r;
    s -> showArea();

    s = &t;
    s -> showArea();
    return 0;
}