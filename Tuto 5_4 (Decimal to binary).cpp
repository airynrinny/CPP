/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that converts a decimal integer number into a binary number.
*/

#include <iostream>
using namespace std;

int main()
{
	int num, binary = 0, remainder, i = 1 ;

	cout << "Enter a decimal number: ";
	cin >> num;

	while(num != 0) {
		remainder = num % 2 ;
		num /= 2 ;
		binary += remainder * i ;
		i = i * 10;
	}
	cout << "Equivalent binary number: " << binary ;
	
	return 0;
}
  
