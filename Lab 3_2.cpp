/*
Nur Airin Faqihah Binti Ruzaidi 	2011976

The short-term, 0-24 hours, parking fee, F, at an
international airport is given by the following formula:
where int(h + 1) is the integer value of h + 1. For example, int(3.2) = 3, int(4.8) = 4.
Write a program that prompts the user to enter the number of hours a car is
parked at the airport and outputs the parking fee.
*/

#include <iostream>

using namespace std ;

int main ()
{
	double hour ;
	int fee ;
	
	cout << "Input the hours: " ;
	cin >> hour ;
	
	if (hour <= 3 && hour >= 0)
		cout << "The fee is 5" ;
		
	else if (hour <= 9 && hour > 3)
	{ 
		fee = 6 * (hour + 1) ;
		cout << "The fee is " << fee ;
	} 
	
	else if (hour <= 24 && hour > 9 )
		cout << "The fee is 60" ;
		
	else if (hour < 0 && hour > 24)
		cout << "It must be between 0-24 hours" ;
		
	else
		cout << "Invalid input" ;
	
	return 0 ;
}

