/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Declare a structure data type named Stemp for each of the following records:
a. A student record consisting of a student identification number, number of credits completed,
and cumulative grade point average
b. A student record consisting of a student’s name, birth date, number of credits completed,
and cumulative grade point average
c. A mailing list consisting of last name, first name, street address, city, state, and zip code
d. A stock record consisting of the stock’s name, the stock’s price, and the date of purchase
e. An inventory record consisting of an integer part number, a part description, the number of
parts in inventory, and an integer reorder number

For the data types declared in Exercise 1, define a suitable structure variable name, and initialize
each structure with the following data:

a. Identification Number: 4672
Number of Credits Completed: 68
Grade Point Average: 3.01

b. Name: Rhona Karp
Birth Date: 8/4/1980
Number of Credits Completed: 96
Grade Point Average: 3.89

c. Name: Kay Kingsley
Street Address: 614 Freeman Street
City: Indianapolis
State: IN
Zip Code: 07030

d. Stock Name: IBM
Stock Price: 134.5
Date Purchased: 10/1/2010

e. Part Number: 16879
Part Description: Battery
Number in Stock: 10
Reorder Number: 3*/

#include <iostream>
#include <string>
using namespace std ;

int main() 
{
	struct studRec1
	{
		int ID ;
		int credits ;
		double cgpa ;
	} ;

	struct studRec2
	{
		string name ;
		int day ;
		int month ;
		int year ;
		int credits ;
		double cgpa ;
	} ;

	struct mail 
	{
		string lname ;
		string fName ;
		string address ;
		string city ;
		string state ; 
		int zip code ;
	} ;

	struct stock 
	{
		string name ;
		double price ; 
		char date[11] ;
	} ;

	struct inventory
	{
		int partNum ;
		string description ;
		int numOfParts ;
		int reOrder ;
	} ;
	
	studRec records1 = {4672, 68, 3.01} ;
	
	studRec2 records2 = {"Rhona Karp", }
	return 0 ;
}
