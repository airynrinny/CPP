#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, dist;

    cout << "Enter the coordinates of the first point: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the seconf point: ";
    cin >> x2 >> y2;

    dist = sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2));

    cout << setprecision(2) << fixed;
    cout << "The distance between the two points is " << dist << " unit(s)" << endl;

    return 0;
}