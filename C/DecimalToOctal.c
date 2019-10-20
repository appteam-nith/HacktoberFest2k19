#include<stdio.h>
 int main()
{
 int i,count=0,j,k=0,n;
   printf("Enter the Number you want to change to Octal: ");
   scanf("%d",&n); 
     i=n;
   while(i>0)
    {
      i=i/8;
       count++;
    }
    int remainder[count];
        j=n;
        while(j>0)
           {
               remainder[k]=j%8;
                j=j/8;
                 k++;
           }  

              k=k-1;
              for(int p=k;p>=0;p--)
                {
                   printf("%d",remainder[p]);
                }

return 0;

}
