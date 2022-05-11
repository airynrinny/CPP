#include <iostream>
#include <cmath>
using namespace std;

double baseArea     (double);
double lateralArea  (double, double);
double totalArea    (double, double);

int main() {
    double r, h;
    cout << "Enter radius of cylinder: ";
    cin >> r;
    cout << "Enter height of cylinder: ";
    cin >> h;

    double base     = baseArea(r);
    double lateral  = lateralArea(r, h);
    double total    = totalArea(r, h);

    cout << "Base area              = " << base     << endl;
    cout << "Lateral surface area   = " << lateral  << endl;
    cout << "Total surface area     = " << total    << endl;

    return 0;
}

double totalArea (double radius, double height) {
    double result = 2 * baseArea(radius) + lateralArea(radius, height);
    return result;
}

double baseArea(double radius) {
    double result = M_PI * pow(radius, 2);
    return result;
}

double lateralArea(double radius, double height) {
    double result = 2 * M_PI * radius * height;
    return result;
}