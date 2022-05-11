#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    cout << "Enter the number of hours worked: ";
    cin >> hours;

    const double regRate = 10;
    const double overRate = 12.5;
    const int regHours = 40;

    double wages = 0;
    if (hours <= regHours) {
        wages = hours * regRate;
    }
    else {
        wages = regHours * regRate + (hours - regHours) * overRate;
    }

    //Alternate 
    // double wages = (hours <= regHours ? hours * regRate : regHours * regRate + (hours - regHours) * overRate);
    
    cout << setprecision(2) << fixed;
    cout << "Total wages: RM " << wages << endl;

    return 0;
}