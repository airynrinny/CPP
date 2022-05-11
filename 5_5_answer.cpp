#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    string ans = "";
    do {
        int rem = n % 16;
        if (rem <= 9) {
            ans = char(rem + '0') + ans;
        } 
        else if (rem == 10) {
            ans = 'A' + ans;
        }
        else if (rem == 11) {
            ans = 'B' + ans;
        }
        else if (rem == 12) {
            ans = 'C' + ans;
        }
        else if (rem == 13) {
            ans = 'D' + ans;
        }
        else if (rem == 14) {
            ans = 'E' + ans;
        }
        else {
            ans = 'F' + ans;
        }

        n /= 16;
    } while (n != 0);

    cout << "Hexadecimal = " << ans << endl;
}