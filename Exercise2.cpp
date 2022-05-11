#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

struct studentType{
	string Fname;
	string Lname;
	int testScore;
	char grade;
};

const int LIMIT = 20;

void read_data(ifstream &inf, studentType [], int );
void assign_grade (studentType [], int);
int find_highest_score (studentType [], int);
void print_data(ofstream &inf,studentType [], int );

int main (){
	
	studentType student_List [LIMIT];
		
		ifstream inFile.open("Students_ScoresData.txt");
	
	ofstream outFile.open ("Students_ScoresOut.txt");
	
	read_data(inFile, student_List, LIMIT);
	assign_grade (student_List, LIMIT);
	print_data(outFile,student_List, LIMIT);
	
}

void read_data (ifstream &inFile, studentType student_List [], int LIMIT){


if (!inFile){
	cout<<"The file is not exists...."<<endl;
	exit(1);
	}


for (int i=0; i < LIMIT; i++){
	
	inFile>>student_List[i].Fname>>student_List[i].Lname>>student_List[i].testScore;
}	
}


void assign_grade (studentType student_List [], int LIMIT){
	
	for (int i = 0; i < LIMIT; i++){
		
		if (student_List[i].testScore <= 100 && student_List[i].testScore>= 90)
					
						student_List[i].grade = 'A';
		
		else if (student_List[i].testScore >= 80)
			
				student_List[i].grade = 'B';
	
		else if (student_List[i].testScore >= 75)
				student_List[i].grade = 'C';
		
		else if (student_List[i].testScore >= 70)
				student_List[i].grade = 'D';
				
		else if (student_List[i].testScore >= 65)
				student_List[i].grade = 'E';
		
		else if (student_List[i].testScore < 65)
		
		student_List[i].grade = 'F';

	}

}


int  find_highest_score (studentType student_List[], int LIMIT){
	
	int highest = student_List[0].testScore;
	
	for (int i=1; i< LIMIT; i++){
		
		if (student_List[i].testScore > highest)
			highest = student_List[i].testScore;
	}
	
	return highest;
}


void print_data(ofstream &outFile , studentType student_List [], int LIMIT){
	
	
	outFile<< "Student Name\t\t\t\tTest Score\t\t\t\tGrade"<<endl;
	
	for (int i=0; i < LIMIT; i++){
	
	outFile<<student_List[i].Fname<< " , "<<student_List[i].Lname<<"\t\t\t\t"<<student_List[i].testScore<<"\t\t\t\t\t"<<student_List[i].grade<<endl;
	
	}
	
	outFile<<endl<<endl;
	int highest= find_highest_score (student_List, LIMIT);
	
	outFile<<"Highest Test Score: "<<highest<<endl<<endl;
	outFile<<"Students having the highest test score: "<<endl<<endl;
	
	for (int i=0; i < LIMIT; i++){
	
	if (student_List[i].testScore == highest){
		outFile<<student_List[i].Fname<< " , "<<student_List[i].Lname<<endl;
	}
	
	}
}
