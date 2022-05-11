/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that asks the user to enter the coefficients of a, b, and c of the quadratic equation
*/

#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
	double a, b, c, root ;
	
	cout << "Enter the coefficient of a, b and c respectively: " ;
	cin >> a >> b >> c ;
	
	root = pow(b, 2) - (4 * a * c) ;
	
	if (root > 0)
	{
		cout << root << endl ;
		cout << "The equation has two distinct real roots" ;
	}
	
	else if (root == 0)
	{
		cout << root << endl ;
		cout << "The equation has a single real root" ;
	}
	
	else 
	{
		cout << "The equation has complex roots" ;
	}
	
	return 0 ;
}
