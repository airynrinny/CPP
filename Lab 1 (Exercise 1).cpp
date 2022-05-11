/**
* Nur Airin Faqihah Binti Ruzaidi
* Matric No. : 2011976
* Lab #1 Section 1
*/

#include <iostream>

using namespace std;

int main()
{
	double radius = 5.5, perimeter, area;
	const double PI = 3.14159;
	
	perimeter = 2 * PI * radius;
	area = PI * radius * radius;
	
	cout << "Given the radius of a circle is " << radius << endl;
		 
	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area << endl;
	
	return 0;
}

