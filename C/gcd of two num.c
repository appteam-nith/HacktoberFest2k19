#include<stdio.h>
main()
{
	unsigned int dvd,n1,n2,rv,dvs;
	printf("Enter 1st no.\n");
	scanf("%d",&n1);
	printf("Enter 2nd no.\n");
	scanf("%d",&n2);
	dvs=n2;
	dvd=n1;
	while (dvs!=0)
	{
		rv=dvd%dvs;//remainder after every division
		dvd=dvs;
		if (rv==0)
		{
		break;
		}
		else
		dvs=rv;
		
	}
	printf ("GCD of %d and %d is %d",n1,n2,dvs);
	
}
