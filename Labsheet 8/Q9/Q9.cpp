// A program to write content of one file to another
// Note: source.dat file should exist first to read content from
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Opening (read mode) source as object of fstream class
    fstream source;
    source.open("./source.dat", ios::in);

    // Creating and opening (write mode) destination as object of fstream class
    fstream destination;
    destination.open("./destination.dat", ios::out);

    // Writing content of source file to destination file
    // Creating a string
    string content;
    while(getline(source, content)) {
        destination << content << endl;
    }
    cout << "Process complete!" << endl;

    // Closing the files
    source.close();
    destination.close();
    return 0;
}