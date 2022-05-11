/*Write a C++ function, lastLargestIndex, that takes as parameters an int
array and its size and returns the index of the last occurrence of the largest
element in the array. Also, write a program to test your function.*/

#include <iostream>
using namespace std ;

const int NUMBERS = 6 ;

int lastLargestIndex(int i, int size)
{
 	int list[NUMBERS] = {2,7,1,3,7,4} ;
	for (i = size - 2 ; i >= 0 ; i--) {
		int max = list[i] ;
		int index = i ;
		return index ; 
	}	
}
int main()
{
	int lastLargestIndex(int i, int size) ;
	return 0 ;
}
