#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2, xm, ym;

    cout << "Enter the coordinates of the first endpoint: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second endpoint: ";
    cin >> x2 >> y2;

    xm = (x1 + x2) / 2;
    ym = (y1 + y2) / 2;

    cout << "The coordinates of the midpoint are (" << xm << ", " << ym << ")" << endl;

    return 0;
}