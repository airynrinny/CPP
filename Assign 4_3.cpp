/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program to calculate students’ average test scores and their grades. You may assume the
following input data:

Johnson 85 83 77 91 76
Aniston 80 90 95 93 48
Cooper 78 81 11 90 73
Gupta 92 83 30 69 87
Blair 23 45 96 38 59
Clark 60 85 45 39 67
Kennedy 77 31 52 74 83
Bronson 93 94 89 77 97
Sunny 79 85 28 93 82
Smith 85 72 49 75 63

Use three arrays: a one-dimensional array to store the students’ names, a (parallel) two-dimensional
array to store the test scores, and a parallel one-dimensional array to store grades. Your program must
contain at least the following functions: a function to read and store data into two arrays, a function to
calculate the average test score and grade, and a function to output the results. Have your program also
output the class average.*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std ;

/*string names[10] ;
	double testScores[10][6] ;
	char grades[10] ;*/
void getData(ifstream& inf, string n[], double scores[][6], int size) 
{
	for (int i = 0 ; i < size ; i++) {
		inf >> n[i] ; 	//same as cin statement
		for (int j = 0 ; j < 5 ; j++) {
			inf >> scores[i][j] ;
		}
		scores[i][5] = 0.0 ; 	//average value
	}
	return ;
}

void calAverage (double scores[][6], int size)
{
	double sum = 0.0 ;
	for (int i = 0 ; i < size ; i++) {
		for (int j = 0 ; j < 5 ; j++) {
			sum = sum + scores[i][j] ;
			scores[i][5] = sum / 5 ; 	//average
		}
	}
	return ;
}

void calGrades(double scores[][6], char grd[], int size) 
{
	for (int i = 0 ; i < size ; i++) {
		if (scores[i][5] >= 80)
			grd[i] = 'A' ;
		else if (scores[i][5] >= 70)
			grd[i] = 'B' ;
		else if (scores[i][5] >= 60) 
			grd[i] = 'C' ;
		else if (scores[i][5] >= 50)
			grd[i] = 'D' ;
		else if (scores[i][5] >= 40)
			grd[i] = 'E' ;
		else
			grd[i] = 'F' ;
	}
	return ;
} 

void print(string n[], double scores[][6], char grd[], int size) 
{
	double sum = 0.0 ;
	for (int i = 0 ; i < size ; i++) {
		cout << "\t Name: " << n[i] << endl ;
		for (int j = 0 ; j < 5 ; j++) {
			cout << "\tTest " << i + 1 << ": " << scores[i][j] << endl ;
		}
		cout << "\t Average: " << scores[i][5] << endl ;
		cout << "\t Grades: " << grd[i] << endl ;
		cout << endl ;
		sum = sum + scores[i][5] ;
	}
	cout << endl << endl ;
	cout << "\t \t Class average: " << sum / size << endl ;
	return ; 
}

int main()
{
	string names[10] ;
	double testScores[10][6] ;
	char grades[10] ;
	
	ifstream inFile ;
	inFile.open("Data_Assign_4_Q3.txt") ;
	
	if (! inFile) {
		cout << "Unable to open the input file: Data_Assign_4_Q3.txt" << endl ;
		cout << " Program terminates" << endl ;
		return 1 ;
	}
	
	cout << fixed << showpoint << setprecision(2) ;
	
	getData(inFile, names, testScores, 10) ;
	calAverage (testScores, 10) ;
	calGrades(testScores, grades, 10) ; 
	print(names, testScores, grades, 10) ;

	inFile.close() ;
	
	return 0 ;
}
