/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prints the day number of the year, given the date in the form month-day-year.
For example, if the input is 1-1-2006, the day number is 1; if the input is 12-25-2006, the day number is
359. The program should check for a leap year. A year is a leap year if it is divisible by 4, but not divisible
by 100. For example, 1992 and 2008 are divisible by 4, but not by 100. A year that is divisible by 100 is a
leap year if it is also divisible by 400. For example, 1600 and 2000 are divisible by 400. However, 1800 is
not a leap year because 1800 is not divisible by 400.*/

#include <iostream>
using namespace std ;

bool leapYear (int year)
{   
    if (year % 100 == 0) { 
		if (year % 400 == 0)
			return true ;
	}
	else if (year % 4 == 0)
		return true ;
	else
    	return false ;
}

int main ()
{
	int day, month, year, dayNumber = 0 ;
    char ch ;
    
    cout << "Enter a date in (mm-dd-yyyy) format: " ;
    cin >> month ;
    cin >> ch ;
    cin >> day ;
    cin >> ch ;
    cin >> year ;
            
    if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31)) {
        while (month > 1 && month <= 12) {
            switch (month) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    dayNumber += 31 ;
                    break ;
                case 4:
                case 6:
                case 9:
                case 11:
                    dayNumber += 30 ;
                    break ;
                default:
                    dayNumber += 28 ;
                    if (leapYear (year)) 
                        dayNumber++ ;
                	break ;
            }
    		month-- ;
    	}
    dayNumber += day ;
    cout << "The day number is " << dayNumber ;
    }
    
    else 
    	cout << "Enter the correct month or day" << endl ;
    	
    return 0 ;
}
