/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ function, smallestIndex, that takes as parameters an int array and its size and returns
the index of the first occurrence of the smallest element in the array. Also, write a program to test your
function.*/

#include <iostream>
using namespace std ;

int smallestIndex(int numbers[], int size)
{
	int smallest = 0, i ;
	for (i = 0 ; i < size - 1 ; i++) {
		if (numbers[i] < numbers[smallest]) {
			smallest = i ;
		}
	}
	return smallest ;
}

int main()
{
	const int INTEGERS = 7 ;
	int list[INTEGERS] = {9, 12, 4, 5, 3, 8, 3} ;
	int smallestPosition = smallestIndex(list, INTEGERS) ;
	cout << "The first occurence of the smallest elements is " << smallestPosition << endl ;
	cout << "The value is " << list[smallestPosition] ;
	return 0 ;
}
