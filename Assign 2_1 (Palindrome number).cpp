/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prompts the user to enter a three-digit integer and determines
whether it is a palindrome number. A number is palindrome if it reads the same from 
right to left and from left
to right.*/

#include <iostream>
using namespace std ;

int main()
{
	int num, num1, num3 ;	
	
	cout << "Enter a three-digit integer: " ;
	cin >> num ;
	if (num >= 100 && num <= 999) {
		num1 = num / 100 ;
		num3 = num % 10; 
		if (num1 != num3){
			cout << num << " is not a palindrome number" ;
		}	
		else {
			cout << num << " is a palindrome number" ;
		}
	}
	else 
		cout << "Invalid input" ;
		
    return 0 ;
}
