// A program to read details (eID, name, salary) of employees from keyboard and write them into a file
#include <iostream>
#include <fstream>

using namespace std;

// Creating Employee class
class Employee {
    private:
        int eID;
        char name[40];
        float salary;
    public:
        // setData() method
        void setData() {
            cout << "Employee ID: ";
            cin >> eID;
            cout << "Name: ";
            cin.ignore();
            cin.getline(name, 40);
            cout << "Salary: ";
            cin >> salary;
        }

        // display() method
        void display() {
            cout << "|\t" << eID << "\t|\t" << name << "\t|\t" << salary << "\t|" << endl;
        }
};

int main() {
    // Creating file object of fstream class
    fstream file;
    // Creating array of objects of Employee class
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee e[n];

    // Opening file in out/write mode
    file.open("./employee.dat", ios::out);

    // Writing details to the file
    int i;
    for (i = 0; i < n; i++) {
        cout << "\nEnter details of employee " << i + 1 << endl;
        e[i].setData();
        file.write((char *) &e[i], sizeof(e[i]));
    }
    cout << "\nWriting Complete!" << endl;

    // Closing the file
    file.close();

    // Opening file in in/read mode
    file.open("./employee.dat", ios::in);

    // Reading details from the file
    cout << "\nDetails of employees" << endl;
    cout << "|\tE.ID.\t|\tName\t|\tSalary\t|" << endl;
    for (i = 0; i < n; i++) {
        file.read((char *) &e[i], sizeof(e[i]));
        e[i].display();
    }
    cout << "\nReading Complete!" << endl;

    // Closing the file
    file.close();
    
    return 0;
}