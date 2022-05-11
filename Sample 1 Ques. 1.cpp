/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Sample lab Test 1 Question 1*/

#include <iostream>
using namespace std ;

int main()
{
	double num ;
	char cont ;
	do {
		cout << "Enter a real number: " ;
		cin >> num ;
		int wholeNum = num ;
		double decimal = num - wholeNum ;
		cout << "The number you just enter is " << num << endl ;
		cout << "The integer part of the entered number is " << wholeNum << endl ;
		cout << "The decimal part of the entered number is " << decimal << endl << endl ;
		cout << "Press any key to continue or n to quit " ;
		cin >> cont ;	
	} while (cont != 'n' || cont != 'N') ;
	return 0 ;
}
