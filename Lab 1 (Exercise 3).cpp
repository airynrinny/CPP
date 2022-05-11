/**
* Nur Airin Faqihah Binti Ruzaidi
* Matric No. : 2011976
* Lab #1 Section 1
*/

#include <iostream>

using namespace std;

int main()
{
	double subTotal, gratuityRate, total, gratuity;
	
	cout << "Input the subtotal and gratuity rate respectively : " ;
	cin >> subTotal >> gratuityRate;
	
	gratuity = subTotal * (gratuityRate / 100);
	total = subTotal + gratuity;
	
	cout << "Gratuity is $" << gratuity << endl;
	cout << "Total is $" << total << endl;
  	
	return 0;
}
