/*Nur Airin Faqihah Binti Ruzaidi 	2011976*/

#include <iostream>
using namespace std ;

int main()
{
	int numGuest, duration ;
	double discount, total ;
	while(numGuest >= 1 || numGuest <= 6) {  
		cout << "Enter number of guest(s): " ;
		cin >> numGuest ;
		if (numGuest < 1 || numGuest > 6) {
			cout << "Invalid entry. Please enter a value between 1-6 people only." << endl ;
		}
		else 
			break ;
	} 
	
	while (duration >= 1 || duration <= 7) { 
		cout << "Enter duration of stay: " ;
		cin >> duration ;
		if (duration < 1 || duration > 7) {
			cout << "Invalid entry. Duration of stay must be at least 1 and not more than 7." << endl ;
		}
		else 
			break ;	
	} 
	cout << endl ;
	switch (numGuest) {
		case 1: 
		case 2: 
			if (duration <= 2) {
				discount = 300 * 0.87 ;
				total = duration * discount ;
				cout << "You have selected Package M ." << endl << endl
					 << "You are given a 13 % discount on hotel reservation." << endl << endl ;		 
			}
			else if (duration >= 3 || duration <= 5) {
				discount = 400 * 0.85 ;
				total = duration * discount ;
				cout << "You have selected Package N ." << endl << endl
				 	 << "You are given a 15 % discount on hotel reservation." << endl << endl ;
			}
			else if (duration >= 6 || duration <= 7) {
				discount = 500 * 0.83 ;
				total = duration * discount ;
				cout << "You have selected Package O ." << endl << endl
				 	 << "You are given a 17 % discount on hotel reservation." << endl << endl ;
			}
			break ;
		case 3: 
		case 4:
			if (duration <= 2) {
				discount = 400 * 0.86 ;
				total = duration * discount ;
				cout << "You have selected Package P ." << endl << endl
					 << "You are given a 14 % discount on hotel reservation." << endl << endl ;		 
			}
			else if (duration >= 3 || duration <= 5) {
				discount = 500 * 0.84 ;
				total = duration * discount ;
				cout << "You have selected Package Q ." << endl << endl
				 	 << "You are given a 16 % discount on hotel reservation." << endl << endl ;
			}
			else if (duration >= 6 || duration <= 7) {
				discount = 600 * 0.82 ;
				total = duration * discount ;
				cout << "You have selected Package R ." << endl << endl
				 	 << "You are given a 18 % discount on hotel reservation." << endl << endl ;
			}
			break ;
		case 5:
		case 6: 
			if (duration <= 2) {
				discount = 700 * 0.855 ;
				total = duration * discount ;
				cout << "You have selected Package S ." << endl << endl
					 << "You are given a 14.5 % discount on hotel reservation." << endl << endl ;		 
			}
			else if (duration > 2 || duration <= 5) {
				discount = 800 * 0.835 ;
				total = duration * discount ;
				cout << "You have selected Package T ." << endl << endl
				 	 << "You are given a 16.5 % discount on hotel reservation." << endl << endl  ;
			}
			else if (duration > 5 || duration <= 7) {
				discount = 850 * 0.815 ;
				total = duration * discount ;
				cout << "You have selected Package U ." << endl << endl
				 	 << "You are given a 18.5 % discount on hotel reservation." << endl << endl ;
			}
			break ;		
	} ;
	cout << endl ;
	cout << "The total price for this package after discount is RM " << discount << endl << endl 
		 << "The total duration of stay in this package is " << duration << " days" << endl << endl 
		 << "The total amount to be paid for this package after discount is RM " << total ; 
	   
	return 0 ;
}
