/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function called rollDice that simulates the rolling of a die by returning a random integer in the interval [1, 6].
*/
 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;
 
int dice()
{
 	int num = rand() % 6 + 1 ;
	return num ;
}
 
int main() 
{
	srand(time(NULL));
	cout << "\t" << dice() << endl ; 
	cout << "\t" << dice() << endl ;
	cout << "\t" << dice() << endl ;
	cout << "\t" << dice() << endl ; 
	cout << "\t" << dice() << endl ; 
	cout << "\t" << dice() << endl ; 
	cout << "\t" << dice() << endl ; 
	return 0 ;
}
