// Nur Airin Faqihah Binti Ruzaidi 	2011976
// Write a program that prompts the capacity, in gallons, of an automobile fuel tank and 
// the miles per gallon the automobile can be driven.
// The program outputs the number of miles the automobile can be driven without refuelling.

#include <iostream>

using namespace std ;

int main()
{
	double capacity, miles ;
	
	cout << "Input the capacity of the automobile fuel tank (in gallon) : " ;
	cin >> capacity ;
	cout << "Input the miles per gallon the automobile can be driven : " ;
	cin >> miles ;
	
	double totalMiles = miles * capacity ; 
	
	cout <<  "The distance of the automobile can be driven without refuelling is " << totalMiles << " miles" ;
	
	return 0 ;
}
