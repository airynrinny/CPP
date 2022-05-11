#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;

    bool isLeap = false;
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            isLeap = true;
        }
    }
    else if (year % 4 == 0) {
        isLeap = true;
    }

    //Alternate
    // bool isLeap = false;
    // if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
    //     isLeap = true;
    // }

    if (isLeap) 
        cout << year << " is a leap year" << endl;
    else 
        cout << year << " is not a leap year" << endl;

    return 0;
}