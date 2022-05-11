#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is prime" << endl;
    }
    else {
        cout << num << " is not prime" << endl;
    }

    return 0;
}