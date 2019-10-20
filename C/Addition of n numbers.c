/*Addition of n numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	printf("How many integers u wanna add: ");
	scanf("%d", &a);
	b=1;
	while(b<=a)
	{
		if(b==1)
		printf("Enter first integer: ");
		else
		printf("Enter next integer: ");
		scanf("%d", &c);
		d=d+c;
		b++;
	}
	printf("sum is %d\n",d);
}
