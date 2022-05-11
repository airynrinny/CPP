/**
* Nur Airin Faqihah Binti Ruzaidi
* Matric No. : 2011976
* Lab #1 Section 1
*/

#include <iostream>

using namespace std;

int main()
{
	int sum, num, num1, num2, num3; 
	
	cout << "Input any number between 0 to 1000 : " ;
	cin >> num;
	
	num1 = num%10;
 	num2 = (num/10)%10; 
 	num3 = (num/10)/10;
 	sum = num1 + num2 + num3;
 
	cout << "The sum of the digits are " << sum << endl;
	
	return 0;
}


 
