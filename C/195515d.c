#include<stdio.h>
#include<conio.h>
int main()
{
	int a,mul=1,i;
	printf("enter five numbers:\n");
	for(i=1;i<=5;i++);
	{
		scanf("%d",&a);
		mul=mul*a;
	}
	printf("mul=%d",mul);
	getch();
	return 0;
}
