// Nur Airin Faqihah Binti Ruzaidi	2011976
// Rashid’s grandmother gifted him a rectangular block of clay to play with, but all he is interested in is making the largest ball possible.
// Given the length, breadth, and height of the block of clay, find the diameter of the largest ball that can be made with it. 

#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
	double length, breadth, height ;
	
	cout << "Input the length : " ;
	cin >> length ;
	cout << "Input the breadth : " ;
	cin >> breadth ;
	cout << "Input the height : " ;
	cin >> height ;
	
	double volume = length * breadth * height ;
	double rad = pow((3 * volume) / (4 * M_PI), 1/3.0) ;	// cbrt((3 * volume) / (4 * M_PI))    can also use this form.
	double diameter = rad * 2 ;
	
	cout << "The diameter of the ball is " << diameter << " cm" ;
	
	return 0 ;
}
