void pf (int n)
{
	int i;
	for (i=2;i<=n-1;i++)//to check for divisibility 
	{
		if (n%i==0)
		{
			if (check (i)==1)
			printf("%d ",i);
		}
	}
}
int check (int n)//check for facor is prime or not
{
	int i;
	for (i=2;i<=n/2;i++)
	{
		if (n%i==0)
		return (0);
	}
	return (1);
}
main ()
{
	int n;
	printf("Enter no. for which you want to find prime factor\n");
	scanf("%d",&n);
	pf (n);
}	