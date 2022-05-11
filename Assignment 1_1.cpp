// Nur Airin Faqihah Binti Ruzaidi 	2011976
// Write a program that prompts the user to enter five test scores 
// and then prints the average test score. 
// (Assume that the test scores are decimal numbers.)

#include <iostream>

using namespace std ;

int main()
{
	double num1, num2, num3, num4, num5 ;
	
	cout << "Input the first score : " ;
	cin >> num1 ;
	cout << "Input the second score : " ;
	cin >> num2 ;
	cout << "Input the third score : " ;
	cin >> num3 ;
	cout << "Input the fourth score : " ;
	cin >> num4 ;
	cout << "Input the fifth score : " ;
	cin >> num5 ;
	
	double avgScore = (num1 + num2 + num3 + num4 + num5) / 5 ;
	
	cout << "The average score is " << avgScore ;
	
	return 0;
}
