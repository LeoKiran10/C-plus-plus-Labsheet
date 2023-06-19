// A clock program (Object Oriented Programming)
#include <iostream>

using namespace std;

// Creating parent/base Clock class
class Clock {
    protected:
        int hour = 0;
        int minute = 0;
        int second = 0;
    public:
        // setTime() method
        void setTime(int h, int m, int s) {
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
};

// Deriving WallClock class from base class Clock
class WallClock: public Clock {
    public:
        // showTime() method
        void showTime() {
            cout << hour << " hr " << minute << " min " << second << " sec" << endl;
        }
};

int main() {
    WallClock c1;
    WallClock c2;

    c2.setTime(12, 34, 56);

    c1.showTime();
    c2.showTime();
    return 0;
}