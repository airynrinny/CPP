/*Nur Airin Faqihah Binti Ruzaidi 	
Sample Lab Test 1 Question 2*/

#include <iostream>
using namespace std ;

int main()
{
	int num ;
	double average, total = 0;
	
		cout << "Please enter the ending value of the series: " ;
		cin >> num ;
	
		if (num > 0) {
			for (int i = 1 ; i <= num ; i++) {
				total = total + i ;
				for (int j = 1 ; j <= i ; j++) {
					cout << j << " "; 
				}
				cout << endl ;
			}
			average = total / num ;
			cout << "The average of the last series = " << average << endl ;
		}
	
		else {
			cout << "The value just entered is invalid." << endl << endl ;
			cout << "Please enter a value greater than 0." << endl ;
		}
	return 0 ;
}
