#include <iostream>
using namespace std;

int main () {
    int num;
    
    cout << "Enter a three-digit number: ";
    cin >> num;

    int d1 = num % 10;
    num = num / 10;
    int d2 = num % 10;
    num = num / 10;
    int d3 = num;

    int ans = d1 * 100 + d2 * 10 + d3;

    cout << "Reversed number = " << ans << endl;

    return 0;
}