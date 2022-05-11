/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that accepts from the user marks for each student in a class and prints the class average. 
The program should keep accepting marks until the user enters -1, 
when the program should stop accepting further input and print the class average.*/

#include <iostream>
using namespace std ;

int main()
{
	int i ;
	double scores, total, average ; 
	
	do {
		cout << "Enter the scores, enter -1 to stop: " ;
		cin >> scores ;
		cout << endl ;
		
		if (scores >= 0) { 
			total += scores ;
			++i ;
		}
		
	} while (scores != -1) ;
	
	average = total / i ;
	cout << "The average scores is " << average ;
	
	return 0 ;
}
