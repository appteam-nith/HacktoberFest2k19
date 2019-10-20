#include<stdio.h>
#include<math.h>
int main ()
{
    int a , b, c = 2 ,f ;
    scanf("%d",&a);
    b = sqrt(a);
    while(c<=b+1)
    {
        f=a%c;
        if(f==0 && c!=b+1)
        {
            printf("it is not a prime number");
            break ;
        }
        if(c==b+1)
        {
            printf("this is a prime number");
        }
        c++;
    }
    return 0 ;
}
