#include <iostream>

using namespace std ;

int main()
{
	const double EPF = 0.11 ;
	const double SOCSO = 0.05 ;
	int salary ;
	double nettSalary, epf, socso ;
	
	cout << "Enter your Salary : $ " ; 
	cin >> salary ;
	
	cout << "Details" << endl;
	
	nettSalary = salary - (salary * SOCSO) - (salary * EPF) ;
	epf = salary * EPF ;
	socso = salary * SOCSO ;
	cout << "Salary: $ " << salary << endl ; 
	cout << "EPF: $ " << epf << endl ;
	cout << "SOCSO: $ " << socso << endl ;
	cout << "Nett Salary: $ " << nettSalary;
	
	
	
	return 0 ;
}
