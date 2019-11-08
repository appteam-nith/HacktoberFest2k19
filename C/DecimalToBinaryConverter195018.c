#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a , arr[32] , i=0;
    printf("Enter any decimal number : ");
    scanf("%d",&a);
    while(a>0)
    {
        arr[i] = a%2;
        a = a/2;
        i++;
    }
    printf("The Binary form is : ");
    for(int j=i-1; j>=0 ; j--)
    {
      printf("%d",arr[j]);
    } 
    return 0;
}
