#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?printf("Vowel"):printf("Consonant");
    return 0;
}
