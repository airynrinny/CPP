// Nur Airin Faqihah Binti Ruzaidi 	2011976
//Write a program that asks the user to enter a year and checks whether the given year is a leap year.

#include <iostream>

using namespace std ;

int main()
{
	int year ;
	
	cout << "Input the year: " ;
	cin >> year ;
	
	bool leap = false ;
	
	if (year % 100 == 0)
	{ 
		if (year % 400 == 0)
		leap = true ;
	}
	
	else 
	{
		if (year % 4 == 0)
		leap = true ;
	}
	
	if (leap = true)
	{
		cout << year << " is a a leap year" ;
	}
	
	else 
	{
		cout << year << " is not a leap year" ;
	}
	
	return 0 ;
}
