#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cel, fah;

    cout << "Enter the temperature in fahrenheit: ";
    cin >> fah;

    cel = (fah - 32) * 5 / 9;

    cout << setprecision(2) << fixed;
    cout << "The temperature in celsius is " << cel << " degrees" << endl;

    return 0;
}