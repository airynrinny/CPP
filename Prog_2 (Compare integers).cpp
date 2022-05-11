/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that reads 11 integers, compare each integer
with the 11th integer, and display whether the integers are “greater”, “smaller”, or “equal”
to the 11th integer.*/

#include <iostream>
using namespace std ;

int main() 
{
	int num[11] ;
	cout << "Enter 11 integers: " << endl ;
	for (int i = 0 ; i < 11 ; i++) {
		cin >> num[i] ;
	}
	int check = num[10] ;
	for (int i = 0 ; i < 10 ; i++) {
		if (num[i] > check) {
			cout << "\t" << num[i] << " is greater than 11th integer" << endl ;
		}
		if (num[i] < check) {
			cout << "\t" << num[i] << " is smaller than 11th integer" << endl ;
		}
		if (num[i] == check) {
			cout << "\t" << num[i] << " is equal to 11th integer" << endl ;
		}
	}
	return 0 ;
}
