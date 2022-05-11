/* Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that asks the user to enter a positive integer n and prints n rows of the following patterns:

*
**
***
****

****
 ***
  **
   *

   *
  ***
 *****
*******

*/

#include <iostream>
using namespace std;

int main() 
{
    int num ;
    cout << "Enter number of rows of pattern: " ;
    cin >> num ;

    //Pattern 1
    cout << endl ;
    for (int row = 1 ; row <= num ; ++row) {            
        for (int star = 1 ; star <= row ; ++star) {   
            cout << "*" ;
        }
        cout << endl ;
    }

    //Pattern 2
    cout << endl ;
    for (int row = 1 ; row <= num ; ++row) {                    
        for (int space = 1 ; space <= (row - 1) ; ++space) {
            cout << " " ;
        }
        for (int star = 1 ; star <= (num - row + 1) ; ++star) { 
            cout << "*" ;
        }
        cout << endl ;
    }

    //Pattern 3
    cout << endl ;
    for (int row = 1 ; row <= num ; ++row) {
        for (int space = 1; space <= (num - row) ; ++ space) {
            cout << " ";
        }
        for (int star = 1; star <= (row * 2 - 1); ++star) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
