/* 
Nur Airin Faqihah Binti Ruzaidi 	
Matric No: 2011976
Lab #4 Section 1

Write a program that prompts the user to input an integer and then outputs both
the individual digits of the number and the sum of the digits.

Here is a sample run:

Enter an integer number: 3456
The individual digits are 3 4 5 6
The sum of the total individual digits is: 18

Enter an integer number: 8030
The individual digits are 8 0 3 0
The sum of the total individual digits is 11
*/

#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;
int main()
{
	int num;
	int digit;
	int sum = 0;
	int pwr = 0;
	
	cout << "Enter an integer: ";
	cin >> num;
	cout << endl;
	cout << "The digits of " << num << " are: ";
	
	if (num < 0)
		num = -num;
	//Find the highest power of 10 that divides the number

	while (num / static_cast<int>(pow(10.0, pwr)) >= 10)
		pwr++;

	while (num > 0)
	{
		digit = num / static_cast<int>(pow(10.0, pwr));
		cout << digit << " ";
		sum = sum + digit;
		num = num % static_cast<int>(pow(10.0, pwr));
		pwr--;
	}
	
	if (pwr != -1) { //Either num is 0 or there are trailing zeros in num
		while (pwr != -1)
		{
			cout << 0 << " ";
			pwr--;
		}
	}
	cout << endl;
	cout << "The sum of the digits = " << sum << endl;
		
	return 0;
}
