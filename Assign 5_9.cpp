/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that stores the following numbers in the array named 
miles: 15, 22, 16, 18, 27, 23, and 20. Have your program copy the data stored 
in miles to another array named dist, and then display the values in the dist array. 
Your program should use pointer notation when copying and displaying array elements.*/

#include <iostream>
using namespace std ;

int main()
{
	int miles[7] = {15, 22, 16, 18, 27, 23, 20} ;
	int dist[7] ;
	int *ptr = miles ;
	for (int i = 0 ; i < 7 ; i++) {
		dist[i] = *(ptr + i) ;
	}
	for (int i = 0 ; i < 7 ; i++) {
		cout << dist[i] << " " ;
	}
	return 0 ;
}
