/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prompts the user to enter a set of integer numbers, and finally displays the second lowest integer number in the set. 
To exit from the program enter -1.*/

#include <iostream>
using namespace std ;

int main()
{
	int n = 1 , num, lowest, secondLow;
		
	cout << "Enter a set of integer: " << endl ;
	do {
		cin >> num ;
		
		if (n == 1) { 
			lowest = num ; 
		}
				
		if (n == 2 && num < lowest && num != -1) { 
			lowest = num ;
			secondLow = lowest ;
		}
		
		else if (n == 1 && num != -1) {
			secondLow = num ;
		}
		
		else if (n > 1 && num < lowest && num < secondLow && num != -1) {
			secondLow = lowest ;
			lowest = num ;			
		}
		
		else if (n > 1 && num < secondLow && num != -1) {
			secondLow = num ;
		}
		++n ;
	} while (num != -1) ;
	
	cout << endl ;
	cout << "The second lowest integer in the set is " << secondLow ;
	
	return 0 ;
}
