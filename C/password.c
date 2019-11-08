#include<stdio.h>
#include<string.h>
int main()
{
    char s[20]="aman",c[20];
    printf("enter password");
    gets(c);
    printf("%d\n",strcmp(s,c));
    
return 0;
}