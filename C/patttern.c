#include<stdio.h>
int main()
{int i,j,n;
printf("enter the no. of rows\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{for(j=n-1;j>=i;j--)
{printf("*");
}
printf("\n");
}
return 0;
}