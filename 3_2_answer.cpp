#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a letter: ";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << c << " is a lowercase letter";
    }
    else if (c >= 'A' && c <= 'Z') {
        cout << c << " is an uppercase letter";
    }
    else {
        cout << c << " is not a letter";
    }
    cout << endl;

    return 0;
}
