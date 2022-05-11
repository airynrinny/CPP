/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that asks the user to enter the radius and height of a cylinder, and prints the base area, lateral surface area, total surface area.
It should include the following functions:
baseArea, which takes the radius and returns the base area
lateralArea, which takes the radius and height and returns the lateral surface area
totalArea, which takes the radius and height and returns the total surface area. It must call baseArea and lateralArea
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

double baseArea(double radius)	//circle
{
	cout << fixed << showpoint << setprecision(3) ;
	double area = M_PI * pow(radius, 2) ;
	return area ;
}

double lateralArea(double radius, double height)
{
	cout << fixed << showpoint << setprecision(3) ;
	double area = 2 * M_PI * radius * height ;
	return area ;
}

double totalArea(double radius, double height)
{
	cout << fixed << showpoint << setprecision(3) ;
	double total = 2 * baseArea(radius) + lateralArea(radius, height) ;	//call other function
	return total ;
}

int main()
{
	double radius, height ;
	cout << "Enter radius: " ;
	cin >> radius ;
	cout << "Enter height: " ;
	cin >> height ;
	cout << endl ;
	double base = baseArea(radius) ;
	double lateral = lateralArea(radius, height) ;
	double total = totalArea(radius, height) ;

	cout << "Base area is " << base << endl ;
	cout << "Lateral Area is " << lateral << endl ;
	cout << "Total area is " << total ;

	return 0 ;
}
