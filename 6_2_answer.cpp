#include <iostream>
using namespace std;

double volumeCuboid(double length, double breadth, double height) {
    double volume = length * breadth * height;
    return volume;
}

int main() {
    double l, b, h;

    cout << "Enter length of cuboid : ";
    cin >> l;

    cout << "Enter breadth of cuboid: ";
    cin >> b;

    cout << "Enter height of cuboid : ";
    cin >> h;

    double vol = volumeCuboid(l, b, h);

    cout << "Volume of cuboid       = " << vol << endl;

    return 0;
    
}