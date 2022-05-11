#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter a positive integer: ";
    cin >> n;

    int zero = 0, even = 0, odd = 0;
    int dig;
    do {
        dig = n % 10;
        if (dig == 0) ++zero;
        else if (dig % 2 == 0) ++even;
        else ++odd;
        n /= 10;
    } while (n != 0);

    cout << "No. of even digits = " << even << endl;
    cout << "No. of odd digits  = " << odd  << endl;
    cout << "No. of zeros       = " << zero << endl;

    return 0;
}