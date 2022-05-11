#include <iostream>
using namespace std;

int main() {
    double p, len, bre;

    cout << "Enter the perimeter of a rectangle: ";
    cin >> p;

    bre = p / 5;
    len = 1.5 * bre;

    cout << "Length of the rectangle = " << len << " units" << endl;
    cout << "Breadth of the rectangle = " << bre << " units" << endl;

    return 0;
}