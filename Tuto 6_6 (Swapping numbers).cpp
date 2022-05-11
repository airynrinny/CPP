/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function called swapVars that swaps the values contained in two integer variables.*/

#include <iostream>
using namespace std ;

void swapVars(int &firstNum, int &secondNum)
{
	int temp = firstNum ;
	firstNum = secondNum ;
	secondNum = temp ;
	return ;
}

int main()
{
	int num1, num2 ;
	cout << "Enter two integers respectively: " ;
	cin >> num1 >> num2 ;
	swapVars(num1, num2) ;
	cout << endl ;
	cout << "Values of first and second integer after swap is " << num1 << " " << num2 ;
	
	return 0 ;
}
