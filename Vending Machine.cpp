#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream> 
using namespace std ;

const int SIZE = 5 ; 

struct Types
{
	string name ; // name of drinks
	int large ;
	int medium ;
	int small ;
} ;

void getData(Types *ptr, int SIZE) ;
void menu() ;
void users(Types *ptr, int SIZE) ;
double chooseDrinks(Types [], int SIZE, int numDrink) ;
void receipt(int type, char s, int num, double total) ;	
void editMenu (int, int, Types*);
void stockUpdate (int, int, Types*);
void updateData(Types *ptr, int SIZE) ;

int main()
{
	Types *ptr, drinks[5] ;
	ptr = drinks ;
	int typeDrink, cont ;
	double wholePrice = 0 ;
	// initial stock
	getData(ptr, SIZE) ;
	users(ptr, SIZE) ;
	updateData(ptr, SIZE) ;
    return 0 ;
}

void getData(Types *ptr, int SIZE)
{
	ifstream inFile ;
	inFile.open("Drinks.txt") ;
	if(inFile.fail()) {
		cout << "Unable to open file" ;
		exit(1) ;
	}
	
	for (int i = 0 ; i < SIZE ; i++) { // get data from file 
		inFile >> ptr[i].name >> ptr[i].large >> ptr[i].medium >>ptr[i].small ;
	}
	inFile.close() ;	
}

void menu() // the menu showing the price of the drinks
{
	cout << "\t\t **WELCOME TO OUR VENDING MACHINE**" << endl << endl ;
	// prices
	cout << setw(15) << setfill(' ') << left << "Large cup: " 
		 << "RM 3.00 (hot)" << endl ;
	cout << setw(15) << setfill(' ') << left << "Medium cup: " 
		 << "RM 2.00 (hot)" << endl ;
	cout << setw(15) << setfill(' ') << left << "Small cup: " 
		 << "RM 1.00 (hot)" << endl ;
	cout << "**cold, add RM 0.50 per cup" << endl << endl ;
}

void users(Types *ptr, int SIZE)
{
	char user ;
	int typeDrink, cont ;
	double wholePrice ;
	
	cout << "\t\t **WELCOME TO OUR VENDING MACHINE**" << endl << endl ;
	cout <<"Choose option below" << endl << "A. Customer" << endl << "B. Seller" << endl ;
	cin >> user ;
	
	if (user == 'A' || user == 'a') { // customer
		do {
			menu() ; // show the types of drinks that we have
			for (int i = 0 ; i < SIZE ; i++) {
				cout << i + 1 << ". " << ptr[i].name << endl ;
			}
			cout << "Choose drinks: " ;
			cin >> typeDrink ; // the choice of wanted drinks
			cout << endl ;
			wholePrice += chooseDrinks(ptr, SIZE, typeDrink) ; // price to pay by customers
			
			cout << "Do you wish to continue? Enter 1 to continue or 0 to stop: " ;
			cin >> cont ; // ask whether to continue or not			cout << endl ;
		} while (cont != 0) ;
		cout << showpoint << fixed << setprecision(2) ;
		cout << "Price to pay: RM " << wholePrice ;
	}
	else if (user == 'B' || user == 'b') { // for the seller to change type of drinks or to adding the stocks 
	//notify seller that they are accessing as admin
	cout << endl << "NOTE: You are now accessed as Admin!" << endl;
		int ans; 
		
	do {
	
		cout << endl << "1. Change menu" << endl << "2. Update stock" << endl;
		cout << endl << "Choose your choice: " ;
		int c; //choice prompted by the seller
		cin >> c;
		
			if (c == 1){
				 //if choice is 1, compiler will go to function editMenu
				editMenu(c, SIZE, ptr);
				
			}
			
			else if (c == 2){
				//if choice is 2, compiler will go to function stockUpdate
				stockUpdate(c, SIZE, ptr);
			}
			else
			cout << "Invalid input!" << endl;
			
			cout << endl << "Do you still want to execute a task as Admin? Enter any number to continue, 0 to stop: " ;
			cin >> ans;
	}while (ans != 0) ; //loop to prompts the seller with execution will stop when seller insert 0

	}
	
	else {
		cout << "Invalid input" ;
		exit(1) ;
	}
}

