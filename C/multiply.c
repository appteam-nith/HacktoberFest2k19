#include<stdio.h>
int main()
{
	int i,num[5];
	long int mult=1;
	for (i=0;i<5;i++)
	{
	printf("Enter number %c\n",'a'+i);
	scanf("%d",&num[i]);
	mult*=num[i];
    }
    printf("Product of all input numbers is %ld",mult);
    return 0;
}
