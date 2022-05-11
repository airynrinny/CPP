/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function called digitCount that takes a single non-negative long long integer as parameter 
and prints the number of zero, even and odd digits in the integer.*/

#include <iostream>
using namespace std ;

void digitCount (long long int integer)
{
	int zero = 0, even = 0, odd = 0 ;
    int digit ;
    do {
        digit = integer % 10 ;
        
        if (digit == 0) 
			++zero ;
			
        else if (digit % 2 == 0) 
			++even ;
			
        else 
			++odd ;
			
        integer /= 10 ;
    } while (integer != 0) ;

    cout << "No. of even digits = " << even << endl;
    cout << "No. of odd digits  = " << odd  << endl;
    cout << "No. of zeros       = " << zero << endl;

    return ;
}

int main() {
    int num ;
	
    cout << "Enter a positive integer: " ;
    cin >> num; 
	digitCount(num) ;
    return 0;
}
