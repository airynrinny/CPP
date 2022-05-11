//Nur Airin Faqihah Binti Ruzaidi	2011976
// a program that calculates the density of an object from its mass and volume.
// It must accept the mass (in g) and volume (in cm3) from the user, and must print the density (in g/cm3), with two decimal places. 

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
	double mass, volume ;
	
	cout << "Input the mass (in g) : " ;
	cin >> mass ;
	
	cout << "Input the volume (in cm^3): " ;
	cin >> volume ;
	
	double density = mass / volume ;
	
	cout << setprecision(2) << fixed ;
	cout << "The density is " << density << " g/cm^3";
	
	return 0 ;	
}
