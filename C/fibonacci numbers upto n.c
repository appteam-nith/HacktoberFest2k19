#include<stdio.h>
void fc (int n)
{
	int i,a=0,b=1,c;
	printf("the fibonacci number for n terms are : %d  ",b);  
	for (i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d  ",c);
	}
}
		
main()
{
	 int n;
	printf ("Enter a number upto which fibbonacci numbers is printed\n");
	scanf("%d",&n);
	fc (n); 
}
