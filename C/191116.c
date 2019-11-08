#include<stdio.h>
int main()
{
	int n,i,j,k,l,m;
	printf("enter the no");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		k=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k=0;
				break;
			}
		}
		if(k==1)
		{	l=0;
			while(n%i==0)
			{	l=l+1;
				n=n/i;	
			}
			for(m=0;m<l;m++)
			{
				printf("%d\t",i);
			}
			
		}
	}
}

