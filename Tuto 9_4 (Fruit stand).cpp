/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that reads from a file called "fruit_sales.txt" the names 
of five fruits and the number of kilograms sold so far. It must ask the 
user to enter the number of kilograms of each fruit sold today, 
add these to the figures that were read in, and save the new figures to the same file. 
The contents of fruit_sales.txt at the beginning should be the following:

watermelon 10
apple      42
orange     32
banana     20
guava      17*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std ;

int main() 
{
	string fruits[5] ;
	double num[5] ;
	int x ;
	ifstream inFile ; // read file
	inFile.open("fruit_sales.txt") ;
	if (inFile.fail()) {
		cout << "Failed to open the file" ;
		return 0 ;
	}
	
	for (int i = 0 ; i < 5 ; i++) {
		inFile >> fruits[i] ;
		inFile >> num[i] ;
	}
	inFile.close() ;
	
	cout << "Enter the number of kilograms of each fruit sold today" << endl << endl ;
	for (int i = 0 ; i < 5 ; i++) {
		cout << fruits[i] << ": " ;
		cin >> x ;
		num[i] += x ;
	}
	
	ofstream outFile ; // write file 
	outFile.open("fruit_sales.txt") ;
	
	if (outFile.fail()) {
		cout << "Failed to open the file" ;
		return 0 ;
	}
	
	for (int i = 0 ; i < 5 ; i++) {
		outFile << setw(11) << left << fruits[i] << left << " " <<  num[i] ;
		outFile << endl ;
	}
	outFile.close() ;
	
	return 0 ;
}
