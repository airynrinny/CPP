/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Assume the definition of Exercise 2, which defines the struct computerType. 
Write a program that declares a variable of type computerType, 
prompts the user to input data about a computer, and outputs computer's data.*/

#include <iostream>
using namespace std ; 

struct computerType
{
	string manufacturer ;
	string model ;
	string processor; 
	int ram ;
	int hardDrive ;
	int year ;
	double price ; 
} ;

int main()
{
	computerType details ;
	
	cout << "\t Data about your computer" << endl << endl ;
	cout << "Manufacturer: " ;
	getline(cin, details.manufacturer) ;
	cout << "Model type: " ;
	getline(cin, details.model) ;
	cout << "Processor type: " ;
	getline(cin, details.processor) ;
	cout << "RAM in GB: " ;
	cin >> details.ram ;
	cout << "Hard drive size in GB: " ;
	cin >> details.hardDrive ;
	cout << "Year the computer was built: " ;
	cin >> details.year ;
	cout << "Price: " ;
	cin >> details.price ;
	
	cout << endl << "\t Your computers details are: " << endl << endl ;
	cout << "Manufactured by " << details.manufacturer << endl
		 << "Model type is " << details.model << endl 
	     << "Processor type is " << details.model << endl 
	     << "RAM is " << details.ram << " GB" << endl 
	     << "Hard drive size is " << details.hardDrive << " GB" << endl
	     << "Computer was built in year " << details.year << endl 
	     << "The price is RM " << details.price ;
	return 0 ;
}
