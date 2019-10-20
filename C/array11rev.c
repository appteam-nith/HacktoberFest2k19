#include <stdio.h>
int main(){
	int a[5],i,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=4;i>=0;i--)
	{a[i]=n%10;
		n/=10;}
		printf("Reversed no. is=\n");
	for(i=4;i>=0;i--)
	{printf("%d",a[i]);}
	}
