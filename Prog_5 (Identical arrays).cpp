/*Nur Airin Faqihah Binti Ruzaidi 	2011976
The arrays list1 and list2 are identical if they have the same contents. 
Write a function that returns true if list1 and list2 are identical, using the following header:

bool equals(int [] list1, int [] list2)

Write a test program that prompts the user to enter two lists of integers and displays whether
the two are identical. Here are the sample runs. Note that the first number in the input
indicates the number of the elements in the list. This number is not part of the list.

Here is sample run

Enter the number of elements in the first list 5
Enter element 1 of the list: 2
Enter element 2 of the list: 5
Enter element 3 of the list: 6
Enter element 4 of the list: 6
Enter element 5 of the list: 1

Enter the number of elements in the second list 5
Enter element 1 of the list: 5
Enter element 2 of the list: 2
Enter element 3 of the list: 6
Enter element 4 of the list: 1
Enter element 5 of the list: 6

Two lists are identical

Enter the number of elements in the first list 5
Enter element 1 of the list: 5
Enter element 2 of the list: 5
Enter element 3 of the list: 6
Enter element 4 of the list: 6
Enter element 5 of the list: 1

Enter the number of elements in the second list 5
Enter element 1 of the list: 2
Enter element 2 of the list: 5
Enter element 3 of the list: 6
Enter element 4 of the list: 1
Enter element 5 of the list: 6

Two lists are not identical*/

#include <iostream>
using namespace std ;

bool equals(int list1[], int list2[], int count) 
{
	int same = 0, diff = 0 ;
	//list1
	for (int i = 0 ; i < count - 1 ; i++) { 
		int min_val1 = list1[i] ;
		int min_index1 = i ;
		for (int j = i + 1 ; j < count ; j++) {
			if (list1[j] < min_val1) {
				min_val1 = list1[j] ;
				min_index1 = j ;
			}
		}
		int temp1 = list1[i] ;
		list1[i] = list1[min_index1] ;
		list1[min_index1] = temp1 ; 
	}
	//list2
	for (int i = 0 ; i < count - 1 ; i++) { 
		int min_val2 = list2[i] ;
		int min_index2 = i ;
		for (int j = i + 1 ; j < count ; j++) {
			if (list2[j] < min_val2) {
				min_val2 = list2[j] ;
				min_index2 = j ;
			}
		}
		int temp2 = list2[i] ;
		list2[i] = list2[min_index2] ;
		list2[min_index2] = temp2 ; 
	}
	
	for (int i = 0 ; i < count ; i++) {
		for (int j = 0 ; j < count ; j++) {
			if (list1[i] == list2[j]) {
				same++ ;
			}
			else 
				diff++ ;
		}
	}
	if (same == count) 
		return true ;
	else
		return false ;
}

int main()
{
	int size, array1[size], array2[size] ;
	
	cout << "Enter the number of elements in the first list " ;
	cin >> size ;
	
	for (int i = 0 ; i < size ; i++) {
		cout << "Enter element" << i + 1 << " of the list: " ;
		cin >> array1[i] ;
	}
	cout << endl ;
	
	cout << "Enter the number of elements in the second list " << size << endl ;
	for (int i = 0 ; i < size ; i++) {
		cout << "Enter element" << i + 1 << " of the list: " ;
		cin >> array2[i] ;
	}
	cout << endl ;
		
	if (equals(array1, array2, size))
		cout << "Two lists are identical" ;
	else 
		cout << "Two lists are not identical" ; 
	
	return 0 ;
}
