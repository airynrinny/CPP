/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function that implements binary search - it must take an integer 
and a sorted integer array (along with its size) as parameters 
and return the index of the integer in the array. 
If the integer is not found in the array, it must return -1.
Also write a program that takes from the user a number 
and uses the function to find the position of the number in this list: 
1, 13, 26, 33, 49, 60, 71, 82, 90, 99. 
If the number is not in this list, it should print an appropriate message. */

#include <iostream>
using namespace std ;

const int SIZE = 10 ;

int binarySearch(int array[], int n) ;

int main () 
{
	int list[SIZE] = {1, 13, 26, 33, 49, 60, 71, 82, 90, 99}, num, index ;
	cout << "Enter a number: " ; 
	cin >> num ; 

	index = binarySearch(list, num) ;
	if(index == -1)
   		cout<< num <<" is not present in the array" ;
   	else
   		cout<< num <<" is present at index "<< index <<" in the array" ;
	return 0 ; 
	
}

// {1, 13, 26, 33, 49, 60, 71, 82, 90, 99}
int binarySearch(int array[], int n) 
{
	int first, last, mid ;
	first = 0 ;
	last = SIZE - 1 ;
	while(first <= last)
	{
		mid = (int)((first+last) / 2) ;
		if(n == array[mid])
		{
			return mid ;
		}
		else if(n > array[mid])
			first = mid + 1 ;
		else 
			last = mid - 1 ;
	}
	return -1 ;
}
