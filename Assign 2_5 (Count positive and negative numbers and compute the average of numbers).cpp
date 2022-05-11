/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that reads an unspecified number of integers, 
determines how many positive and negative values have been read, 
and computes the total and average of the input values (not counting zeros). 
Your program ends with the input 0.
Display the average as a floating-point number.

Enter an integer, the input ends if it is 0: 1 2 -1 3 0
*/

#include <iostream>
using namespace std ;

int main()
{
	int num , positive = 0 , negative = 0, i = 0 ;
	double sum = 0 ;
	
	cout << "Enter an integer: " << endl ;

	do {
		cin >> num ;
		
		if (num > 0) { 
			++positive ;
			sum += num ;
			++i ;
		}
		
		else if (num < 0) { 
			++negative ;
			sum += num ;
			++i ;
		}
		
	} while (num != 0) ;
	
	
	double avg = sum / i ;
	
	cout << "Positve numbers are " << positive << endl ;
	cout << "Negative numbers are " << negative << endl ; 
	cout << "Total of the inputs are " << sum << endl ;
	cout << "Average of the total inputs are " << avg ;
	
}
