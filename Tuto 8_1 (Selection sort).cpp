/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Zara is in grade 1 and studying for her maths exam. 
She is practising how to rearrange numbers in ascending order and needs your help to check her answers. 
Write a program that accepts from her ten numbers and prints the numbers in ascending order. */

#include <iostream>
using namespace std ;

const int SIZE = 10 ;

int main()
{
	int scores[SIZE] ;
	cout << "Enter 10 scores: " << endl ;
	for (int i = 0 ; i < SIZE ; i++) {
		cin >> scores[i] ;
	}
	for (int i = 0 ; i < SIZE - 1 ; i++) { // 
		int min_val = scores[i] ;
		int min_index = i ;
		for (int j = i + 1 ; j < SIZE ; j++) {
			if (scores[j] < min_val) {
				min_val = scores[j] ;
				min_index = j ;
			}
		}
		int temp = scores[i] ;
		scores[i] = scores[min_index] ;
		scores[min_index] = temp ; 
	}
	cout <<"Sorted list of scores: " ;
	for (int i = 0 ; i < SIZE ; i++) {
		cout << scores[i] << " " ;
	}
	return 0 ;
}
