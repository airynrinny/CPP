#include <iostream>
using namespace std;

void incTwo(int &x) {
    x += 2;
}

int main() {
    int n;
    cout << "Enter an integer        : ";
    cin >> n;

    incTwo(n);

    cout << "Integer incremented by 2: " << n << endl;

    return 0;
}