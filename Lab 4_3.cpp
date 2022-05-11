/*
Nur Airin Faqihah Binti Ruzaidi 	
Matric No: 2011976
Lab #4 Section 1

Write a program that prompts the user to enter two integers. The program
outputs how many numbers are multiples of 3 and how many numbers are multiples of 5
between the two integers (inclusive).
*/

#include <iostream>
using namespace std ;

int main()
{
	int num1, num2, temp ;
	int mul3 = 0, mul5 = 0 ;
	
	cout << "Enter first integer: " ;
	cin >> num1 ;	
	cout << "Enter second integer: " ;
	cin >> num2 ;
	
	if (num1 > num2){
		temp = num1 ;
		num1 = num2 ;
		num2 = temp ;		
	}
	
	while (num1 <= num2){
		if (num1 % 3 == 0){
			mul3++ ;
			if (num1 % 5 == 0)
			mul5++ ;
		}
		
		else if (num1 % 5 == 0){
			mul5++ ;
		}
		
		num1++ ;	
	}
	
	cout << "The total multiples of 3 is: " << mul3 << endl ;
	cout << "The total multiples of 5 is: " << mul5 << endl ;
	
	return 0 ;
} 
