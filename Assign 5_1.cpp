/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that includes the following declaration statements. Have the program use the address operator and a cout statement to display the addresses corresponding to each variable.
int num, count;
long date;
float slope;
double yield;*/

#include <iostream>
using namespace std ;

int main()
{
	int num, count ;
	long date ;
	float slope ;
	double yield ;
	
	cout << "The address of num is " << &num << endl ;
	cout << "The address of count is " << &count << endl ;
	cout << "The address of date is " << &date << endl ;
	cout << "The address of slope is " << &slope << endl ;
	cout << "The address of yield is " << &yield ;
	
	return 0 ;
}
