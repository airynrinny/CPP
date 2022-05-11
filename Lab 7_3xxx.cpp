/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a C++ program that asks for two lowercase characters. Pass the two
entered characters, using pointers, to a function named capit(). The capit() function should
capitalize the two letters and return the capitalized values to the calling function through its
pointer arguments. The calling function should then display all four letters.*/

#include <iostream>
using namespace std;

const char SIZE = 2;

char capit(char *letters)
{

	
}

int main()
{
	char letters[SIZE];
	cout << "Enter first lowercase letter: ";
	cin >> letters[1] ;
	}
	
	return 0; 
}



/*
#include <iostream>
using namespace std;
void capit ( char*, char*);
int main(){
	 char alpbt1 , alpbt2;
	 cout << "Enter two lowercase characters: ";
	 cin >> alpbt1 >> alpbt2;
	 
	 capit (&alpbt1, &alpbt2);
}

void capit ( char *alpbt1, char *alpbt2){
	
	putchar(toupper (*alpbt1));
	cout << endl;
	putchar(toupper (*alpbt2));
	cout << endl;
	cout << *alpbt1 << endl << *alpbt2;
}
*/
