#include<stdio.h>
int main()
{
    int a[4][4], b[4][4],i,j;
printf("enter elements of 4 cross 4 matrix");
    for(i=0;i<4;++i)
    {
        for(j=0;j<4;++j)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
   printf("enter elements of second matrix");
    for(i=0;i<4;++i)
    {
        for(j=0;j<4;++j)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<4;++i)
    {
        for(j=0;j<4;++j)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        
    }
    return 0;
}