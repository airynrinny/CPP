/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
Ahmed works as a manager at a fast food joint, and one of his responsibilities is to make sure his employees are paid the correct wages, especially when they work overtime. 
Write a program that prompts Ahmed to enter the number of hours an employee has worked for and calculates the total wages for the employee. 
The normal hourly rate is RM 10, but if they work for more than 40 hours, the rate for each overtime hour is RM 12.5. 
*/

#include <iostream>

using namespace std ;

int main()
{
	const double NORMAL_HOUR = 10 ;
	const double OVERTIME = 12.5 ;
	double hours, wages ; 
	
	cout << "Input the hours: " ;
	cin >> hours ;
	
	if (hours >= 0 && hours <= 40)
	{
		cout << "The total wages is RM " << NORMAL_HOUR ;
	}
	
	if (hours > 40)
	{
		wages = ((hours - 40) * 12.5) + 10 ;
		cout << "The total wages is RM " << wages ;
	}
	
	return 0 ;
}
