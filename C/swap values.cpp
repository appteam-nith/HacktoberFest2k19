#include <stdio.h>
int main( )
{
	int a = 0;
	int b = 0;
	int i = 1;
	int c = 0;
	 printf("enter value of a\n");
     scanf("%d",&a);
     printf("enter value of b\n");
     scanf("%d",&b);
     
     
     	c=a;
     	a=b;
     	b=c;
     	
	 
	 printf("value of a is %d \n",a);
	 printf("value of b is %d",b);
	 
	 return 0;
	 
}

