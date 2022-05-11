// Nur Airin Faqihah Binti Ruzaidi	2011976
// Write a program that calculates the distance between two points in the Cartesian plane.
// The user will enter the coordinates of the two points and the program must print the distance between the points.
// Format your output to two decimal places.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std ;

int main()
{
	double xa, xb, ya, yb ;
	
	cout << "Input first coordinate : " ;
	cin >> xa >> ya ;
	
	cout << "Input coordinate 2 : " ;
	cin >> xb >> yb ;
	
	double distance = sqrt( pow(xb - xa, 2) + pow(yb - ya, 2) ) ;
	
	cout << setprecision(2) << fixed ;          //must put before print out the output
	cout << "The distance between the two points are " << distance ;
	
	return 0 ;
}
