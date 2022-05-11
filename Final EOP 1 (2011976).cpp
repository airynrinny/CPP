/*Nur Airin Faqihah Binti Ruzaidi 	2011976*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std ;

struct Details {
	string name ;
	string descrip ;
	double rate ;
	int hour ;
	double bill ;
};

const int SIZE = 10 ;

void read_data(Details *ptr, int SIZE) ;
void calcNet(Details *ptr, int SIZE) ;
void print_data(Details *ptr, int SIZE) ;

int main()
{
	Details *ptr, customer[SIZE] ;
	ptr = customer ;
	read_data(ptr, SIZE ) ;
	calcNet(ptr, SIZE) ;
	print_data(ptr, SIZE) ;
	return 0 ;
}

void read_data(Details *ptr, int SIZE ) 
{
	ifstream inFile ;
	inFile.open("customer_data.txt") ;
	if(inFile.fail()) {
		cout << "Unable to open file" ;
		exit(1) ;
	}
	cout << "The customers' data being read........" << endl << endl ;
	
	for(int i = 0 ; i < SIZE ; i++) {
		inFile >> ptr[i].name ;
		inFile >> ptr[i].descrip ;
		inFile >> ptr[i].rate ;
		inFile >> ptr[i].hour ;
	}
	inFile.close() ;
	cout << "The customers' data have been read successfully." << endl << endl ;
}

void calcNet(Details *ptr, int SIZE)
{
	for(int i = 0 ; i < SIZE ; i++) {
		ptr[i].bill = ptr[i].rate * ptr[i].hour ;
	}
}

void print_data(Details *ptr, int SIZE)
{
	cout << "Below is the customer's details report including the payment...." << endl << endl ;
	cout << setw(15) << setfill(' ') << left << "Name" ;
	cout << setw(15) << setfill(' ') << left << "Plan" ; 
	cout << setw(15) << setfill(' ') << left << "Rate/Hour" ;
	cout << setw(15) << setfill(' ') << left << "Hours" ;
	cout << setw(11) << setfill(' ') << left << "Payment" ;
	cout << endl ;
	cout << setw(71) << setfill('-') << "-" ;
	cout << endl ;
		
	for(int i = 0 ; i < SIZE ; i++) {
		cout << setw(15) << setfill(' ') << left << ptr[i].name ;
		cout << setw(15) << setfill(' ') << left << ptr[i].descrip ;
		cout << setw(15) << setfill(' ') << left << ptr[i].rate ;
		cout << setw(15) << setfill(' ') << left << ptr[i].hour ;
		cout << setw(11) << setfill(' ') << left << ptr[i].bill ;
		cout << endl ;
	}	
}
