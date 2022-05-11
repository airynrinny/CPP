// A program that asks the user to enter three numbers. 
// It must compute and print the sum and average of the three numbers.

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	double average, sum;
	
	cout << "Input the first number : " ;
	cin >> num1 ;
	
	cout << "Input the second number : ";
	cin >> num2;
	
	cout << "Input the third number : " ;
	cin >> num3;
	sum = num1 + num2 + num3;
	average = sum / 3;
	
	cout << "The sum is " << sum << " and the average is " << average ;
	
	return 0;
	
}
