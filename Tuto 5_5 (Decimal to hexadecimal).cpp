/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that converts a decimal integer number into a hexadecimal number.*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int num, remainder ;
    cout << "Enter a non-negative integer: " ;
    cin >> num ;
	
	if (num >= 0) {
    	string answer = "";
    	do {
        	remainder = num % 16 ;
        	if (remainder <= 9) {
            	answer = char(remainder + '0') + answer ;
        	}
			
        	else if (remainder == 10) {
        	    answer = 'A' + answer ;            
        	}
        	
        	else if (remainder == 11) {
        		answer = 'B' + answer ;            
        	}
        	
        	else if (remainder == 12) {
        		answer = 'C' + answer ;            
        	}
        	
        	else if (remainder == 13) {
        		answer = 'D' + answer ;            
        	}
        	
        	else if (remainder == 14) {
        	   answer = 'E' + answer ;            
        	}
        	
        	else {
        	   answer = 'F' + answer ;            
        	}
        	
        	/* OR
        	else {
            	answer = char((remainder - 10) + 'A') + answer ;
        	}
			*/
        num /= 16;
		} while (num != 0);

    	cout << "Hexadecimal = " << answer << endl;
	}
	
	else {
		cout << "Invalid input" ;
	}
	return 0;
}
