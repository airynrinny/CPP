/*Nur Airin Faqihah Binti Ruzaidi 	2011976
Write a program that takes from the user two square matrices of size 3X3 and
Prints the sum of the main diagonals of each matrix,
Prints the sum of the matrices, and
Prints the product of the matrices*/

#include <iostream> 
using namespace std ;

int main() 
{
	//Get data
	int matrixA[3][3], matrixB[3][3], matrixC[3][3] = {0, 0, 0,
													   0, 0, 0, 
													   0, 0, 0} ;
	int sumA = 0, sumB = 0, proMatrixC[3][3] = {0, 0, 0,
										  		0, 0, 0,
										  		0, 0, 0} ;
	cout << "Enter 9 integers for matrix A: " << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			cin >> matrixA[i][j] ;
		}
	}
	cout << endl ;
	cout << "Enter 9 integers for matrix B: " << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			cin >> matrixB[i][j] ;
		}
	}
	cout << endl ;
	
	//print data
	cout << "Matrix A: " << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			cout << matrixA[i][j] << " " ;
		}
		cout << endl ;
	}
	cout << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			cout << matrixB[i][j] << " " ;
		}
		cout << endl ;
	}
	cout << endl ;
	
	//sum for diagonal
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			if (i == j) {
			sumA += matrixA[i][j] ;
			}
		}
	}
	cout << "Sum of diagonal for matrix A: " << sumA << endl << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			if (i == j) {
			sumB += matrixB[i][j] ;
			}
		}
	}
	cout << "Sum of diagonal for matrix B: " << sumB << endl << endl ;
	
	//sum of matrices
	cout << "The sum matrix A and matrix B: " << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			matrixC[i][j] = matrixA[i][j] + matrixB [i][j] ;
			cout << "\t" << matrixC[i][j] << " " ;
		}
		cout << endl ;
	}
	
	// product of matrices
	cout << "The product of matrix A and matrix B: " << endl ;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			int sumC = 0 ;
			for (int k = 0 ; k < 3 ; k++) {
				sumC += matrixA[i][k] * matrixB[k][j] ;
			}
			proMatrixC[i][j] = sumC ;
			cout << "\t" << proMatrixC[i][j] << " ";
		}
		cout << endl ;
	}
	
	return 0 ;
}
