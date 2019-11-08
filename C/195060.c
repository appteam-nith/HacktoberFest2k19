#include<stdio.h>

int main()
{
    printf("how is the pattern");
    int a = 0, b, c, d=0;
    while(a<6)
        {
            b=0;
            c=0;
            d=0;
            while(b<6-a)
            {
                printf(" ");
                b++;
            }
            while(c<a)
            {
                printf("*");
                c++;
            }
            while(d<a)
            {
                printf("*");
                d++;
            }
            printf("\n");
            a++;
        }
    return 0 ;


}
