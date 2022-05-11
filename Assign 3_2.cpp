/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function, reverseDigit, that takes an integer as a parameter and returns the number with
its digits reversed. For example, the value of reverseDigit(12345) is 54321; the value of
reverseDigit(5600) is 65; the value of reverseDigit(7008) is 8007; and the value of
reverseDigit(-532) is -235.*/

#include <iostream>
using namespace std ;

void reverseDigits (int ) ;

int main() 
{
	int num ;
	cout << "Enter an integer number: " ;
	cin >> num ;
	reverseDigits (num) ;
	return 0 ;
}

void reverseDigits (int number)
{
	int reverse = 0 ;
	while (number != 0) {
		reverse = reverse * 10 + (number % 10) ;
		number /= 10 ;
	}
	cout << "The reverse is " << reverse << endl ;
	return ;
}
