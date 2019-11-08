#include<stdio.h>

int main()
{
    int a=6, b=0, c=0, d=0, e=0;
    while(b<a)
    {
        c=0;
        while(c<b)
        {
            printf("*");
            c++;
        }
        printf("\n");
        b++;
    }
}
