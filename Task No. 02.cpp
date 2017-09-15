//Folowwing code is multiplying 2 Matrices by Traditional Iterative Method
#include <iostream>//Defining Library 
#include <stdlib.h>//Defining Library
using namespace std;
int main(){
	int first[2][2], second[2][2], result[2][2], i, j, k;
	
	cout << "Enter the elements of matrix 1" << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Enter element: " << i << j << endl;
			cin >> first[i][j];
		}
	}
	
	cout << "Enter the elements of matrix 2" << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << "Enter element: " << i << j << endl;
			cin >> second[i][j];
		}
	}
	int p1, p2, p3, p4, p5, p6, p7;
	/* Computaion formula according to Strassen's Algorithm */
	p1 = (first[0][0] + first[1][1]) * (second[0][0] + second[1][1]);
	p2 = (first[1][0] + first[1][1]) * second[0][0];
	p3 = first[0][0] * (second[0][1] - second[1][1]);
	p4 = first[1][1] * (second[1][0] - second[0][0]);
	p5 = (first[0][0] + first[0][1]) * second[1][1];
	p6 = (first[1][0] - first[0][0]) * (second[0][0] + second[0][1]);
	p7 = (first[0][1] - first[1][1]) * (second[1][0] + second[1][1]);
	/* Storing Elements to respective indices in result matrix*/
	result[0][0] = p1 + p4 - p5 + p7;
	result[0][1] = p3 + p5;
	result[1][0] = p2 + p4;
	result[1][1] = p1 - p2 + p3 + p6;
	cout << "\nThe result is:\n";
	cout << result[0][0] << "\t";
	cout << result[0][1] << endl;
	cout << result[1][0] << "\t";
	cout << result[1][1] << endl;
	getchar();
	getchar();
	return 0;
}