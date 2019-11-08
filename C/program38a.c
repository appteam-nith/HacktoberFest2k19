#include <stdio.h>
int main()
{

int a,b;
printf("Program to find 'Predecessor' and 'Successor' of a number\n");
printf("Enter a number:");
scanf("%d", &a);

b=++a;
printf("Successor of a is %d\n",b);
b=--a;
b=--a;
printf("Predecessor of a is %d\n",b);


 
	return 0;
}

