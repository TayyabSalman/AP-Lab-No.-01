//Folowwing code is multiplying 2 Matrices by Traditional Iterative Method
#include<iostream>//Defining library
#include <stdlib.h>//Defining Library
using namespace std;
void main()
{
	int first[2000][2000], second[2000][2000], result[2000][2000];//Defining Arrays
	int m, n, p, q, i, j, k;//local variables
	cout << "Enter rows and columns of first matrix:" << endl;
	cin >> m >> n;
	cout << "Enter rows and columns of second matrix:" << endl;
	cin >> p >> q;

	if (n == p)//No. of Rows in 1st col is equal to no. of rows in 2nd col.
	{
		for (i = 0; i < m; ++i)//1st Matrix
		for (j = 0; j < n; ++j)
			first[i][j] = rand() % 100;

		for (i = 0; i < p; ++i)//2nd Matrix
		for (j = 0; j < q; ++j)
			second[i][j] = rand() % 100;

		cout << "1st Matrix: " << endl;
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < q; ++j)
			{
				cout << first[i][j] << " ";
			}
			cout << endl;
		}
		cout << "2nd Matrix:" << endl;
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < q; ++j)
			{
				cout << second[i][j] << " ";
			}
			cout << endl;
		}


		cout << "Required Matrix:" << endl;
		for (i = 0; i < m; ++i)//Main function
		{
			for (j = 0; j < q; ++j)
			{
				result[i][j] = 0;
				for (k = 0; k < n; ++k)
					result[i][j] = result[i][j] + (first[i][k] * second[k][j]);
				cout << result[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
		cout << "Number of rows is not equal to the number of columns.\nThus matrix multiplication cannot be done." << endl;
}
