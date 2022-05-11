/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Use nested loops that display the following pattern in three separate programs*/

#include <iostream>
using namespace std ;

int main()
{
	int n = 6 ;
	
    //Pattern 1
    cout << endl ;
    cout << "Pattern A" ;
    cout << endl ;
    for (int row = 1 ; row <= n ; ++row) {            
        for (int star = 1; star <= row; ++star) {   
            cout << "*" ;
        }
        cout << endl ;
    }

    //Pattern 2
    cout << endl ;
    cout << "Pattern B" ;
	cout << endl ;
    for (int row = 1; row <= n; ++row) {	
        for (int space = 1; space <= (row - 1); ++space) {
            cout << " " ;
        }
        for (int star = 1; star <= (n - row + 1); ++star) { 
            cout << "*" ;
        }
        cout << endl ;
    }

    //Pattern 3
    cout << endl ;
    cout << "Pattern C" ;
    cout << endl;
    for (int row = 1; row <= n; ++row) {
        for (int space = 1; space <= (n - row); ++ space) {
            cout << " ";
        }
        for (int star = 1; star <= (row * 2 - 1); ++star) {
            cout << "*";
        }
        cout << endl;
    }
	return 0 ;
}
