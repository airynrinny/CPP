#include <iostream>
using namespace std;

int main() {
    struct Point {
        double x;
        double y;
    };

    Point a, b, c;

    cout << "Enter x- and y-coordinates of point A: ";
    cin >> a.x >> a.y;
    cout << "Enter x- and y-coordinates of point B: ";
    cin >> b.x >> b.y;
    cout << "Enter x- and y-coordinates of point C: ";
    cin >> c.x >> c.y;

    double area = abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) / 2;

    cout << "Area of triangle ABC = " << area << endl;

    return 0;
}