/*
Nur Airin Faqihah Binti Ruzaidi 	2011976

(Find future dates) Write a program that prompts the user to enter an
integer for today’s day of the week (Sunday is 0, Monday is 1, …, and Saturday is
6). Also prompt the user to enter the number of days after today for a future day
and display the future day of the week.
Here is a sample run:
Enter today's day: 1
Enter the number of days elapsed since today: 3
Today is Monday and the future day is Thursday
*/

#include <iostream>

using namespace std ;

int main()
{
	int today, futureDay, elapsedDays ;
		
	cout << "Enter today's day: " ;
	cin >> today ;
	cout << "Enter the number of days elapsed since today: " ;
	cin >> elapsedDays ;
	
	futureDay = (today + elapsedDays) % 7 ; 
	
	switch (futureDay)
	{
		case 0 :
			cout << "Today is " << today << "and the future day is Sunday " ;
			break ;
			
		case 1 :
			cout << "Today is " << today << "and the future day is Monday " ;
			break ;
			 	 
		case 2 :
			cout << "Today is " << today << "and the future day is Tuesday " ;
			break ;
			 
		case 3 :
			cout << "Today is " << today << "and the future day is Wednesday " ;
			break ;
			 	 
		case 4 :
			cout << "Today is " << today << "and the future day is Thursday " ;
			break ;
			 	 	 
		case 5 :
			cout << "Today is " << today << "and the future day is Friday " ;
			break ;
			 	 	 	 
		case 6 :
			cout << "Today is " << today << "and the future day is Saturday " ;
			break ;
			
	}
	
	return 0 ;
	
}
