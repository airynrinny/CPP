#include <iostream>
using namespace std;

void mulTwo (int* x) {
    *x *= 2;
}

int main() {
    int n;

    cout << "Enter an integer     : ";
    cin >> n;

    mulTwo(&n);

    cout << "After multiplication : ";
    cout << n << endl;

    return 0;
}