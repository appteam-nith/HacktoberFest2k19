#include <stdio.h>
int main()
{int p,n,z,N,a,i;
  p=n=z=0;
 printf("Enter the total number of values you want to enter\n");
 scanf("%d",&N);
 for(i=1;i<=N;i++)
  {printf("Enter the value\n");
   scanf("%d",&a);
   if(a>0)
     p=p+1;
 else if(a==0) /* Always write else if not elseif i.e leave a spacing between else and if */
     z=z+1;
     else
     n=n+1;
  }
  printf("the number of positive values Entered is %d\n",p);
  printf("the number of negative values Entered is %d\n",n);
  printf("the number of Zeroes entered is %d\n",z);
  return 0;
}
