#include<stdio.h>
int main()
{
	int i,j,k,arr[10];
	printf("enter the ten numbers for the array");
	for(j=0;j<10;j++)
	{
		scanf("%d",&arr[j]);
	}
	k=arr[1];
		for(j=1;j<8;j+2)
		{
			arr[j]=arr[j+2];	
		}
		arr[9]=k;
		
}
