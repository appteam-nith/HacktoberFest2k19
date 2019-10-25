#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i=1,n;
    printf("Enter the number of terms you want to see in fibonacci \n");
    scanf("%d",&n);
    printf("\n%d\n%d",a,b);
    while(i<=(n-2))
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
        i++;
    }
    return 0;
}
