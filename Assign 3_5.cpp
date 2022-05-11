
/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Fahmi opened a coffee shop at the beach and sells coffee in three sizes: small (9 oz), medium (12 oz), 
and large (15 oz). The cost of one small cup is $1.75, one medium cup is $1.90, and one large cup is
$2.00. Write a menu-driven program that will make the coffee shop operational. Your program should
allow the user to do the following:
a. Buy coffee in any size and in any number of cups.
b. At any time show the total number of cups of each size sold.
c. At any time show the total amount of coffee sold.
d. At any time show the total money made.
Your program should consist of at least the following functions: a function to show the user how to use
the program, a function to sell coffee, a function to show the number of cups of each size sold, a function
to show the total amount of coffee sold, and a function to show the total money made. Your program
should not use any global variables and special values such as coffee cup sizes and cost of a coffee cup
must be declared as named constants.*/

#include <iostream>
#include <iomanip>
using namespace std ;

void menuDisplay()
{ 
   	cout << "\n                            Coffee Menu                            " << endl ;
	cout << "********************************************************************" << endl ;
    cout << "Small cup (9 oz): $1.75" << endl ;
    cout << "Medium cup (12 oz): $1.90" << endl ;
    cout << "Large cup (15 oz): $2.00" << endl ;
    return ; 
}

double priceToPay (int small, int medium, int large)	// price to pay by customer
{
	const double SMALL = 1.75 ;
	const double MEDIUM = 1.9 ;
	const double LARGE = 2 ;
	double cupSold = small * SMALL + medium * MEDIUM + large * LARGE ;
	cout << fixed << showpoint << setprecision(2) ;
	cout << "\t	Price to pay: $" << cupSold << endl ;
	return cupSold ;
}

void cupSold (int small, int medium, int large)		// amount sold
{
	cout << "Small cup sold: " << small << endl ;
	cout << "Medium cup sold: " << medium << endl ;
	cout << "Large cup sold: " << large << endl ;
	return ;
}

void totalIncome (double totalPrice)	// income made
{	
	cout << "Total income: $" << totalPrice ;
	return ;
}

int main()
{
	const double SMALL = 1.75 ;
	const double MEDIUM = 1.9 ;
	const double LARGE = 2 ;
	char size ;
	int num, cup, small = 0, medium = 0, large = 0, amount ;
	double price, totalSold, totalPrice = 0 ;
	
	menuDisplay() ;		// menu
	cout << endl ;
	
	do {						// ask
		cout << "S for small, M for medium, L for large" << endl ; 
		cout << "Enter coffee cup size: " ;
		cin >> size ;
		cout << "Enter amount of cups: " ;
		cin >> cup ;
		
		if (size == 'S' || size == 's') {
			price = cup * SMALL ;
			small += cup ;
		}
		
		else if (size == 'M' || size == 'm') {
			price = cup * MEDIUM ;
			medium += cup ;
		}
			
		else if (size == 'L' || size == 'l') {
			price = cup * LARGE ;
			large += cup ;
		}
		
		else 
			cout << "Invalid input" << endl ;

		totalPrice += price ;
		cout << "Do you wish to continue? Enter 1 to continue or 0 to stop: " ;
		cin >> num ; 
		cout << endl ;
	} while (num != 0) ; 
	
	cout << endl ;
	priceToPay (small, medium, large) ; 	// price to pay by customer
	cout << endl ;
	cupSold (small, medium, large) ;	// amount sold
	cout << endl ;
	totalIncome (totalPrice) ; 	// income made
	
	return 0 ;
}
