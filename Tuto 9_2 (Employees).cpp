/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that uses struct to store employee details. 
It must define a struct called Employee with the following details: 
first name, last name, employee ID (integer), wage per hour, and hours worked. 
The program must ask the user to enter the details of five employees and then print the following details for each employee:

Employee ID       	  Employee name  Total wage
        998          	   Joan Doe      130.00
        976                Jack Doe      144.00
        956                John Doe      100.00

Total wages for each employee is calculated by multiplying their wage per hour with hours worked.*/

#include <iostream> 
#include <string>
#include <iomanip>
using namespace std ;

const int EMP = 5 ;

struct Employee
{
	string fName ;
	string lName ; 
	int id ;
	double wage ;
	int hours ;
} ;

int main()
{
	Employee details[EMP] ;
	double totalWages[EMP] ;
	
	for (int i = 0 ; i < EMP ; i++) {
		cout << "Details of the Employee " << i + 1 << ": " << endl ;
		cout << "Enter first name: " ;
		cin >> details[i].fName ;
		cout << "Enter the last name: " ;
		cin >> details[i].lName ;
		cout << "Enter the ID number: " ;
		cin >> details[i].id ;
		cout << "Enter the wage per hour: " ;
		cin >> details[i].wage ;
		cout << "Enter the hours worked: " ;
		cin >> details[i].hours ; 
		cout << endl ;
	}
	
	for (int i = 0 ; i < EMP ; i++) {
		totalWages[i] = details[i].wage * details[i].hours ;
	}
	
	cout << showpoint << fixed << setprecision(2)  ;
	cout <<  "Employee ID           Employee name  Total wage" << endl ;
	for (int i = 0 ; i < EMP ; i++) {
		cout << right ;
		cout << setw(11) << details[i].id ;
		cout << setw(20) << details[i].fName << " " << details[i].lName ;
		cout << setw(12) << totalWages[i] << endl ; 
	}
	
	return 0 ;
}
