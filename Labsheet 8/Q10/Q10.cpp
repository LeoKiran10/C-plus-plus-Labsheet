// A program to read 10 numbers from keyboard and write them in odd.dat and even.dat files accordingly
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int num;
    
    // Creating and opening (write mode) odd as object of fstream class
    fstream odd;
    odd.open("./odd.dat", ios::out);
    
    // Creating and opening (write mode) even as object of fstream class
    fstream even;
    even.open("./even.dat", ios::out);

    // Writing data to respective files
    int i;
    for (i = 1; i <= 10; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num % 2 == 0) {
            even.write((char *) &num, sizeof(num));
        }
        else {
            odd.write((char *) &num, sizeof(num));
        }
    }
    cout << "Process complete!" << endl;
    
    // Closing the files
    even.close();
    odd.close();
    return 0;
}