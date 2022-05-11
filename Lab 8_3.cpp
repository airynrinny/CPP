/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ function named days() that determines the number of days since
January 1, 1900 for any date passed as a structure. Use the Date structure:

structƒDate
{
int month;
int day;
int year;
};

In writing the days() function, follow the convention that all years have 360 days and each month
consists of 30 days. The function should return the number of days for any Date structure passed
to it.*/

#include <iostream> 
using namespace std ;

struct Date
{
	int month;
	int day;
	int year;
} ;

int days(Date current) ;

int main()
{
	int num ;
	Date current ;
	cout << "Enter the month: " ;
	cin >> current.month ;
	cout << "Enter the day: " ;
	cin >> current.day ; 
	cout << "Enter the year: " ;
	cin >> current.year ;
	
	num = days(current) ;
	cout << "The numbers of days is " << num ;
	return 0 ;
}

int days(Date current)
{
	int numbers = current.day * current.month ;
	return numbers ;
}
