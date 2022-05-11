/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that reads a student name followed by five test scores. 
The program should output the student name, the five test scores, and the average test score. 
Output the average test score with two decimal places. The data to be read is stored in a
file called test.txt. The output should be stored in a file called testavg.out.
Input A file containing the student name and the five test scores. A sample input is:

Andrew Miller 87.50 89 65.75 37 98.50

Output The student name, the five test scores, and the average of the five test scores, saved to a
file.*/

#include <iostream>
#include <fstream>
#include <cstdlib> // exit
#include <string>
using namespace std ;

int main()
{
	string fname, lname ;
	double scores[5], average, sum = 0 ;
	ifstream inFile ;
	inFile.open("test.txt");
	
	if (inFile.fail()) {
		cout << "Failed to open the fail" ;
		exit(1) ;
	}
	
	cin >> fname >> lname ;
	for (int i = 0 ; i < 5 ; i++) {
			inFile >> scores[i] ; 
			sum += scores[i] ; 
		}
	inFile.close() ;
	average = sum / 5 ;
	
	ofstream outFile ;
	outFile.open("testavg.txt") ;
	if (outFile.fail()) {
		cout << "Failed to open the fail" ;
		exit(1) ;
	}
	outFile << fname << " " << lname << " " ;
	for (int i = 0 ; i < 5 ; i++) {
			outFile << scores[i] << " " ; 
		}
	outFile << endl << "Average test score: " << average ; 
	return 0 ;
}
