/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that can be used to assign seats for a commercial airplane. 
The airplane has 13 rows, with six seats in each row. Rows 1 and 2 are first class, rows 3 through
7 are business class, and rows 8 through 13 are economy class. Your program must prompt the user to
enter the following information:

a. Ticket type (first class, business class, or economy class)
b. Desired seat

Output the seating plan in the following form:
	  A B C D E F
Row 1 * * X * X X
Row 2 * X * X * X
Row 3 * * X X * X
Row 4 X * X * X X
Row 5 * X * X * *
Row 6 * X * * * X
Row 7 X * * * X X
Row 8 * X * X X *
Row 9 X * X X * X
Row 10 * X * X X X
Row 11 * * X * X *
Row 12 * * X X * X
Row 13 * * * * X *

Here, * indicates that the seat is available; X indicates that the seat is occupied. Make this a menu-driven
program; show the user’s choices and allow the user to make the appropriate choices.*/

#include <iostream>
#include <iomanip>
using namespace std ;

const int COLUMNS = 6 ;
const int ROWS = 13 ;

void initialSeats(char seats[ROWS][COLUMNS]) ;
void chooseSeats(char plane[ROWS][COLUMNS]) ;
void printPlane(char plane[ROWS][COLUMNS]) ;

int main()
{
  	char planeSeats[ROWS][COLUMNS];
  	char ticketType[15] ;

   	initialSeats(planeSeats) ;
   	chooseSeats(planeSeats) ;
   	cout << "Final seating charts" << endl ;
    printPlane(planeSeats) ;
    return 0 ;
}

void initialSeats(char seats[ROWS][COLUMNS]) 
{
	cout << "\tA B C D E F " << endl ;
	for (int i = 0 ; i < ROWS ; i++) {
		cout << "Row " << i + 1 << "\t" ; 
		for (int j = 0 ; j < COLUMNS ; j++) {
			seats[i][j] = '*' ;
			cout <<seats[i][j] << " " ;
			}
		cout << endl ;
		}
	cout << endl ;
	return ;
}

void chooseSeats(char plane[ROWS][COLUMNS]) 
{
	int seatsTaken = 0 ; 
	int seats = ROWS * COLUMNS ;
	char cont = 'y' ;
	int row = 0 ; 
  	char seat ;
  	int rowIndex, seatIndex ;
  	
	cout << "\t Choose your seat!" << endl;
  	while (seatsTaken < seats && cont == 'y')
    {
    	cout << "Plane layout \t Seats with 'X' is taken" << endl ;
	    cout << "Row 1 and 2 are First Class seats" << endl ;
      	cout << "Rows 3 through 7 are Business Class seats" << endl ;
      	cout << "Rows 8 through 13 are Economy Class seats" << endl ;
      	cout << "Enter ticket type and seats: " ;
      	cin >> row >> seat ;
      
      	rowIndex = row;
      
      	if (seat == 'A' || seat == 'a')
      		seatIndex = 1 ;
      	else if (seat == 'B' || seat == 'b')
	      	seatIndex = 2 ;
      	else if (seat == 'C' || seat == 'c')
	      	seatIndex = 3 ;
      	else if (seat == 'D' || seat == 'd')
      		seatIndex = 4 ;
      	else if (seat == 'E' || seat == 'e')
      		seatIndex = 5 ;
      	else if (seat == 'F' || seat == 'f')
      		seatIndex = 6 ;
      	
      	if (plane[rowIndex][seatIndex] == 'X')
			cout << "Sorry, " << row << seat << " is already taken" << endl ; 
      	else {
	  		cout << row << seat << " is available. You have got the seat." << endl ;
	  		plane[rowIndex - 1][seatIndex - 1] = 'X' ;
	  		seatsTaken++ ;
		}
	
		if (seatsTaken < seats) {
			cout << "Choose another seat? ('Y'/'y' or 'N'/'n') ";
			cin >> cont ;
		}
      	else
			cout << "Plane is now full!" << endl;
    }
	return ;
}

void printPlane(char plane[ROWS][COLUMNS])
{
	cout << "\tA B C D E F " << endl ;
    for (int i = 0; i < ROWS ; i++) {
    	cout << "Row " << i + 1 << "\t" ; 
        for (int j = 0; j < COLUMNS ; j++) {
        	cout << plane[i][j] << " " ;
     	}
     	cout << endl ;
	}
    return ;
}
