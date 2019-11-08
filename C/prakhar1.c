#include <stdio.h>
void main()
{int n,*p,s,c;
 printf("Enter the number\n");
 scanf("%d",&n);
 p=&n;
 s=*p**p;
 c=*p**p**p;
 printf("The square of the given number is %d\nThe cube of the given number is %d",s,c);
}