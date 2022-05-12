/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a menu-driven to simulate an ATM. It should use a structure called bankAccount to store the 
details of a bank account - account number, account name, and balance. 
The program must first ask the user to enter an account number and account name, and a starting account balance. 
It must then provide the user with the following options:

Enter 1 to deposit money
      2 to withdraw money
      3 to view account details
      4 to exit
Enter your choice: 

The program must contain the following functions:

deposit, which accepts from the user an amount to deposit and updates the account balance accordingly. 
It must take the structure bankAccount as a parameter.

withdraw, which accepts from the user an amount to withdraw and updates the account balance accordingly. 
It must take the structure bankAccount as a parameter.

viewDetails, which prints the account number and current balance of the bank account. 
It must take the structure bankAccount as a parameter.

The program must continue until the user chooses to exit the program.*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

struct bankAccount
{
	int accNumber ;
	string accName ;
	double accBalance ;
} ;

void deposit(bankAccount &) ;
void withdraw(bankAccount &) ;
void accDetails(bankAccount &) ;


int main()
{
	int choice ;
	bankAccount userAcc ;
	
	cout << "Enter account number	: " ;
	cin >> userAcc.accNumber ;
	cout << "Enter account name	: " ;
	cin >> userAcc.accName ;
	cout << "Enter starting balance	: " ;
	cin >> userAcc.accBalance ;
	
	do 
	{
		cout << "Enter   1 to deposit money" << endl 
			 << "\t2 to withdraw money" << endl
			 << "\t3 to view account details" << endl
			 << "\t4 to exit" << endl ;
		cout << "Enter your choice: " ;
		cin >> choice ;
		if (choice == 1) {
			deposit(userAcc);
		} 
		else if (choice == 2) {
			withdraw(userAcc) ;
		}
		else if (choice == 3) {
			accDetails(userAcc) ;
		}
		else if (choice == 4) 
			break ;
		else
			cout <<"Invalid choice" ;
	} while(choice != 4) ;
	
	cout << "\t Thank you for using our services!" ;
	
	return 0 ;
}

void deposit(bankAccount &acc)
{
	double amount = 0 ;
	cout << "Enter the amount to deposit: RM " ;
	cin >> amount ;
	while (amount <= 0) {
		cout << "Invalid amount" ;
		cout << "Enter the amount to deposit: RM " ;
		cin >> amount ;
	}
	acc.accBalance += amount ;
	cout << "Balance: RM " << acc.accBalance << endl ; 
}

void withdraw(bankAccount &acc)
{
	double amount = 0 ;
	cout << "Enter the amount to withdraw: RM " ;
	cin >> amount ;
	while (amount >= acc.accBalance || amount <= 0) {
		cout << "Invalid amount" << endl ;
		cout << "Enter the amount to withdraw: RM " ;
		cin >> amount ;
	}
	acc.accBalance -= amount ;
	cout << setprecision(2) << fixed ;
	cout << "The new account balance: RM " << acc.accBalance << endl ;
}

void accDetails(bankAccount &acc)
{
	cout << "Account number: " << acc.accNumber << endl ;
	cout << "Account name: " << acc.accName << endl ;
	cout << showpoint << fixed << setprecision(2) ;
 	cout << "Account balance: RM " << acc.accBalance << endl ;
}
