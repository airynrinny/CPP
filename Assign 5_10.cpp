/*Nur Airin Faqihah Binrti Ruzaidi 	2011976
Write a program that has a declaration in main() to store the following numbers in an 
array named rates: 6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, and 10.0. 
Include a function call to show() that accepts rates in a parameter named rates 
and then displays the numbers by using the pointer notation *(rates + i).*/

#include <iostream>
#include <iomanip>
using namespace std ;

void show(double *rates) ;

int main() 
{
	double rates[9] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0} ;
	show(rates) ;
	return 0 ;
}

void show(double *rates)
{
	cout << showpoint << fixed << setprecision(1) ;
	for (int i = 0 ; i < 9 ; i++) {
		cout << *(rates + i) << " " ;
	}
}
