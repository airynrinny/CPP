#include <iostream>
// #include <iomanip>
using namespace std;

int main() {
    double subtotal, total;
    const double taxRate = 0.07, serviceRate = 0.05;

    cout << "Enter the subtotal: RM ";
    cin >> subtotal;

    total = subtotal + subtotal * taxRate + subtotal * serviceRate;

    // cout << fixed << setprecision(2);
    cout << "Total bill = RM " << total << endl;

    return 0;
}