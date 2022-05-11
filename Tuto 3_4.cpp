/*
Nur Airin Faqihah Binti Ruzaidi 	2011976
Rania's mother is a primary school teacher and needs her help in assigning grades. She assigns grades to her students using the following criteria:
Marks	Grade
81 - 100	A
71 - 80		B
61 - 70		C
51 - 60		D
0 - 50		F
Write a program that lets Rania's mother enter the marks for a student and prints the grade for that student. 
*/

#include <iostream>

using namespace std ;

int main()
{
	int marks ;
	
	cout << "Input the marks: " ;
	cin >> marks ;
	
	if (marks >= 0 && marks <= 50)
	{
		cout << "The grade is F" ; 
	}
	
	if (marks >= 51 && marks <= 60)
	{
		cout << "The grade is D" ; 
	}

	if (marks >= 61 && marks <= 70)
	{
		cout << "The grade is C" ; 
	}

	if (marks >= 71 && marks <= 80)
	{
		cout << "The grade is B" ; 
	}
	
	if (marks >= 81 && marks <= 100)
	{
		cout << "The grade is A" ; 
	}
	
	else 
	{
		cout << "Invalid marks" ;
	}
	
	return 0 ;
}
