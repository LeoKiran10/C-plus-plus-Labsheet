// A program to write details of items into a file using fstream
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
    
    // Creating array of items
    int n;
    cout << "Enter no of items: ";
    cin >> n;
    Item i[n];

    // Opening the file in out/write mode
    file.open("./item.dat", ios::out);

    // Writing details to the file
    int j;
    for (j = 0; j < n; j++) {
        cout << "\nEnter details of item " << j + 1 << endl;
        i[j].getData();
        file.write((char *) &i[j], sizeof(i[j]));
    }
    cout << "\nWriting complete!" << endl;

    // Closing the file
    file.close();

    // Again, opening the file in in/read mode
    file.open("./item.dat", ios::in);

    // Reading details from the file
    cout << "\n|\tCode\t|\tPrice\t|" << endl;
    for (j = 0; j < n; j++) {
        file.read((char *) &i[j], sizeof(i[j]));
        i[j].display();
    }
    cout << "\nReading complete!" << endl;

    // Closing the file
    file.close();
    return 0;
}