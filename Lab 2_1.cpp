/**
* Nur Airin Faqihah Binti Ruzaidi 
* Matric no: 2011976
* Lab 2 Section 1
*/

// a program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent weight in pounds.
// Output both the weights rounded to two decimal places.
// (Note that 1 kilogram 5 2.2 pounds.) Format your output with two decimal places.

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
	double weight;
	const double KG = 2.2 ;  // better use constant
	cout << "Input the weight (in kg) : " ;
	cin >> weight ;
	
	cout << fixed << showpoint ;       // these two lines must be put together to make it work
	cout << setprecision(2) ;          // 
	double pounds = weight * KG ;
	
	cout << weight << " kg in pounds is " << pounds << " lb" << endl ;
	
	return 0 ;
}

