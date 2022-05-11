/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that accepts lines of text from the keyboard and writes each
line to a file named text.dat until an empty line is entered. An empty line is a 
line with no text that’s created by pressing the Enter (or Return) key.*/

#include <iostream>
#include <fstream>
#include <cstdlib> // exit
#include <string>
using namespace std ;

int main()
{
	string filename = "text.txt" ;
	string lines ;
	ofstream outFile;
	outFile.open(filename.c_str()) ;
	
	if (outFile.fail()) {
		cout << "Failed to open the fail" ;
		exit(1) ;
	}
	
	cout << "Enter any lines, press enter to stop" << endl ;
	getline(cin, lines) ;
		while (lines != "") {
			outFile << lines << endl ;
			getline(cin, lines) ;
		}
	outFile.close() ;
	cout << "End of data input" << endl ;
	cout << "The file has been written" ;
	return 0 ;
}
