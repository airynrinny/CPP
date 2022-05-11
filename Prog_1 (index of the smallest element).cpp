/*Nur Airin Faqihah Bonto Ruzaidi 	2011976
Write a function that returns the index of the smallest
element in an array of integers. If the number of such elements is greater than 1, return the
smallest index. Use the following header:
int indexOfSmallestElement (int [] array)*/

#include <iostream>
using namespace std;

int indexOfSmallestElement(int num[], int size)
{
	int check = num[0], index = 0 ;
	for (int i = 1 ; i < size ; i++) {
		if (check > num[i]) {
			check = num[i] ;
			index = i ;
		}
	}
	return index ;
}

int main()
{
	int elements, values[elements] ;
	cout << "Number of elements: " ;
	cin >> elements ;
	cout << "Enter the values: " << endl ;
	for (int i = 0 ; i < elements ; i++) {
		cin >> values[i] ;
	}
	if (elements > 1) {
		cout << "The smallest index is " << indexOfSmallestElement(values, elements) ;
	}
	else {
		cout << "The index is 0" ;
	}
	return 0 ;
}
