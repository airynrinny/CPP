/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Develop a Java program that determines the total tax for each of four citizens. 
The tax rate is 10% for earnings up to 50,000 RM earned by each citizen and 15% for all earnings in excess of that ceiling. 
You are given a list with the citizens’ names and their earnings in a given year. 
Your program should input this information for each citizen, then determine and display the citizen’s total tax. 
Use class Scanner to input the data.*/

#include <iostream> 
#include <string>
using namespace std ;

int main()
{
	const double TAX = 0.1 ;
	const double TAX_EXCEED = 0.15 ;
	double salary1, salary2, salary3, salary4 ;
	double total1, total2, total3, total4 ;
	string name1, name2, name3, name4 ;
	
	cout << "Enter the name and salary for citizen 1 : " ;
	cin >> name1 >> salary1 ;
	cout << "Enter the name and salary for citizen 2 : " ;
	cin >> name2 >> salary2 ;
	cout << "Enter the name and salary for citizen 3 : " ;
	cin >> name3 >> salary3 ;
	cout << "Enter the name and salary for citizen 4 : " ;
	cin >> name4 >> salary4 ;
	
	if (salary1 > 50000)
		total1 = salary1 * TAX_EXCEED ;
	else if (salary1 < 50000)
		total1 = salary1 * TAX ;
	
	if (salary2 > 50000)
		total2 = salary2 * TAX_EXCEED ;
	else if (salary2 < 50000)
		total2 = salary2 * TAX ;
	
	if (salary3 > 50000)
		total3 = salary3 * TAX_EXCEED ;
	else if (salary3 < 50000)
		total3 = salary3 * TAX ;
	
	if (salary4 > 50000)
		total4 = salary4 * TAX_EXCEED ;
	else if (salary4 < 50000)
		total4 = salary4 * TAX ;
	
	cout << endl ;
	cout << "Total tax for " << name1 << " is " << total1 << endl ;
	cout << endl ;
	cout << "Total tax for " << name2 << " is " << total2 << endl ;
	cout << endl ;
	cout << "Total tax for " << name3 << " is " << total3 << endl ;
	cout << endl ;
	cout << "Total tax for " << name4 << " is " << total4 << endl ;
	cout << endl ;
	
	return 0 ;
}
