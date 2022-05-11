#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice() {
    int num = rand() % 6 + 1;
    return num;
}

int main() {
    srand(time(NULL));

    char again = 'Y';

    do {
        cout << "Rolling die... "     << rollDice() << endl;
        cout << "Roll again? (Y/N): ";
        cin >> again;
    } while (toupper(again) == 'Y');

    return 0;
}