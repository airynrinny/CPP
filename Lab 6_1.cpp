/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that declares an array alpha of 50 components of type double. 
Initialize the array so that the first 25 components are equal to the
square of the index variable, and the last 25 components are equal to three times
the index variable. Output the array so that 10 elements per line are printed.

void initialize(double list[], int size);
void print(double list[], int size);
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

const double ALPHA = 49 ;

void initialize(double list[], int size)
{
	int i ;
	for (size = 0 ; size < 25 ; size++) {
		i = 0 ; 
		list[i] = pow(size, 2) ;
		++i ;
	}
	
	for (size = 25 ; size < 50 ; size++) {
		i = 25 ;
		list[i] = size * 3 ;
		++i ;
	}
}

void print(double list[], int size)
{
	for (int i = 0 ; i < 49 ; i++) {
		cout << setw(5) << list[i] << "" ;
		cout << endl ;
	}
}

int main()
{
	initialize(list[],size) ;
	print(list[ALPHA], size) ;
	return 0 ;
}
