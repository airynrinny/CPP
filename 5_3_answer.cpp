#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 15 == 0) 
            cout << setw(10) << "FizzBuzz";
        else if (i % 3 == 0) 
            cout << setw(10) << "Fizz";
        else if (i % 5 == 0)
            cout << setw(10) << "Buzz";
        else 
            cout << setw(10) << i;

        if (i % 10 == 0) 
            cout << endl;  
    }

    return 0;
}