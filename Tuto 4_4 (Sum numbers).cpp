/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that allows the user to enter a series of integers and finds their sum. It should stop accepting further input and print the sum when the user enters 0.
*/

#include <iostream>
using namespace std ;

int main()
{
	int num, sum ;
	
	cout << "Enter an integer: " ;
	cin >> num ;
	sum = 0 ;
	
	do{
		sum += num ;	// must put here, it will add the first one, if not it will not added to sum
		cout << "Enter an integer: " ;
		cin >> num ;
	} while (num != 0) ;
	
	cout << "The sum is: " << sum ;
	
	return 0 ;
}

