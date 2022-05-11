/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that has a declaration in main() to store the following numbers in
an array named rates: 6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, and 10.0. Include a function call to
show() that accepts rates in a parameter named rates and then displays the numbers by using
the pointer notation *(rates + i).*/

#include <iostream>
using namespace std ;

const int ARRAY_SIZE = 9 ;

void show(double *rates)
{
	for (int i = 0 ; i < ARRAY_SIZE ; i++) {
		cout << *(rates+i)<< " " ;
	}
	return ;
}

int main() 
{
	double rates[ARRAY_SIZE] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0} ;
	show(rates) ;
	return 0 ;
}


