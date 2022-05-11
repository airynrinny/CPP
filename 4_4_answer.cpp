#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    do {
        cout << "Enter an integer (0 to stop): ";
        cin >> n;
        sum += n;
    } while (n != 0);

    cout << "Sum = " << sum << endl;

    return 0;
}