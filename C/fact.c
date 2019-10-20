#include<stdio.h>
int main()
{ int n,i,fact;
printf("Enter a number whose factorial to be determined n:");
scanf("%d",&n);
fact=1;
for(i=1; i<=n; i++)
{
fact=fact*i;
}
 printf("Factorial of the number is  %d",fact);
 return 0;
}
