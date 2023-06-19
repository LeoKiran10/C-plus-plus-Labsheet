// A program to subtract two time objects
#include <iostream>

using namespace std;

class Time {
    private:
        int hour = 0;
        int minute = 0;
        int second = 0;
    public:
        // Default Constructor
        Time() {}

        // Parameterized Constructor
        Time(int h, int m, int s) {
            // Hour
            hour = h;

            // Minute
            if (m > 60) {
                hour += m / 60;
                m -= ((m / 60) * 60);
                minute = m;
            }
            else {
                minute = m;
            }

            // Second
            if (s > 60) {
                minute += s / 60;
                s -= ((s / 60) * 60);
                second = s;
            }
            else {
                second = s;
            }
        }

        // Overloading (+) operator
        Time operator -(Time obj) {
            Time temp((hour - obj.hour), (minute - obj.minute), (second - obj.second));
            return temp;
        }

        // showTime() function
        void showTime() {
            cout << ((hour < 0) ? -hour: hour) << " hr " << ((minute < 0) ? -minute : minute) << " min " << ((second < 0) ? -second : second) << " sec" << endl;
        }
};

int main() {
    // Creating objects
    Time t1(21, 75, 97);
    Time t2(24, 12, 125);
    Time t3;

    // Printing times of object 1 and 2
    t1.showTime();
    t2.showTime();

    // Adding two time objects
    t3 = t1 - t2;

    // Printing resulting time after addition
    t3.showTime();
    return 0;
}