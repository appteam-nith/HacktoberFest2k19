#include <stdio.h>
int main(){
	int a[10][10],b[10][10],i,j,m,n,sum[10][10],op,t;
	printf("Enter order of matrix a*b\n");
	scanf("%d*%d",&m,&n);
	printf("Enter elements of matrix A\n",m,n);
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{scanf("%d",&b[i][j]);}
		printf("");}
		printf("Enter 1 for Sum of matrix A with other matrix B\nEnter 2 for trace of matrix A\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
		printf("Enter elements of matrix B\n");
		for(i=0;i<m;i++)
		{for(j=0;j<n;j++)
			{scanf("%d",&a[i][j]);}
			printf("");}
		printf("The sum of the two matrix is=\n");
	for(i=0;i<m;i++)
		{for(j=0;j<n;j++)
			{sum[i][j]=a[i][j]+b[i][j];}}
			for(i=0;i<m;i++)
			{for(j=0;j<n;j++)
				{printf("%d\t\t",sum[i][j]);}
				printf("\n");}
				break;
		case 2:
				if(m==n)
				{printf("Trace of matrix A is =\n");
				for(i=0;i<n;i++)
				{for(j=0;j<n;j++)
					{if(i==j)
						{t+=b[i][j];}}}
						printf("%d\n",t);}
						else{printf("Enter correct order of matrix\n\n");
							main();}
						break;}
			return 0;
			}
