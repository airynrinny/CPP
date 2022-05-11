#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qty;
    double total;
    const double unitPrice = 3.50;

    cout << "Enter the quantity: ";
    cin >> qty;

    total = qty * unitPrice;

    cout << endl;
    cout << setw(29) << setfill('*') << "*" << endl;
    cout << "  Makcik’s Tasty Apam Balik" << endl;
    cout << endl;
    cout << setw(18) << setfill('.') << left <<  "Quantity" << ":" << setw(10) << setfill(' ') << right << qty << endl;
    cout << setprecision(2) << fixed << endl;
    cout << setw(18) << setfill('.') << left << "Unit price" << ": RM" << setw(7) << setfill(' ') << right << unitPrice << endl;
    cout << setw(28) << setfill('-') << "-" << endl;
    cout << setw(18) << setfill('.') << left << "Total price" << ": RM" << setw(7) << setfill(' ') << right << total << endl;
    cout << endl;
    cout << "Thank you, please come again!" << endl;
    cout << setw(29) << setfill('*') << "*" << endl;

    return 0;
}