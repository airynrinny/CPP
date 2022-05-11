#include <iostream>
using namespace std;

void swapVars (int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1, num2;

    cout << "Enter values for num1 and num2: ";
    cin >> num1 >> num2;

    swapVars(num1, num2);
    cout << "Swapped values                : " << num1 << " " << num2 << endl;

    return 0;

}