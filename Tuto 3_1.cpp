// Nur Airin Faqihah Binti Ruzaidi 	2011976
// Write a program that asks the user to enter an integer and prints whether the number is positive, negative, or 0.

#include <iostream>

using namespace std ;

int main()
{
	int integer;
	
	cout << "Input the integer : " ;
	cin >> integer ;
	
	if (integer > 0)
		cout << integer << " is a positive integer" ;
		else if (integer < 0)
			cout << integer << " is a negative integer" ;
			else 
				cout << "0 is neither positive nor negative" ;
	
	return 0 ;		
}
