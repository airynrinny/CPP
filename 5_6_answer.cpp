#include <iostream>
using namespace std;

int main() {
    int n, count = 0, total = 0;

    cout << "Enter marks (0 to end): ";
    cin >> n;

    while  (n != -1) {
        total += n;
        ++count;
        cout << "Enter marks (0 to end): ";
        cin >> n;
    }

    double avg = (count == 0? 0 : total * 1.0 / count);

    cout << "Total number of students = " << count << endl;
    cout << "Class average            = " << avg << endl;
}