/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that accepts from the user a positive integer n and finds the sum 1^2+2^2+..+n^2 using a loop.
*/

#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
	int num, integer ;
	
	cout << "Enter a positive integer: " ;
	cin >> num ;
	
	if (num > 0)
	{
		int sum = 0 ;
		integer = 1 ;
		while ( integer <= num)
		{
			sum += pow(integer, 2) ;
			++integer ;
		}
		cout << "The sum is: " << sum ;
	}
	else 
	{
		cout << "Invalid input" ;	}
	
	return 0 ;
}
