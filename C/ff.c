#include <stdio.h>
int main()
{
    int avg,sum=0;
    int i;
    int marks[10];
    for(i=0;i<=9;i++)
{
    printf("enter the marks");
    scanf("%d",marks[i]);

}
    for (i=0;i<=9;i++)
        sum=sum+marks[i];
    avg=sum/10;
    printf("average value of marks of students=%d\n ",avg);
    return 0;

}
