// Nur Airin Faqihah Binti Ruzaidi 	2011976
// Write a program that checks whether a given character is uppercase or lowercase.

#include <iostream>

using namespace std ;

int main()
{
	char x ;
	
	cout << "Input a character: " ;
	cin >> x ;
	
	if (x >= 'A' && x <= 'Z') 
		cout << "The character is an uppercase letter" ;
		else if (x >= 'a' && x <= 'z') 
			cout << "The character is a lowercase letter" ;
			else 
				cout << "Invalid character" ;
				
	return 0 ;
}
