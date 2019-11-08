#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("input no of nos \n");
    scanf("%d",&n);
    printf("\nenter values");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        if(a[i+1]<a[i])
        a[i+1]=a[i];
    }
    printf("greatest in the array is %d\n",a[n-1]);
    return 0;
}