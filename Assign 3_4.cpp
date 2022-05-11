/*Nur Airin Faqihah Binti Ruzaidi 	2011976
The cost to become a member of a fitness center is as follows:
(a) the senior citizens discount is 30%;
(b) if the membership is bought and paid for 12 or more months, the discount is 15%; and
(c) if more than five personal training sessions are bought and paid for, the discount on each session is 20%.
Write a menu-driven program that determines the cost of a new membership. Your program must
contain a function that displays the general information about the fitness center and its charges,
a function to get all of the necessary information to determine the membership cost, and a function to
determine the membership cost.
Use appropriate parameters to pass information in and out of a function. (Do not use any global
variables.)*/

#include <iostream>
#include <iomanip>
using namespace std ;

void menuDisplay()
{ 
   	cout << "\n                            Fitness Menu                            " << endl ;
	cout << "********************************************************************" << endl ;
    cout << "The cost of a monthly membership is RM20" << endl ;
    cout << "The cost of each personal training session is RM15" << endl ;
    cout << "Senior citizen discount is 30%" << endl ;
	cout << "If membership is bought and paid for 12 or more months, 15% discount" << endl ;
    cout << "If more than 5 personal training sessions are paid, the discount for each session is 20%" << endl ;
    cout << "********************************************************************\n" << endl ;
    return ; 
}
 
double pricing()
{ 
   	double price = 20;
   	double discount1, senior, discount2, total = 0 ;
   	int sessions, months ;
   	char ask ;
 	
	cout << "Have you paid for more than 12 months? Type 'Y' for yes or type 'N' for no: " ;
	cin >> ask ;
	cout << endl ;
   	if(ask == 'Y') {
   		cout << "Enter number of months: " ;
		cin >> months ;
		cout << endl ;
        discount1 = price * months * 0.85 ;
        total += discount1 ;
   }
   	
   	cout << "Are you a senior citizen? Type 'Y' for yes or type 'N' for no: " ;
   	cin >> ask ;
	cout << endl ;   	
	if(ask == 'Y') {
    	senior = price * months * 0.7 ;
		total = senior ;
 	}

   	cout << "Have you received more than 5 personal training sessions? Type 'Y' for yes or type 'N' for no: " ;
	cin >> ask ;
	cout << endl ;
	if(ask == 'Y') {
		cout << "Enter number of personal training sessions: " ;
		cin >> sessions ;
		cout << endl ;
    	discount2 = sessions * (15 * 0.8) ;
    	total += discount2 ;
	}
	
	return total ;
}

int main()
{
	menuDisplay() ;
	double pricing() ;
	cout << fixed << showpoint << setprecision(2) ;	    
    cout << "Your total cost for new membership is RM" << pricing() ; 
    return 0 ;
}
