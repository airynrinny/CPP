/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prints a multiplication table. 
It must ask the user to enter any integer and print the multiplication table for that number.*/

#include <iostream>
using namespace std ;

int main()
{
	int num, value ;
	
	cout << "Enter an integer: " ;
	cin >> num ; 
	
	for (int i = 0 ; i <= 12 ; i++) {
		value = num * i ;
		cout << num << " * " << i << " = " << value << endl ;
	}
	return 0 ;
}
