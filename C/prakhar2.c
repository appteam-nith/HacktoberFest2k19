/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another*/
#include <stdio.h>
int main()
{ int a,b,i,r=1;
  printf("enter the values of the two numbers with space\n");
  scanf("%d %d",&a,&b);
  for(i=1;i<=b;i++)
   {r=r*a;
   }
  printf("the required answer is %u",r);
  return 0;
}
