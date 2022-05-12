/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function mulTwo that takes a pointer to an 
integer as a parameter and multiplies the integer by 2. 
Write a main function that tests this function with user input.*/

#include <iostream>
using namespace std ;

void mulTwo(int *ptr) 
{
	*ptr *= 2 ; 
}

int main() 
{
	int value ;
	int *ptr ;
	cout << "Enter an integer: " ;
	cin >> value ; 
	mulTwo(&value) ;
	cout << "Multiplied by 2: " << value ;
	return 0 ;
}
