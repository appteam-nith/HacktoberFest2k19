#include<stdio.h>
int main()
{       
     int i,sp,rows,k=0;
     printf("enter thw number of rows");
     scanf("%d",&rows,k=0);
     
      for(i=1;i<=rows;++i,k=0)
      {   
            for(sp=1;space<=rows-i;++sp)
            {    
                  printf("  ");
             }
      
             while (k!=2*i-1)
              {     
                 printf("*");
                 ++k;
                }      
                   
                 printf("\n");
          }

           return 0;
 }
     