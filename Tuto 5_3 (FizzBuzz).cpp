/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prints the numbers from 1 to 100.
But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
For numbers which are multiples of both three and five print “FizzBuzz”.
*/

#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
	int num ;
	for (num = 1 ; num >=1 && num <= 100 ; ++num) {
		if (num % 3 == 0 && num % 5 ==0)	// must put at the beginning bcs of number 15
			cout << setw(10) << "FizzBuzz" ;
		if (num % 3 == 0) 
			cout << setw(10) << "Fizz" ;
		if (num % 5 == 0) 
			cout << setw(10) << "Buzz" ;
		else 
			cout << setw(10) << num << " " ;
		if (num % 10 == 0)
			cout << endl ;				
	}
	
	return 0 ;
}
