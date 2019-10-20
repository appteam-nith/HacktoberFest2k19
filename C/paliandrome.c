#include<stdio.h>
#include<string.h>

int main()
{
	char word[20];
	int i,l,k=0;
	printf("enter any word\t");
	scanf("%s",word);
	l=strlen(word);
	for(i=0;i<l;i++)
	{
		if(word[i]!=word[l-i-1])
		{
			k=1;
			break;
		}
	}
	if(k)
	{
		printf("%s is not a paliandrome",word);
	}
	else
	{
		printf("%s is a paliandrome",word);
	}
	
}
