#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mass, vol, dens;

    cout << "Enter the mass of the object (in g): ";
    cin >> mass;
    cout << "Enter the volume of the object (in cm^3): ";
    cin >> vol;

    dens = mass / vol;

    cout << setprecision(2) << fixed;
    cout << "Density of the object = " << dens << " g/cm^3" << endl;

    return 0;
}