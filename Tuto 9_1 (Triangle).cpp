/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Define a struct called Point that stores the x- and y-coordinates of a point in the Cartesian plane. 
Ask the user to enter the coordinates of three points of a triangle - 
these coordinates must be stored in three structures of the type Point. 
Use the following formula to calculate the area of the triangle and print the result.*/

#include <iostream>
using namespace std ;

struct Coor1
{
	int x ;
	int y ;
} ;

struct Coor2
{
	int x ;
	int y ;
} ;

struct Coor3
{
	int x ; 
	int y ; 
} ;

int main()
{
	Coor1 point1 ;
	Coor2 point2 ;
	Coor3 point3 ;
	double area ;
		
	cout << "Enter the coordinates for the first point, x and y: " ;
	cin >> point1.x >> point1.y ;
	cout << endl << "Enter the coordinates for the second point, x and y: " ;
	cin >> point2.x >> point2.y ;
	cout << endl << "Enter the coordinates for the third point, x and y: " ;
	cin >> point3.x >> point3.y ;
	
	area = ((point1.x * (point2.y - point3.y) + (point2.x * (point3.y - point1.y)) + (point3.x * (point1.y - point2.y)))) / 2 ;
	
	cout << endl << "The Area of the triangle is " << area ;
	return 0 ;
}
