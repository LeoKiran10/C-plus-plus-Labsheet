// A program to read 1st, 3rd and 5th details of item from item.dat file and display
// Note: this program is dependent on the output of Q5
#include <iostream>
#include <fstream>

using namespace std;

// Creating Item class
class Item {
    private:
        int itemCode;
        float price;
    public:
        // getData() method
        void getData() {
            cout << "Enter item code: ";
            cin >> itemCode;
            cout << "Enter price: ";
            cin >> price;
        }

        // display() method
        void display() {
            cout << "|\t" << itemCode << "\t|\t" << price << "\t|" << endl;
        }
};

int main() {
    // Creating file object of fstream class
    fstream file;
    // Opening the file in in/read mode
    file.open("./item.dat", ios::in);

    // Creating array of items
    Item i[5];

    // Reading details of 1st, 3rd and 5th item from the file
    int j;
    cout << "\n|\tCode\t|\tPrice\t|" << endl;
    for (j = 0; j < 5; j++) {
        // Using seekg() method to extract details of odd items
        // Note: Not get confused between index and th position
        // i[0] => 1st item
        if (j % 2 == 0) {
            file.seekg((j * sizeof(i[j])), ios::beg);
            file.read((char *) &i[j], sizeof(i[j]));
            i[j].display();
        }
    }
    cout << "\nReading complete!" << endl;

    // Closing the file
    file.close();
    return 0;
}