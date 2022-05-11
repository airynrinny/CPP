/**
* Nur Airin Faqihah Binti Ruzaidi 
* Matric no: 2011976
* Lab 2 Section 1
*/

// A piece of wire is to be bent in the form of a rectangle to put around a picture frame.
// The length of the picture frame is 1.5 times the width.
// Write a program that prompts the user to input the length of the wire and outputs the length and width of the picture frame.

#include <iostream>

using namespace std ;

int main()
{
	double wire ;
	
	cout << "Input the length of the wire : " ;
	cin >> wire ;
	
	double width = wire / 5.0 ;
	double length = 1.5 * width ;
	
	cout << "The length is : " << length << endl ;
	
	cout << "The width is : " << width ;
	
    return 0;
}