double chooseDrinks(Types *ptr, int SIZE, int typeDrink) 
{
	double price, totalPrice = 0;
	char size, temperature;
	int cupNum;
	const double L_HOT = 3.00;
	const double M_HOT = 2.00;
	const double S_HOT = 1.00;
	
	cout << "C for cold , H for hot" << endl;
	cout << "Enter your choice: ";
	cin >> temperature;
	cout << "S for small, M for medium, L for large" << endl; 
	cout << "Enter drink's cup size: ";
	cin >> size ;
	cout << "Enter amount of cups: ";
	cin >> cupNum ; // the amount of cup wanted
		
	if (temperature == 'C' || temperature == 'c')  
	{
		if (size == 'L' || size == 'l' ) 
		{
			if (cupNum > ptr[typeDrink - 1].large) // If the cup is out of stock 
{
				cout << "Sorry, Large size cup for this drink is out of stock" <<endl;
			}
			price = cupNum * (L_HOT + 0.5);
			ptr[typeDrink - 1].large = ptr[typeDrink - 1].large - cupNum; 
		}
		else if (size == 'M' || size == 'm') 
		{
			if (cupNum > ptr[typeDrink - 1].medium) // If the cup is out of stock
{ 
				cout << "Sorry, Medium size cup for this drink is out of stock" << endl;
			}
			price = cupNum * (M_HOT + 0.5);
			ptr[typeDrink - 1].medium = ptr[typeDrink - 1].medium - cupNum;
		}	
		else if (size == 'S' || size == 's') 
		{
			if (cupNum > ptr[typeDrink - 1].small) // If the cup is out of stock
{ 
				cout << "Sorry, Small size cup for this drink is out of stock" <<endl;
			}
			price = cupNum * (S_HOT + 0.5);
			ptr[typeDrink- 1].small = ptr[typeDrink - 1].small - cupNum;
		}
		
	}
else if (temperature == 'H' || temperature == 'h') 
	{
		if (size == 'L' || size == 'l' ) 
		{
			if (cupNum > ptr[typeDrink - 1].large) // If the cup is out of stock
{ 
				cout << "Sorry, Large size cup for this drink is out of stock" <<endl;
			}
			price = L_HOT*cupNum;
			ptr[typeDrink - 1].large = ptr[typeDrink - 1].large - cupNum;
		}
		else if (size == 'M' || size == 'm') 
		{
			if (cupNum > ptr[typeDrink - 1].medium)// If the cup is out of stock
{ 
				cout << "Sorry, Medium size cup for this drink is out of stock" << endl;
			}
			price = M_HOT*cupNum;
			ptr[typeDrink - 1].medium = ptr[typeDrink - 1].medium - cupNum;
		}	
		else if (size == 'S' || size == 's') 
		{
			if (cupNum > ptr[typeDrink - 1].small) // If the cup is out of stock
{ 
				cout << "Sorry, Small size cup for this drink is out of stock" <<endl;
			}
			price = S_HOT*cupNum;
			ptr[typeDrink- 1].small = ptr[typeDrink - 1].small - cupNum;
		}
	}

	else 
		cout << "Invalid input" << endl;
		
	totalPrice += price;
	receipt(typeDrink, size, cupNum, totalPrice) ;		
	return totalPrice; 
}

void receipt(int type, char s, int num, double total)
{
	cout<<"\t\t\t Vending Machine \t\t\t " << endl; 
	cout  << "\n=====================" << endl;	
	cout<< " Item " << type << endl;
	cout<< " Cup Size " << s << endl;
	cout<< " No. of cup " << num << endl;
	cout << showpoint << fixed << setprecision(2) ;
	cout << endl << "Total spent: " << "RM " << total << endl;
	cout << "---------------------------\n" << endl;
	cout<< "\t\t\t Enjoy Your Drink \t\t\t" << endl;
}

