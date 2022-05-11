// A program that prompts the user to enter two positive integers.
// It must print the quotient and remainder obtained after dividing the first number by the second.


#include <iostream>

using namespace std;

int main()
{
	int first, second, quotient, remainder;
	
	cout << "Input the first number : ";
	cin >> first;
	
	cout << "Input the second number : ";
	cin >> second;
	
	quotient = first / second;
	remainder = first % second;
	
	cout << "The quotient is " << quotient << " and the remainder is " << remainder;
	
	return 0;
}
