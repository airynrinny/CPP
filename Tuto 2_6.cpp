// Nur Airin Faqihah Binti Ruzaidi	2011976
// Ameera’s aunt sells tasty hot apam balik for RM 3.50 apiece at the pasar malam. Ameera is helping her by making receipts for each customer. 
// Write a program that prompts Ameera to enter the number of apam balik sold to a customer, calculates the total amount due,

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
	const double UNIT = 3.5 ;
	double total ;
	int quantity ;
	
	cout << "Quantity : " ;
	cin >> quantity ;
	cout << endl ;
	
	cout << fixed << showpoint ;
	cout << setprecision(2) ;
	
	total = quantity * UNIT ;	
	
	cout << setw(29) << setfill('*') << "*" << endl ;
	cout << "  Makcik's Tasty Apam Balik  "	<< endl ;
	cout << endl ;
	cout << setw(18) << setfill('.') << left << "Quantity" << ":" << setw(9) << setfill(' ') << " " << right << quantity << endl ; 
	cout << setw(18) << setfill('.') << left << "Unit price" << ": RM" << setw (3) << setfill(' ') << " " << right << UNIT << endl ;
	cout << setw(29) << setfill('-') << "-" << endl ;
	cout << setw(18) << setfill('.') << left << "Total price" << ": RM" <<setw(2) << setfill (' ') << " " << right << total << endl ;
	cout << endl ;
	cout << "Thank you, please come again!" << endl ;
	cout << setw(29) << setfill('*') << "*" << endl ;
	
	return 0 ;
}
