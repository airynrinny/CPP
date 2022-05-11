/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function named incTwo that increments the value of a variable by 2. 
The function must use reference parameters ("pass by reference").*/

#include <iostream>
using namespace std ; 

double incTwo(double &value)
{
	value += 2 ;
	return value ;
}

int main()
{
	double num ;
	cout << "Enter a value: " ;
	cin >> num ;
	incTwo(num) ;
	cout << "The value after increment by 2: " << num ; 
	return 0 ;
}
