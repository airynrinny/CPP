/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
 Write a program that prompts the user to enter a positive integer and finds out whether the number is prime or composite.
*/

#include <iostream>
using namespace std ;

int main()
{
	int n, i ;
	
	cout << "Enter a positive integer: " ;
	cin >> n ;
	
	bool isPrime = true ; 	// n is prime
	if (n > 0)
	{
		for (i = 2 ; i < n ; ++i)
		{
			if (n % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		
		if (isPrime) 	// isPrime is the same as isPrime = true
		{
			cout << n << " is a prime number" ;
		}
		
		else 
		{
			cout << n << " is not a prime number"  ;
		}
	}
	
	else 
	{
		cout << "Invalid input" ;
	}
	
	return 0 ;
}
