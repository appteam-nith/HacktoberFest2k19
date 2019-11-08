#include<stdio.h>
 int main()
{
 
 int a[2][2], b[2][2] ;
printf("Enter the first Matrix\n");   //Taking a
   for(int i=0;i<2;i++)
    {
     printf("Enter a[0][%d]",i);
     scanf("%d",&a[0][i]);
    }
   
   for(int i=0;i<2;i++)
    {
     printf("Enter a[1][%d]",i);
     scanf("%d",&a[1][i]);
    }

// Taking b
printf("Now enter the second matrix\n");
   for(int i=0;i<2;i++)
    {
     printf("Enter b[0][%d]",i);
     scanf("%d",&b[0][i]);
    }
 
   for(int i=0;i<2;i++)
    {
     printf("Enter b[1][%d]",i);
     scanf("%d",&b[1][i]);
    }

int sum[2][2];          //Declaring sum array
  for(int i=0;i<2;i++)  //Adding
     sum[0][i]=a[0][i] + b[0][i];
  for(int i=0;i<2;i++)
     sum[1][i]=a[1][i] + b[1][i];
 
//Displaying matrix
printf("The added matrix is :\n");
  for(int i=0;i<2;i++)
    printf("%d ",sum[0][i]);
 printf("\n");
  for(int i=0;i<2;i++)
    printf("%d ",sum[1][i]); 

return 0;
}










