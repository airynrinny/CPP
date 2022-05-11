/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Wrte a program that reads students' names followed by their test scores. 
The program should output each student's name followed by the test scores 
and the relevant grade. It should also find and print the highest test score 
and the name of the students having the highest test score. Student data should 
be stored in a struct variable of type studentType, which has four components: 
studentFName and studentLName of type string, testScore of type int 
(testScore is between 0 and 100), and grade of type char. 
Suppose that the class has 20 students. Use an array of 20 components of type studentType. 
Your program must contain at least the following functions:

a)	A function to read the students' data into the array.
b)	A function to assign the relevant grade to each student.
c)	A function to find the highest test score.
d)	A function to print the names of the students having the highest test score.

Your program must output each student's name in this form: last name followed by a comma, 
followed by a space, followed by the first name; the name must be left justified. 
Moreover, other than declaring the variables and opening the input and output files, 
the function main should only be a collection of function calls.*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std ;

const int SIZE = 20 ;

struct studentType
{
	string fName ;
	string lName ;
	int testScore ;
	char grade ;
} ;

void getData(studentType students[], int SIZE) ;
void grade(studentType students[], int SIZE) ;
int highest(studentType students[], int SIZE) ;
void printHighest(studentType students[], int SIZE) ;

int main()
{	
	studentType scores[SIZE] ;
		
	getData(scores, SIZE) ;
	grade(scores, SIZE) ;
	highest(scores, SIZE) ;
	printHighest(scores, SIZE) ;	
	return 0 ;
}

void getData(studentType students[], int SIZE)
{
	ifstream inFile ;
	inFile.open("Students_ScoresData.txt") ;

	if (inFile.fail()) {
		cout << "Failed to open the file" ;
		exit(1) ;
	}
	
	for (int i = 0 ; i < SIZE ; i++) {
		inFile >> students[i].fName ; 
		inFile >> students[i].lName ; 
		inFile >> students[i].testScore ;
	}
	inFile.close() ;
}

void grade(studentType students[], int SIZE)
{
	for (int i = 0 ; i < SIZE ; i++) {
		if (students[i].testScore <= 100 && students[i].testScore >= 80)
			students[i].grade = 'A' ;
		else if (students[i].testScore >= 70)
			students[i].grade = 'B' ;
		else if (students[i].testScore >= 60)
			students[i].grade = 'C' ;
		else if (students[i].testScore >= 50)
			students[i].grade = 'D' ;
		else if (students[i].testScore >= 40)
			students[i].grade = 'E' ;
		else
			students[i].grade = 'F' ;
	}
}

int highest(studentType students[], int SIZE) 
{
	int high_score = students[0].testScore;
	
	for (int i = 1; i < SIZE ; i++){
		
		if (students[i].testScore > high_score)
			high_score = students[i].testScore;
	}
	return high_score ;
}

void printHighest(studentType students[], int SIZE)
{
	int index ;
	index = highest(students, SIZE) ;
	ofstream outFile ;
	outFile.open("Students_ScoresOut.txt") ;

	if (outFile.fail()) {
		cout << "Failed to open the file" ;
		exit(1) ;
	}
	
	outFile << "Students name\t\tGrades\t\t\tScores" << endl ;
	
	for (int i = 0 ; i < SIZE ; i++) {
		outFile << students[i].fName << " " << students[i].lName ;
		outFile << "\t\t\t" << students[i].grade << "\t\t\t" << students[i].testScore << endl ;
	}
	outFile << endl ;
	outFile << "The student with highest score is " << students[index].fName << " " << students[index].lName << " with the score " << students[index].testScore ;
	outFile.close() ;	
}
