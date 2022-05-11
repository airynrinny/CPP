/* 
Nur Airin Faqihah Binti Ruzaidi 	2011976
(Sort Three Integer Numbers) Write a program that prompts the user
to input three numbers. The program should then output the numbers in
ascending order.
 */
 
#include <iostream>

using namespace std ;

int main ()
{
	int num1, num2, num3 ;
	
	cout << "Input three integer numbers: " ;
	cin >> num1 >> num2 >> num3 ;
	
	if (num1 > num2)												
	{ 
		int temp = num1;
		num1 = num2 ;
		num2 = temp ;
	}
	cout << "The three numbers in ascending order are: " << endl ;
	
	if (num3 <= num1)
		cout << num3 << " " << num1 << " " << num2 << " " ;	
	
	else if (num1 <= num3 && num3 <= num2)
		cout << num1 << " " << num3 << " " << num2 << " " ;		
	
	else if (num1 <= num2 && num2 <= num3)
		cout << num1 << " " << num2 << " " << num3 << " " ;
	
	return 0 ;
}
