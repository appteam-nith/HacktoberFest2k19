#include<stdio.h>
int main()
{
    int a[5],i=0,s=0;
    float avg=0.0;
    printf("Enter five number\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        s=s+a[i];
    }
    avg=s/5;
    printf("\nThe numbers above average\n ");
    for(i=0;i<5;i++)
    {
        if(a[i]>avg)
            printf("%d\n",a[i]);
    }
    printf("\nThe numbers belove average\n");
    for(i=0;i<5;i++)
    {
        if(a[i]<avg)
            printf("%d\n",a[i]);
    }
    return 0;
}
