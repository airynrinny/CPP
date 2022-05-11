#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double len, bre, hei, vol, rad, dia;

    cout << "Enter the length of the block: ";
    cin >> len;
    cout << "Enter the breadth of the block: ";
    cin >> bre;
    cout << "Enter the height of the block: ";
    cin >> hei;

    vol = len * bre * hei;
    rad = pow((vol * 3) / (4 * M_PI), (1/3.0));
    dia = rad * 2;

    cout << setprecision(2) << fixed;
    cout << "The diameter of the largest ball is " << dia << " unit(s)" << endl;

    return 0;
}