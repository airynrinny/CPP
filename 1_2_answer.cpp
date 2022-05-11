#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;

    double sum = n1 + n2 + n3;
    double average = sum / 3;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}