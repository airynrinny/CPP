#include <iostream>
using namespace std;

int main() {
    double len, bre, per, are;

    cout << "Enter the length of a rectangle: ";
    cin >> len;
    cout << "Enter the breadth of the rectangle: ";
    cin >> bre;

    per = 2 * (len + bre);
    are = len * bre;

    cout << "Perimeter = " << per << " units" << endl;
    cout << "Area = " << are << " sq. units" << endl;

    return 0;
}