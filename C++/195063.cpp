// This is a program to check whether a square matrix is magic square or not
# include<iostream>
using namespace std;
int main(){
	int n,i,j,rsum[10],csum[10],d1sum,d2sum,sum;
	int M[10][10]; // matrix can contain maximum 10 rows n 10 columns
	cout<<"give order of the square matrix : ";
	cin>>n;
	// entering values of elements present in matrix
	for (i=0;i<n;i++){
		cout<<"give th values in "<<i<<"th row : ";
		for (j=0;j<n;j++){
			cin>>M[i][j];
		}
	}
	// declaring initial sum of rows and columns to be 0
	for (i=0;i<n;i++){
		csum[i]=0;rsum[i]=0;
	}
	d1sum=0;d2sum=0;
	sum=n*(n*n+1)/2;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			rsum[i]+=M[i][j];
		}
		if (rsum[i]!=sum){
			cout<<"given matrix is not a magic square";
			return 1;
		}
	}
	for (j=0;j<n;j++){
		for (i=0;i<n;i++){
			csum[j]+=M[i][j];
		}
		if (csum[j]!=sum){
			cout<<"given matrix is not a magic square ";
			return 1;
		}
	}
	for (i=0;i<n;i++){
		d1sum+=M[i][i];
	}
	    if (d1sum!=sum){
		cout<<"give matrix is not a magic square ";
		return 1;
	   }
     
    for (i=0;i<n;i++){
    	d2sum+=M[i][n-i-1];
	}
	if (d2sum!=sum){
		cout<<"given matrix ix not a magic square ";
		return 0;
	}
	cout<<"give matrix is a magic square\n";
	return 0;
}
