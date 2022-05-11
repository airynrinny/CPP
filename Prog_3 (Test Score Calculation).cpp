/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that reads an unspecified number of scores
and determines how many scores are above or equal to the average and how many scores
are below the average. Enter a negative number to signify the end of the input. Assume that
the maximum number of scores is 100.*/

#include <iostream>
using namespace std ;

int main() 
{
	double scores[100], sum = 0.0, average ;
	int above = 0, below = 0, equal = 0, index ;
	for (int i = 0 ; i < 100 ; i++) {
		cout << "Enter scores (enter negative number to stop): " ;
		cin >> scores[i] ;
		sum += scores[i] ;
		if (scores[i] < 0) {
			index = i ;
			sum = sum - scores[i] ;
			break ;
		} 
	}
	average = sum / (index) ;
	for (int i = 0 ; i <= index - 1 ; i++) {
		if (scores[i] > average)
			above++ ;
		else if (scores[i] < average)
			below++ ;
		else if (scores[i] == average) 
			equal++ ;
	}
	cout << "Number of scores above the average: " << above << endl ;
	cout << "Number of scores equal to average: " << equal << endl ;
	cout << "Number of scores below the average: " << below << endl ;
	return 0 ;
}
