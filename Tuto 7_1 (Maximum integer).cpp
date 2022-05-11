/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that asks the user to enter 10 integers 
and prints the index of the maximum value among the 10 integers.*/

#include <iostream>
using namespace std ;

int main()
{
	int num[10], check, index ;	
	cout << "Enter 10 integers: " << endl ;
	for (int i = 0 ; i < 10 ; i++) {
		cin >> num[i] ;
	}
	check = num[0] ;
	for (int i = 1 ; i < 10 ; i ++) {
		if (check < num[i]) {
			check = num[i] ;
			index = i ;
		}
	}
	cout << endl << "The index of maximum value among the 10 integers is " << index ;	
	return 0 ;
}
