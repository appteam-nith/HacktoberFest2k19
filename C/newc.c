#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("Enter 5 numbers");
for(i=0;i<=4;i++)
 {
  scanf("%d",&n);
  sum=sum+n;
  }
printf("The sum is %d",sum);
return(0);
}
