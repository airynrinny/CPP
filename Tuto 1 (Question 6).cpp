#include <iostream>

using namespace std;

int main()
{
	int num, num1, num2, num3;
	
	cout << "Input a 3-digit number : " ;
	cin >> num ;
	
	num1 = num%10;
 	num2 = (num/10)%10; 
 	num3 = (num/10)/10;
 	
 	cout << "The number will be " << num1 << num2 << num3;
 	
 	return 0;
}
