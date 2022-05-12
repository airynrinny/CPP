#include <iostream>
#include <iomanip>
#define MAX_EMP 5
using namespace std;

int main() {
    struct Employee {
        string fname;
        string lname;
        int empID;
        double wageRate;
        int hours;
    };

    Employee arr[MAX_EMP];

    for (int i = 0; i < MAX_EMP; ++i) {
        cout << "Enter details for employee #" << i + 1 << endl;
        cout << "Employee ID   : "; cin >> arr[i].empID;
        cout << "First name    : "; cin >> arr[i].fname;
        cout << "Last name     : "; cin >> arr[i].lname;
        cout << "Wage per hour : "; cin >> arr[i].wageRate;
        cout << "Hours worked  : "; cin >> arr[i].hours;
    }

    cout << endl;
    cout << "Employee ID           Employee name  Total wage" << endl;
    for (int i = 0; i < MAX_EMP; ++i) {
        cout << right;
        cout << setw(11) << arr[i].empID ;
        cout << setw(20) << arr[i].fname << " " << arr[i].lname ;
        cout << setw(12) << fixed << setprecision(2) << arr[i].wageRate * arr[i].hours;
        cout << endl;
    }

    return 0;
}