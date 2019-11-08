#include<stdio.h>
int main()
{
	int n,i,t,j;
	printf("Enter size of array ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter numbers in array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d. ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	printf("\nThe numbers in ascending order are :\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
