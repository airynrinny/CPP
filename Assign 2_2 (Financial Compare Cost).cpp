/*Nur Airin Faqihah Binti Ruzaid 	2011976
Suppose you shop for rice in two different packages. 
You would like to write a program to compare the cost. 
The program prompts the user to enter the weight and price of each package
and displays the one with the better price.*/

#include <iostream>
using namespace std ;

int main()
{
	int weight1, weight2 ;
	double price1, price2, compare1, compare2 ;
	
	cout << "Enter weight and price for package 1: " ;
	cin >> weight1 >> price1 ;
	cout << "Enter weight and price for package 2: " ;
	cin >> weight2 >> price2 ;
	
	compare1 = price1 / weight1 ;
	compare2 = price2 / weight2 ;
	
	if (compare1 > compare2)
		cout << "Package 2 has a better price." ;
	else 
		cout << "Package 1 has a better price" ;
	
	return 0 ;
}
