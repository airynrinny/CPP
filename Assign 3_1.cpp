/*Nur Airin Faqihah 	2011976
Write a value-returning function, isVowel, that returns the value true if a given character is a
vowel and otherwise returns false.*/

#include <iostream>
using namespace std ;

bool isVowel (char letter) ;

int main()
{
    char userLetter ;
    
    cout << "Enter a character: " ;
    cin >> userLetter ;
    
    if (isVowel (userLetter)) //true
        cout << userLetter << " is a vowel" << endl ;
    else //false
        cout << userLetter << " is not a vowel" << endl ;
    
    return 0 ;
}

bool isVowel (char letter) 
{
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
