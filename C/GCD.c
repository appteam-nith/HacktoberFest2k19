#include<stdio.h>
int main()
{
	int a,b,c=1,i;
	printf("Enter two numbers");
	scanf("%d, %d", &a, &b);
	if(a<b)
	{
		for(i=0; i<=a; i++)
		{
			if(a%i==0 && b%i==0)
			c=i;
		}
	}
	else
	{
		for(i=0; i<=b; i++)
		{
			if(a%i==0 && b%i==0)
			c=i;
		}
	}
	printf("G.C.D. of two numbers is %d",c);
	return 0;
}
