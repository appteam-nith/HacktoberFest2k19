#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=2;i<=(n+2)/2;++i)
    {
        k=n%i;
        if (k==0)
            break;
        
    }
    if(k==0)
    {
        printf("composite\n");

    }
    else printf("prime\n");

    return 0;
}