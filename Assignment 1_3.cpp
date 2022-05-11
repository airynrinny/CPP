// Nur Airin faqihah Binti ruzaidi 
// A room has one door, two windows, and a built-in bookshelf and it needs to be painted. 
// Suppose that one gallon of paint can paint 120 square feet. Write a program that prompts the user to input 
// the lengths and widths of the door, each window, the bookshelf; and the length, width, and height of the room (in feet). 
// The program outputs the amount of paint needed to paint the walls of the room.

#include <iostream>

using namespace std ;

int main()
{
	const double GALLON = 120 ;
	double lenRoom, widRoom, heiRoom ;
	double lenDoor, widDoor ;
	double lenWindow, widWindow ;
	double lenShelf, widShelf ;
	 
	cout << "Input the length, width and the height of the room respectively : " ;
	cin >> lenRoom >> widRoom >> heiRoom ;
	
	cout << "Input the length and width of the door respectively : " ;
	cin >> lenDoor >> widDoor ;
	
	cout << "Input the length and width of the window respectively : " ;
	cin >> lenWindow >> widWindow ;
	
	cout << "Input the length and width of the bookshelf respectively : " ;
	cin >> lenShelf >> widShelf ;
	
	double periRoom = lenRoom + widRoom + heiRoom ;
	double periDoor = lenDoor + widDoor ;
	double periWindows = (lenWindow + widWindow) * 2 ;
	double periShelf = lenShelf + widShelf ;
	double paintWall = periRoom - (periDoor + periWindows + periShelf) ;
	double totalPaint = paintWall / GALLON ;
	
	cout << "The amount of paint needed to paint the walls of the room is " << totalPaint << " gallons" ;
	
	return 0 ;
}





