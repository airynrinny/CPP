// Nur Airin Faqihah Binti Ruzaidi	2011976
// A program that converts temperatures in fahrenheit to celsius. 
// Format your output to two decimal places.	9C=5(F-32)

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
	double fahrenheit ;
	
	cout << "Input the temperature in Fahrenheit : " ;
	cin >> fahrenheit ;
	
	double celcius = ((fahrenheit - 32) * 5) / 9 ;
	
	cout << fixed << showpoint ;
	cout << setprecision(2) ;
	cout << "The temperature in Celcius is " << celcius ;
	
	return 0 ;
}
