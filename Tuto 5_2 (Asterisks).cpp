/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prints an nm grid of asterisks. 
It must accept from the user the values of n and m, and print the the grid.
*/

#include <iostream>
using namespace std ;

int main ()
{
	int n, m ;
	cout << "Enter the value of n and m respectively: " ;
	cin >> n >> m ;
	for (int row = 1 ; row <= n ; ++row){
		cout << endl ;
		for (int pattern = 1 ; pattern <= m ; ++pattern) 
			cout << "*" ;
	}
	return 0 ;
}
