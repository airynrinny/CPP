#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    string ans = "";
    do {
        int rem = n % 2;
        ans = char(rem + '0') + ans;
        n /= 2;
    } while (n != 0);

    cout << "Binary = " << ans << endl;
}