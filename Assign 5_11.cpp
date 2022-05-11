/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that asks for two lowercase characters. 
Pass the two entered characters, using pointers, to a function named capit(). 
The capit() function should capitalize the two letters and return the 
capitalized values to the calling function through its pointer arguments. 
The calling function should then display all four letters.*/

#include <iostream>
using namespace std ;

void capit(char *, char *) ;

int main()
{
	char  letter1, letter2 ;
	cout << "Enter two lowercase letters: " << endl ;
	cin >> letter1 >> letter2 ;
	capit(&letter1, &letter2) ;
	return 0 ;
}

void capit(char *new1, char *new2) 
{
	char old1 = *new1 ;
	char old2 = *new2 ;
	if (*new1 >= 'a' && *new1 <= 'z') {
		*new1 = (*new1 - 'a' + 'A') ;
	}
	if (*new2 >= 'a' && *new2 <= 'z') {
		*new2 = (*new2 - 'a' + 'A') ;
	}
	cout << "The letters before convert are " << old1 << " and " << old2 << endl ;
	cout << "The letters in upeercase form are " << *new1 << " and " << *new2 ;
}
