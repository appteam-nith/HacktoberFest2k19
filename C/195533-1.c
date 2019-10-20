/*Program to calculate Sum, Product of all elements.*/
 
#include <stdio.h>
  
int main() 
{ 
    int arr[10]; 
    int sum,product,i;
  
    /*Read array elements*/
    printf("\nEnter elements : \n"); 
    for(i=0; i<10; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
     
    /*calculate sum and product*/
    sum=0;
    product=1;
    for(i=0; i<10; i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
       
    printf("\nSum of array is     : %d"  ,sum); 
    printf("\nProduct of array is : %d\n",product); 
  
    return 0; 
}
