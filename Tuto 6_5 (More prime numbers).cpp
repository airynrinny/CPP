/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a boolean function named isPrime that checks if a given positive integer is prime.
It should return true if the integer is prime, and 0 if otherwise. */

#include <iostream>
using namespace std ; 

bool isPrime (int num)
{
	int i, number ;
	bool prime = true ; 
		for (i = 2 ; i < num ; ++i)
		{
			if (num % i == 0)
				return false ;
			
			else
				return true ; 
		}
}

int main()
{
	int num ;
	
	cout << "Enter a positive integer: " ;
	cin >> num ;
	
	if (isPrime(num)) 
		cout << num << " is a prime number" ;
	
	else 
		cout << num << " is not a prime number" ;
		
	return 0 ;
}
