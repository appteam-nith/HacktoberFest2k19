#include"stdio.h"
#include<math.h>
int rev (int n)
{
	int n1=n;
	int l,i,sum=0,d;
	for (l=0;n!=0;l++)
	n/=10;
	for (i=0;i<l;i++)
	{
		d=n1%10;
		n1/=10;
		sum=sum+d*power (10,l-i-1);
	}
	return (sum);
}
long int power (int a,int b)
{
	int i,sum=1;
	for (i=0;i<b;i++)
	sum=sum*a;
	return (sum);
}
main()
{
	int n,i;
	printf("Enter number upto which palindrome numbers is printed\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (rev (i)==i)
		printf("%d  ",i);
	}
	
}