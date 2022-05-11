#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 1) 
        cout << "1 is neither prime nor composite" << endl;
    else {
        bool isPrime = true;                        //Assume n is prime, i.e. it has only 2 factors
        for (int i = 2; i <= (n + 1) / 2; ++i) {    //If we can find another number that is a factor of n, then n is not prime
            if (n % i == 0) {
                isPrime = false;                    //i is a third factor => n has more that 2 factors and is not a prime number
                break;                              //No need to find further factors
            }
        }
        if (isPrime) 
            cout << n << " is a prime number" << endl;
        else
            cout << n << " is a composite prime number" << endl;
    }

    return 0;
}