// A program to find total word count of the given text
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char str[100];
    cout << "Write something: ";
    scanf("%[^\n]", str);

    // Counting for spaces in the text
    int count = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            count++;
    }

    cout << "The total word count of the given text is " << count + 1 << endl;
    return 0;
}