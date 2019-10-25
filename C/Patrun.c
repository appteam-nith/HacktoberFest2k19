#include<stdio.h>
int main()
{
    int i,j,c=8;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=c;j++)
            printf(" ");
        for(j=0;j<(2*i+1);j++)
            printf("* ");
        c=c-2;
        printf("\n");
    }
    return 0;
}
