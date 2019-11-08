#include<stdio.h>

int main()
{
	int i,n,j,y;
	printf("Enter the number upto which you want all prime numbers: \n");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{
		y=0;
        for(j=1;j<=i;j++)
		{
		if(i%j==0)
		{
		y++;
	}
		}
	
	if(y==2)
	{
	
	printf("\t%d", i);
}
}
	return 0;
}
