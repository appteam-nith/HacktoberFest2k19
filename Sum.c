
#include<stdio.h>
#include<math.h>
int main()
{
int n,a,sum=0;
float average=0;
printf("Enter the no.\n");
scanf("%d",&n);

for(i=1,i<n+1,i++)
{scanf("%d",&a); /* add no. you want to add*/
sum =sum+a;
}
average=float(sum)/n;
printf("Sum,Float= %d,%f",sum,average);
return 0;
}
