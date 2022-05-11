/*Nur Airin Faqihah Binti Ruzaidi 	2011976*/

#include <iostream>
using namespace std ;

int main()
{
	int num, count ;
	long date ;
	float slope ;
	double yield ;
	
	cout << "The address of num is " << &num << endl ;
	cout << "The address of count is " << &count << endl ;
	cout << "The address of date is " << &date << endl ;
	cout << "The address of slope is " << &slope << endl ;
	cout << "The address of yield is " << &yield << endl << endl ;
	
	cout << "Size of num memory is " << sizeof(num) << " bytes" << endl ;
	cout << "Size of count memory is " << sizeof(count) << " bytes" << endl ;
	cout << "Size of date memory is " << sizeof(date) << " bytes" << endl ;
	cout << "Soze of slope memory is " << sizeof(slope) << " bytes" << endl ;
	cout << "Size of yield memory is " << sizeof(yield) << " bytes" ;
	
	return 0 ;
}

