/*Nur Airin Faqihah Binti Ruzaidi 	2011976*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

const int SIZE = 5 ;

void printList(bool array, string nam[])
{
	cout << " # | 0 1 2 3 4" << endl ;
	cout << "--------------" << endl ;  
	for (int i = 0 ; i < SIZE ; i++) {
		cout << " " << i << " | " ;
		for (int j = 0 ; j < SIZE ; j++) {
			if (array) {
				cout << " * " ;
			}
			else
				cout << " " ;
		}
		cout << endl ;
	}
	cout << endl ;
	for (int i = 0 ; i < SIZE ; i++) {
			cout << i << ": " << nam[i] << endl ;
		} 
		cout << endl ;
}


int main()
{
	bool lists[SIZE][SIZE] = {false, false, false, false, false,
							  false, false, false, false, false} ;
	string names[SIZE] ;
	int index, indexFriend ;
	char cont ;
						
	for (int i = 0 ; i < SIZE ; i++) {
		cout << "Enter the name: " ;
		cin >> names[i] ;
	}
	cout << endl ;
	do {
		printList(lists[SIZE][SIZE], names) ;
		cout << "Enter the index: " ;
		cin >> index ;
		cout << "Enter the friend of " << names[index] << " by index: " ;
		cin >> indexFriend ;
		if (index > 4 || indexFriend > 4) {
			cout << "Input is invalid" << endl ;
		}
		else {
			if (index != indexFriend){
				lists[index][indexFriend] == true ;
				lists[indexFriend][index] == true ;
			}
		}
		
		printList(lists, names) ;
		cout << "Enter any key to continue or q to end: " ;
		cin >> cont ;
	} while(cont != 'q') ;
	return 0 ;
}
