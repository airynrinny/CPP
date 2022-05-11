#include <iostream>
using namespace std;

void digitCount(long long int num) {
    if (num < 0) {
        num = -num;
    }
    int zeros = 0;
    int evens = 0;
    int odds  = 0;
    do {
        int digit = num % 10;
        if (digit == 0)
            ++zeros;
        else if (digit % 2 == 0) 
            ++evens;
        else 
            ++odds;
        num /= 10;
    } while (num > 0);

    cout << "No. of zeros       = " << zeros << endl;
    cout << "No. of even digits = " << evens << endl;
    cout << "No. of odd digits  = " << odds  << endl; 
}

int main() {
    long long int x;
    cout << "Enter an integer: ";
    cin >> x;
    digitCount(x);

    return 0;
}