// A program to find total no of objects in a file
#include <iostream>
#include <fstream>

using namespace std;

// Creating Student class
class Student {
    private:
        char name[40];
        int roll;
        char address[40];
    public:
        // getData() method
        void getData() {
            cout << "Name: ";
            cin.ignore();
            cin.getline(name, 40);
            cout << "Address: ";
            cin.getline(address, 40);
            cout << "Roll No.: ";
            cin >> roll;
        }

        // showData() method
        void showData() {
            cout << "|\t" << name << "\t|\t" << address << "\t|\t" << roll << "\t|" << endl;
        }
};

int main() {
    // Creating file object of fstream class
    fstream file;
    // Opening file in out/write mode
    file.open("./student.dat", ios::out);

    // Creating array of student
    int n;
    cout << "Enter no of students: ";
    cin >> n;
    // Created one extra element for future purpose
    Student s[n + 1];

    // Writing details to the file
    int i;
    for (i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].getData();
        file.write((char *) &s[i], sizeof(s[i]));
    }
    cout << "\nWriting complete!" << endl;
    
    // Closing the file
    file.close();

    // Opening the file in in/read mode
    file.open("./student.dat", ios::in);
    
    // Reading data and counting the no. of objects in the file
    int count = 0;
    cout << "\nDetails of students" << endl;
    cout << "|\tName\t|\tAddress\t|\tRoll No.\t|" << endl;
    while(file.read((char *) &s[n], sizeof(s[n]))) {
        s[n].showData();
        count++;
    }
    
    // Closing the file
    file.close();

    // Displaying total no. of objects in the file
    cout << "\nTotal no of objects in student.dat file is " << count << endl;
    return 0;
}