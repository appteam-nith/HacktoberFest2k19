#include<stdio.h>
int main()
{
	int count1,count2,n;
	char c;
	printf("Enter the last alphabet u wanna print: ");
	scanf("%c", &c);
	n='c';
	printf("%d\n", 'c');
	for(count1=65;count1<=int(c);count1++)
	{
		for(count2=1; count2<=int(c)-count1+1;count2++)
		printf("%c", count2+64);
		for(count2=0;count2<count1-65;count2++)
		printf("  ");
		for(count2=int(c)+65-count1; count2>=65;count2--)
		printf("%c",count2);
		printf("\n");
	}
}
