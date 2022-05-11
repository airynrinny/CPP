// Nur Airin Faqihah Biti Ruzaidi 	2011976
// Write a program that asks the user to enter the integer representing a month (1 for January, 2 for February, .. , 12 for December). 
// It must print the number of days in that month. Use switch statements.

#include <iostream>

using namespace std ;

int main()
{
	int month ;
	
	cout << "Enter the integer of the month (1-12): " ;
	cin >> month ;
	
	switch (month)
	{
		case 1:
		case 3:	
		case 5:
		case 7:
		case 8:	
		case 10:
		case 12:	
			cout << "Number of days = 31" << endl ;
			break;
			
		case 2:
			cout << "Number of days = 28 or 29" << endl ;
			break;
			
		case 4:
		case 6:
		case 9:
			cout << "Number of days = 31" << endl ;
			break;
			
		default :
			cout << "Invalid number of month" << endl ;
		}	
		
	return 0 ;
}
