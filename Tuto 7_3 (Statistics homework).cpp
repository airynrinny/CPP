/*Nur Airin Faqihah Binti Ruzaidi 	2011976*/

#include <iostream> 
#include <cmath>
using namespace std ;

double calcMean(double num[], int size)
{
	double sum = 0.0 ;
	for (int i = 0 ; i < size ; i++) {
		sum += num[i] ;
	}
	double mean = sum / size ;
	return mean ;
}

double calcStdDev(double numbers[], int count) 
{
	double total = 0.0, eachNum = 0.0 ;
	for (int i = 0 ; i < count ; i++) {
		total += numbers[i] ;
	}
	double m = total / count ;
	for (int i = 0 ; i < count ; i++) {
		eachNum += pow((numbers[i] - m), 2) ;
	}
	double dev = sqrt(eachNum / count) ;
	return dev ;
}

int main()
{
	double values[10] ;
	cout << "Enter 10 values: " << endl ;
	for (int i = 0 ; i < 10 ; i++) {
		cin >> values[i] ;
	}
	cout << "The mean is " << calcMean(values, 10) << endl ;
	cout << "The standard deviation is " << calcStdDev(values, 10) << endl ;  
	return 0 ;
}
