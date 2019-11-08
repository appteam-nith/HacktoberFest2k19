#include<stdio.h>
int main()
{
	int t1=0, t2=1, nextterm=0, n;
	printf("Enter a positive integer: \n");
	scanf("%d", &n);
	printf("Fibonacci series: %d %d", t1, t2);
	nextterm=t1+t2;
	while(nextterm<=n)
{
	printf("%d", nextterm);
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
}
return 0;
}
