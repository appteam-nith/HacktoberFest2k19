#include<stdio.h>
int f(int,int);
 main()
{
	int i,j,k,c=0,n;
	printf("enter the order of matrix");
	scanf("%d",&n);
	int a[n][n],inv[n][n];
	printf("enter elements of matrix");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",a[i][j]);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	inv[i][j]=a[f(i-1,n)][f(j-1,n)]*a[f(i+1,n)][f(j-1,n)]-a[f(i+1,n)][f(j-1,n)]*a[f(i-1,n)][f(j+1,n)];
		for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	printf("%d",inv[i][j]);
	
}
int f(int a,int n)
{
	if(a<0)
	a=n-1-a;
	if(a>n-1)
	a=a-n;
	
}
