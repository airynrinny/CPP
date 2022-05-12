/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program to accept from the user five integers to an array, increment each of 
the numbers by 2, and then print the numbers along with their location in memory. 
Use pointer notation to access the array elements.*/

#include <iostream> 
using namespace std ;

const int SIZE = 5 ;

int main() 
{
	int integers[SIZE] ;
	cout << "Enter five integers: " << endl ;
	for (int i = 0 ; i < SIZE ; i++) {
		cin >> integers[i] ;
	}
	cout << endl ;
	cout << "Integers after increment by 2: " ;
	for (int i = 0 ; i < SIZE ; i++) {
		*(integers + i) = *(integers + i) + 2 ;
		cout << *(integers + i) << " " ;
	}
	return 0 ;
}
