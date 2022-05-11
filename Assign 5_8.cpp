/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that stores the following numbers in an array named 
rates: 6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, and 9.0. 
Display the values in the array by changing the address in a pointer called dispPt. 
Use a for statement in your program.*/

#include <iostream>
using namespace std ;

int main()
{
	double rates[13] = {6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, 9.0} ;
	double *dispPt = rates ;
	for (int i = 0 ; i < 13 ; i++) {
		cout << *(dispPt + i) << " " ;
	}
	return 0 ;
}
