#include<stdio.h>
int power(int a, int b);
int power(int a, int b) 
{
  if(b==0)
  return 1;
   else
    {  
        int c=1,i=1;
           while(i<=b)
              { 
               c=c*a;
               i++;
              }
   return c;
    }
}
       
 int main()
{   
  int a; 
    printf("Enter the length of the binary number :");
    scanf("%d",&a);
 int binary[a];                               //Declaration of array
  

        for(int i=0;i<a;i++)
          {
           printf("Enter the %d digit :",i);          
           scanf("%d",&binary[i]);
          }
 int reverse[a],u=0;                          //Reversing array
           for(int k=a-1;k>=0;k--)
            {
               reverse[u]=binary[k];
               u++;
            }
    int sum=0;                                //Changing to decimal 
 for(int s=0;s<a;s++)
  sum=sum+reverse[s]*power(2,s);

     printf("%d",sum);
return 0;
}
