/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a function that sets the second last element of an array as 0. 
It should take the base address of the array and the size of the array as parameters. 
It should return true if the array has two or more elements and the operation 
is completed successfully, otherwise false. Use pointer notation to access the correct array element. 
Your program should work with the following main function that simply tests func with two arrays:*/

#include <iostream>
using namespace std ;

bool func(int *list, int size) ;

int main() 
{   
    cout << "Testing with arr1" << endl;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};    
    if (func(arr1, 8)) {
        cout << "Operation completed successfully" << endl;
        for (int i = 0; i < 8; ++i)
            cout << arr1[i] << " ";
        cout << endl;
    }
    else
        cout << "Operation failed" << endl;
    
    cout << endl;
    cout << "Testing with arr2" << endl;
    int arr2[] = {2};
    if (func(arr2, 1)) {
        cout << "Operation completed successfully" << endl;
        for (int i = 0; i < 1; ++i)
            cout << arr2[i] << " ";
        cout << endl;
    }
    else
        cout << "Operation failed" << endl;
    return 0;
}

bool func(int *list, int size)
{
	if (size >= 2) {
        *(list + (size - 2)) = 0 ;
        return true ;
    }
    else {
        return false ;
    }
}
