/* Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that prompts the user to enter a positive integer and prints the number obtained by reversing the digits.
*/

#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num; 	// eg. num = 12345
	
	if (num > 0) {
    	while(num != 0) { 
        	remainder = num % 10; 	// remainder = 12345 % 10 = 5
        	reversedNum = reversedNum * 10 + remainder; 	// reversedNum = 0 * 10 + 5 = 5
        	num /= 10; 	// num = 12345 / 10 = 1234 and so on....
    	}	
	
    cout << "Reversed Number = " << reversedNum ;
	}
	
	else 
		cout << "Invalid input" ;
		
    return 0;
}
