/**
* Nur Airin Faqihah Binti Ruzaidi 
* Matric no: 2011976
* Lab 2 Section 1
*/

// Two cars A and B leave an intersection at the same time. 
// Car A travels west at an average speed of x miles per hour and car B travels south at an average speed of y miles per hour. 
// Write a program that prompts the user to enter the average speed of both the cars and the elapsed time (in hours and minutes) and 
// outputs the (shortest) distance between the cars.

#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
	double speedA, speedB ;
	double hourA , minA, hourB, minB ;
	
	cout << "Input the average speed for car A : " ;
	cin >> speedA ;
	
	cout << "Input the elapsed time for car A in hour and minute : " ;
	cin >> hourA >> minA ;
	
	cout << "Input the average speed for car B : " ;
	cin >> speedB ;
	
	cout << "Input the elapsed time for car B in hour and minute: " ;
	cin >> hourB, minB ;
	
	double timeA = hourA + (minA / 60) ;
	double timeB = hourB + (minB / 60) ;
	
	double shortDistance = (pow((speedA * timeA), 2)) + (pow((speedB * timeB), 2));	
	
	cout << "The shortest distance between car A and B is " << shortDistance ;
	
	return 0 ;
}
