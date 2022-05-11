// A program that asks the user to enter the length and breadth of a rectangle. 
// The program must compute the perimeter and area of the rectangle and print them.

#include <iostream>

using namespace std;

int main()
{
	double length, breadth ;
	cout << "Input the length : " ;
	cin >> length ;
	
	cout << "Input the breadth : " ;
	cin >> breadth ;
	
	double perimeter = (length + breadth) * 2 ;
	double area = length * breadth ;
	
	cout << "The perimeter of the rectangle is " << perimeter << " and the area of the rectangle is " << area ;
	
	return 0 ;
}
