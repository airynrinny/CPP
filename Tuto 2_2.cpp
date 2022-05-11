// Nur Airin Faqihah Binti Ruzaidi	2011976
// A program that finds the midpoint of a line segment.
// The user shall enter the coordinates of the two endpoints of the line segment and the program must calculate and print the coordinates of the midpoint.

#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
	double xa, ya, xb, yb ;
	
	cout << "Enter the coordinates of the first endpoint : " ;
	cin >> xa >> ya ;
	
	cout << "Enter the coordinates of the second endpoint : " ;
	cin >> xb >> yb ;
	
	double xNew = (xa + xb) / 2 ;
	double yNew = (ya + yb) / 2 ;
	
	cout << "The coordinates of the midpoint are (" << xNew << ", " << yNew << ")" ;
		 
	return 0 ;
}
