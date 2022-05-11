#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first postive integer: ";
    cin >> num1;
    cout << "Enter the seconf positive integer: ";
    cin >> num2;

    int quo = num1 / num2;
    int rem = num1 % num2;

    cout << "Quotient = " << quo << endl;
    cout << "Remainder = " << rem << endl;

    return 0;
}