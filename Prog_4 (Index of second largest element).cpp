/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function that returns the index of the second
largest element in an array of integers. Use the following header:
int index_Of_Second_Largest_Element(int[] array)
A sample run:
4 3 6 7 9 8 10
The index of the second largest element is 4*/

#include <iostream>
using namespace std ;

const int SIZE = 6 ;

int index_Of_Second_Largest_Element(int array[])
{
	int large = array[0], seclarge = array[1], indexlarge, indexseclarge ;
	
	if (array[0] > array[1]) {
		large = array[0] ;
		seclarge = array[1] ;
		indexlarge = 0 ;
		indexseclarge = 1 ;
	}
	else {
		large = array[1] ;
		seclarge = array[0] ;
		indexlarge = 1 ;
		indexseclarge = 0 ;
	}
	
	for (int i = 2 ; i < SIZE ; i++) {
		if (array[i] > large) {
        	indexseclarge = indexlarge ;
        	indexlarge = i ;
    	}
        else if (array[i] > seclarge && array[i] != large) {
        	indexseclarge = i ;
      	}
	}
	return indexseclarge ;
}

int main() 
{
	int values[SIZE];
	cout << "Enter 6 integers: " << endl ;
	for (int i=0; i<SIZE; i++) {
		cin >> values[i];  
	}
	cout << endl << "The index of second largest element is " << index_Of_Second_Largest_Element(values);
	return 0 ;
}
