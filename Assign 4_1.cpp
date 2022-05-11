/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that declares an array alpha of 50 components of type double. 
Initialize the array so that the first 25 components are equal to the square of the index variable, 
and the last 25 components are equal to three times the index variable. 
Output the array so that 10 elements per line are printed.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

void initialize(double numbers[], int size)
{
	int i ;
	for(i = 0 ; i < size ; i++) {
        	numbers[i] = i * i ;
        	if(i > 25) {
	            numbers[i] = 3 * i ;
        	}
    }
	return ;
}

void print(double list[], int size) 
{
	int i ;
	for(i = 0; i < size ; i++) {
        if(i % 10 == 0) {
            cout << endl;
        }
        cout << setw(3) << list[i] << " ";
    }
	return ;
}

int main()
{
	double alpha[50] ;
	initialize(alpha, 50) ;
	print(alpha, 50) ;
	return 0 ;
}
