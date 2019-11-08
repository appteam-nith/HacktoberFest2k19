#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=4;
	for(i=1;i<=8;i++)
	{
		if(i<2)
		{
			for(j=1;j<7;j++)
			{
				printf("*");
			}
		}
		else if(i>1 && i<8)
		{
			for(j=1;j<4;j++)
			{                                                 
				printf(" ");
			}
		}
		for(j=1;j<2;j++)
		{
		printf("*");
	    }
	printf("\n");
    }
	
	getch();
}