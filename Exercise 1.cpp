#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

struct computerType {
	string manufacturer;
	string model;
	string processorType;
	int ram;
	int hardDrive;
	int year;
	double price;
};


int main (){
	
	
	computerType computer;
	
	cout<<fixed<<showpoint << setprecision(2);
	
	cout<<"Enter the name of the manufacturer: ";
	getline(cin, computer.manufacturer);
	cout<<endl;
	
	cout<<"Enter the model of the computer: ";
	getline(cin, computer.model);  
	cout<<endl;
	
	cout<<"Enter the processor type of the computer: ";
	getline(cin, computer.processorType);
	cout<<endl;
	
	cout<<"Enter the size of the RAM (in GB) :";
	cin>>computer.ram;
	cout<<endl;
	
	cout<<"Enter the size of the Hard Disk (in GB) :";
	cin>>computer.hardDrive;
	cout<<endl;
	
	cout<<"Enter the year of production of the computer :";
	cin>>computer.year;
	cout<<endl;
	
	cout<<"Enter the price of the computer : ";
	cin>>computer.price;
	cout<<endl;
	
	
	cout<<"Manufacturer:  "<<computer.manufacturer<<endl;
	cout<<"Model :"<< computer.model<<endl;
	cout<<"Processor Type :"<<computer.processorType<<endl;
	cout<<"RAM size (GB) :"<<computer.ram<<endl;
	cout<<"Hard Drive size (GB) :"<<computer.hardDrive<<endl;
	cout<<"Year : "<<computer.year<<endl;
	cout<<"Price : "<<computer.price<<endl;
	
	return 0;
	
}


