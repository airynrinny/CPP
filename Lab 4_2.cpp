/* 
Nur Airin Faqihah Binti Ruzaidi 	
Matric No: 2011976
Lab #4 Section 1

(Pass or fail) Write a program that prompts a student to enter a Java score. If the
score is greater or equal to 60, display “you pass the exam”; otherwise, display “you don’t pass
the exam”. Your program ends with input -1.

Here is a sample run:

Enter your score: 80
You pass the exam.

Enter your score: 59
You don’t pass the exam.

Enter your score: -1
No numbers are entered except 0
*/

#include <iostream>
using namespace std ;

int main()
{
	int score ;
	char exit ;
	
	do {
		cout << "Enter the score: " ;
		cin >> score ;
	
		if (score >= 60){
			cout << "you pass the exam" << endl ;
			cout << endl ;
		}
		
		else if (score < 60 && score >= 0){
			cout << "you don't pass the exam" << endl ;
			cout << endl ;
			
		if (score = -1){
			cout << "Do you wish to continue? If yes, press 'y', if no press 'n' or 'N' to exit" << endl ;
			cin >> exit ;
			cout << endl ;
		}
		
		else 
			break ;
		}			
		
		} while (exit != 'n' && exit != 'N') ;
		
		
		
		
	return 0 ;
}
