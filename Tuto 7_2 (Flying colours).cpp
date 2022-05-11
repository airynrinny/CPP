/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that accepts from the user the names and marks of 10 students. 
It must find the class average and print the names of students who scored more than the average.*/

#include <iostream>
#include <string>
using namespace std ;

const int MAX = 10 ; 

int main() 
{
	string names[MAX] ;
	double scores[MAX] ;
	for (int i = 0 ; i < MAX ; ++i) {
		cout << "Enter student's name and score respectively: " ;
		cin >> names[i] >> scores[i] ;
	}
	cout << endl ;
	double sum = 0 ;
	for (int i = 0 ; i < MAX ; ++i) {
		sum += scores[i] ;
	}
	double average = sum / MAX ;
	cout << "The class average is " << average << endl << endl ;
	cout << "Student with highest mark are: " << endl ;
	for (int i = 0 ; i < MAX ; ++i) { 
		if (scores[i] > average) {
			cout << names[i] << endl ;
		}
	}
	
	return 0 ;
}
