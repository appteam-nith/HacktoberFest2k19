#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,n,m,o;
	printf("enter the size of matrices");
	scanf("%d",&n);
	printf("enter element of 1st matrices");
	for(i=0;i<j;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element of 2nd matrices");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<j;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("  %d",c[i][j]);
		}printf("\n");
	}
	
}
