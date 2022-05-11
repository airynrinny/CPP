/*Nur Airin Faqihah Binti Ruzaidi 	2011976*/

#include <iostream>
using namespace std ;

int main() 
{
	int n, row, space ;
	double total = 0, average ;
	cout << "Enter number of rows: " ;
	cin >> n ;
    cout << endl ;
    
    for (int row = 0 ; row < n ; ++row) {
        for (int space = 0 ; space < (n - row) ; ++space) {
            cout << " " ;
        }
        for (int num = 0 ; num < (row * 2 - 1) ; ++num) {
        	if (num)
            cout << num ;
            total = total + num ;
        } 
        
        cout << endl;
    }
    average = total / n ;
    cout << "The average of numbers is " << average ;
	return 0 ;
}
