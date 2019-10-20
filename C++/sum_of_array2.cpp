#include <iostream>
using namespace std;

int main()
{
	int A[100][100], B[100][100], C[100][100],m, n;
	cout<<"Enter the size of matrix:",
	cin>>m>>n;
	cout<<"Enter the matrix A:";
	for (int i = 0; i<m; i++)
	{ 
	   for (int j = 0; j<n; j++)
	   cin>>A[i][j];
	}
	
	cout<<"Enter the matrix B:";
	for (int i = 0; i<m; i++)
	{ 
	   for (int j = 0; j<n; j++)
	   cin>>B[i][j];
	}
	
	for (int i = 0; i<m; i++)
	{ 
	   for (int j = 0; j<n; j++)
	   C[i][j] = A[i][j] + B[i][j];
	}
	
	cout<<"The sum of the both matrix is:";

	for (int i = 0; i<m; i++)
	{ 
	   for (int j = 0; j<n; j++)
	   cout<<C[i][j]<<" ";
	   cout<<endl;
	}
	return 0;
}
