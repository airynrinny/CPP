/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prompts the user to enter the number of students and
each student’s name and score, and finally displays the student with the lowest score and the student with the
second-lowest score.*/

#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int students, scores, lowest, secondLow, n ;
	string name, name1, name2 ;
	
	cout << "Enter number of students: " ;
	cin >> students ;
	cout << endl ;
	
	for (n = 1 ; n <= students ; n++) {
		cout << "Enter student's name: ";
		cin >> name ;
		cout << "Enter student's scores: " ;
		cin >> scores ;
		cout << endl ;
		
		if (n == 1) { 
			lowest = scores ; 
			name1 = name ;
		}
		
		else if (n == 2 && scores < lowest) { 
			secondLow = lowest ;
			name2 = name1 ;
			lowest = scores ;
			name1 = name ;
		}
		
		else if (n == 1) {
			secondLow = scores ;
			name2 = name ;
		}
		
		else if (n > 1 && scores < lowest && scores < secondLow) {
			secondLow = lowest ;
			name2 = name1 ;
			lowest = scores ;
			name1 = name ;			
		}
		
		else if (n > 1 && scores < secondLow) {
			name2 = name ;
			secondLow = scores ;
		}
	}
	
	cout << name1 << " has the lowest scores which is " << lowest << endl ;
	cout << name2 << " has second lowest scores which is " << secondLow ; 
	
	return 0 ;
}