void editMenu (int choice, int SIZE, Types *drinks){ //Updating new menu
	
	string newMenu;
	cout << endl;
	//Display the current menu
	for (int i = 0; i < SIZE; i++){
		cout  << i + 1 << ". " << drinks[i].name << endl;
	}
	//Let the seller change the old menu intended
	 cout << endl << "Enter which type of drink intended to change: ";
	 cin >> choice;
	 
	 if (choice < 1 || choice > 5){
	 	cout << "Invalid input!";
	 	exit(1);
	 }
	 
	//Enter new drinks on the menu
	 cout << endl << "Enter new menu: ";
	 cin >> newMenu ;
	 	//assign the new drink to the menu
	 	drinks[choice - 1].name = newMenu;
	//write the new menu into file
	 ofstream outFile;
	 outFile.open("Drinks.txt") ;
		if(outFile.fail()) {
			cout << "Unable to open file" ;
			exit(1) ;
		}
		
	outFile << drinks[choice - 1].name ;
	outFile.close();
	cout << endl << "The menu is successfully updated!" << endl;
	
	//display new menu
	cout << endl << "New Menu: " << endl;
	for (int i = 0; i < SIZE; i++){
		cout << i + 1 << ". " << drinks[i].name << endl;
	}
	 
}

void stockUpdate (int choice, int SIZE, Types *drinks){  //Updating stock
	
	int size, newStock;
	
	cout << endl << "Current stock: " << endl;
	
	//display current stock
for (int i = 0 ; i < SIZE ; i++) {
	cout << i + 1 << ". " << setw(15) << setfill(' ') << left << drinks[i].name ;
	cout << setw(10) << setfill(' ') << right << drinks[i].large << " " << drinks[i].medium << " " << drinks[i].small << endl ;
	}
	//let seller choose menu that need to restock
	cout << endl << "Enter menu intended to restock: ";
	cin >> choice;
		//make sure the seller input choices within range
		if (choice < 1 || choice > 5){
			cout << "Invalid input!" ;
			exit(1);
		}
	//display the cup size available
	cout << endl << "Size of cups: " << endl << "1. Large" << endl << "2. Medium" << endl << "3. Small" << endl << endl;
	cout << "Enter size of cups: ";
	cin >> size;
		//make sure the seller input choices within range
		if (size < 1 || size > 3){
			cout << "Invalid input!";
			exit(1);
		}
	//let seller restock
	cout << "Update quantity of stocks: ";
	cin >> newStock;
		//make sure the seller input choices within range
		if (newStock < 1){
			cout << "Invalid input!";
			exit(1);
		}
	//restock based on size
	if (size == 1){
		
		drinks[choice - 1].large += newStock;
	}
	
	else if (size == 2){
		
		drinks[choice - 1].medium += newStock;
	}
	
	else if (size == 3){
		
		drinks[choice - 1].small += newStock;
	}
	
	//write updated stock into the file
	 ofstream outFile;
	 outFile.open("Drinks.txt") ;
		if(outFile.fail()) {
			cout << "Unable to open file" ;
			exit(1) ;
		}
	
	for (int i = 0; i < SIZE; i++){
		outFile << drinks[i].large << drinks[i].medium << drinks[i].small;
	}
	
	outFile.close();
	cout << endl << "The stock is successfully updated!" << endl;

	cout << endl << "New stock: " << endl;
	//display the updated stock
	for (int i = 0 ; i < SIZE ; i++) {
		cout << i + 1 << ". " << setw(15) << setfill(' ') << left << drinks[i].name ;
		cout << setw(10) << setfill(' ') << right << drinks[i].large << " " << drinks[i].medium << " " << drinks[i].small << endl ;
	}
}

void updateData(Types *ptr, int SIZE) 
{
	ofstream outFile ; // update the stock in the file 
	outFile.open("Drinks.txt") ;
	if(outFile.fail()) {
		cout << "Unable to open file" ;
		exit(1) ;
	}
	for (int i = 0 ; i < SIZE ; i++) {
		outFile << ptr[i].name << " " << ptr[i].large << " " << ptr[i].medium << " " << ptr[i].small << endl ;
	}
	outFile.close() ;
}
