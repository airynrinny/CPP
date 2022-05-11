/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Modify the show() function written in Exercise 1 to alter the address in rates.
Always use the expression *rates rather than *(rates + i) to retrieve the correct element*/

#include <iostream>
using namespace std ;

const int ARRAY_SIZE = 9 ;

void show(double *rates)
{
	for (int i = 0 ; i < ARRAY_SIZE ; i++) {
		cout << *rates << " " ;
		*rates++ ;
	}
}

int main() 
{
	double rates[ARRAY_SIZE] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0} ;
	show(rates) ;
	return 0 ;
}
