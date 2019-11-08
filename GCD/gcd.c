/* 
 * @Author: Rohit Agarwal(agarwalr98)
 * @Email: agarwal.r1998@gmail.com
 *
 * GCD of numbers
 */
#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1, &num2);
    printf("GCD : %d",gcd(num1, num2));
}