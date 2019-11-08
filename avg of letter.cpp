#include<stdio.h>
int linecount();
int main()
{
int n;
int count=0;
int sum=0;
float avg;
printf("enter the text \n");

while((n=linecount())!=0)   {
   
   	sum=sum+n;;
   	count=count+1;
   	
   }
avg=float(sum)/count;
printf("the average number of letters in word is %f \n",avg);
}

int linecount()
{
char a;
int count=0;
while((a=getchar())!='\n')
   {
   	count=count+1;
   } 
return count;
}
