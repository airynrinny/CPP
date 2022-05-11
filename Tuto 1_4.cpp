// A program that accepts the subtotal of a restaurant bill, 
// computes the tax and service charge on the bill, 
// and prints the total restaurant bill. 
// The tax is 7% of the subtotal and the service charge is 5% of the subtotal. 

#include <iostream>

using namespace std ;

int main()
{
	double subtotal ;
	
	cout << "Input the subtotal : " ;
	cin >> subtotal ;
	
	double tax = subtotal * 0.07 ;
	double service = subtotal * 0.05 ;
	double total = subtotal + tax + service ;
	
	cout << "The total restaurant bill is " << total ;
	
	return 0 ;
}
