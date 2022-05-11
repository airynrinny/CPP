#include <iostream>

using namespace std;

int main()
{
	double perimeter;
	
	cout << "Input the perimeter : ";
	cin >> perimeter;
	
	double length = (perimeter / 5) * 1.5;
	double breadth = (perimeter / 5);
	
	cout << "The length is " << length << " and the breadth is " << breadth;
	
	return 0;
	
}
