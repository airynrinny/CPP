/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that declares a struct to store the data of a football player 
(player's name, player's position, number of touchdowns, number of catches, 
number of passing yards, number of receiving yards, and the number of rushing yards). 
Declare an array of 10 components to store the data of 10 football players. 
Your program must contain a function to input data and a function to output data. 
Add functions to search the array to find the index of a specific player, 
and update the data of a player. (You may assume that the input data is stored in a file.) 
Before the program terminates, give the user  the option to save data in a file. 
Your program should be menu driven, giving the user various choices.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

const int SIZE = 10 ;

struct player
{
	string name ;
	string position ;
	int touchDown ;
	int catches ;
	int pass ;
	int receive ;
	int rush ;
} ;

void inputData(player &details) ;
int search(player &data, string n) ;
void update(player &data) ;
void outputData(player &data) ;

int main()
{
	player details[SIZE] ;
	int choice ;
	char save ;
	string name, fileName ;
	cout << "\t Welcome to the Football Club! Pick any of the choice given below" << endl << endl ;
	do {
		cout << "1. Input players data" << endl 
			 << "2. Update players data" << endl 
			 << "3. Output players data" << endl 
			 << "4. Exit" ;
		cin >> choice ;
		if (choice == 1) {
			inputData(player&) ;
		}
		else if (choice == 2) {
			cout << "Enter players name: " ;
			cin >> name ;
			update(&details[SIZE], name) ;
		}
		else if (choice == 3) {
			outputData(&details[SIZE]) ;
		}
		else if (choice == 4) {
			break ;
		}
		else {
			cout << "Invalid choice, enter choice: " 
			cin >> choice ; 
		}
	} while(choice != 4) ;
	cout << "Do you want to save the data in a file? (Y/y or N/n): " ;
	cin >> save ;  
	if (save == 'Y' || save == 'y') {
		cout << "File name: " ;
		cin >> fileName ;
		ofstream outFile ;		
		outFile.open(fileName) ; 
		if (outFile.fail()) {
		cout << "Failed to open the file" ;
		return 0 ;
		}
		for (int i = 0 ; i < SIZE ; i++) {
			cout << "\t Player " << i + 1 << endl ;
			cout << "Player's name: " << details[i].name << endl 
				 << "Player's position: " << details[i].position << endl 
				 << "Number of touchdowns: " << details[i].touchDown << endl 
				 << "Number of catches: " << details[i].catches << endl 
				 << "Number of passing yards: " << details[i].pass << endl 
				 << "Number of receiving yards: " << details[i].receive << endl 
				 << "Number of rushing yards: " << details[i].rush << endl ;
		}
	}
	else
		cout << endl << "\t Thank you" ;
	return 0 ;
}

void inputData(player &data)
{
	for (int i = 0 ; i < SIZE ; i++) {
		cout << "Player's name: " ;
		cin >> player[i].name ;
		cout << "Player's position: " ;
		cin >> player[i].position ;
		cout << "Number of touchdowns: " ;
		cin >> player[i].touchDown ;
		cout << "Number of catches: " ;
		cin >> player[i].catches ;
		cout << "Number of passing yards: " ;
		cin >> player[i].pass ;
		cout << "Number of receiving yards: " ;
		cin >> player[i].receive ;
		cout << "Number of rushing yards: " ;
		cin >> player[i].rush ;
	}
}

int search(player &data, string n)
{
	int index ;
	for (int i = 0 ; i < SIZE ;i++) {
		if (player.name == n) {
			index = i ;
			break ;
		}	
	}
	return index ;
}

void update(player &data)
{
	int i, choice ;
	i = search(player &, string n) ;
	cout << "Update 	1. Player's position" << endl 
		 << "			2. Number of touchdowns" << endl 
		 << "			3. Number of catches" << endl 
		 << " 			4. Number of passing yards" << endl 
		 << "			5. Number of receiving yards" << endl 
		 << "			6. Number of rushing yards" << endl ;
	cout << "Enter choice: " ;
	cin >> choice ;
	switch(choice) {
		case 1: cout << "Position: " ;
				cin >> player[i].position ;
					break;
		case 2: cout << "Number of touchdowns: " ;
				cin >> player[i].touchDown ;
					break ;
		case 3: cout << "Number of catches: " ;
				cin >> player[i].catches ;
					break ;
		case 4: cout << "Number of passing yards: " ;
				cin >> player[i].pass ;
					break ;
		case 5: cout << "Number of receiving yards: " ;
				cin >> player[i].receive ;
					break ;
		default: cout << "Number of rushing yards: " ;
				 cin >> player[i].rush ;
				 	break ;
	}
}

void outputData(player &data) 
{
	for (int i = 0 ; i < SIZE ; i++) {
		cout << "\t Player " << i + 1 << endl ;
		cout << "Player's name: " << player[i].name << endl ;
		cout << "Player's position: " << player[i].position << endl ;
		cout << "Number of touchdowns: " << player[i].touchDown << endl ;
		cout << "Number of catches: " << player[i].catches << endl ;
		cout << "Number of passing yards: " << player[i].pass << endl ;
		cout << "Number of receiving yards: " << player[i].receive << endl ;
		cout << "Number of rushing yards: " << player[i].rush << endl ;
	}
}




















