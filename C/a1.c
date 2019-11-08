#include <stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	printf("enter two nos.:\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf(" the value of a is %d and b is %d",a,b);

}
