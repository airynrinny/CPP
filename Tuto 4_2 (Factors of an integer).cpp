/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that asks the user to enter a positive integer and prints all the factors of the integer. An example of the expected output is given below: 

Enter a positive integer: 12
The factors of 12 are listed below:
1 2 3 4 6 12

*/

#include <iostream>
using namespace std ;

int main()
{
	int num, factor = 1 ;
	
	cout << "Enter a positive integer: " ;
	cin >> num ;
	
	if (num > 0)
	{ 
		for (factor = 1 ; factor <= num ; ++factor)
		{
			if (num % factor == 0)
			{
				cout << " " << factor ;
			}
		}
	}
	
	else 
	{
		cout << "Invalid input" ;
	}
	
	return 0 ;
}
