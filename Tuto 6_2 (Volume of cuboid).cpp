/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function that takes the length, breadth, and height of a cuboid and returns the volume of the cuboid. 
Write a main program that tests this function with user input values.*/

#include <iostream>
using namespace std ;

double volume(double length, double breadth, double height)
{
	double vol = length * breadth * height ;
	return vol ;
} 

int main()
{
	double length, breadth, height ;
	
	cout << "Enter the length of the cuboid: " ;
	cin >> length ;
	cout << "Enter the breadth of the cuboid: " ;
	cin >> breadth ;
	cout << "Enter the height of the cuboid: " ;
	cin >> height ;
	cout << endl ;
	cout << "\t The volume of the cuboid: " << volume(length, breadth, height) ;
	
	return 0 ;
}
