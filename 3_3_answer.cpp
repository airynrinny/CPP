#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the integer to represent a month (1 - 12): ";
    cin >> month;

    switch (month) {
        case 2:
            cout << "This month has 28 or 29 days" << endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 days" << endl;
            break;
        default:
            cout << "This month has 30 days" << endl;
    }
    
    return 0;
}