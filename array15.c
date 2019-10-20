#include <stdio.h>
#include <string.h>
int main(){
	char sent[100],*ch,s;
	int j,i=0,flag=0,x=0;
	printf("Enter the sentence\n");
	gets(sent);
	ch=sent;
	printf("you entered\n");
	while(*ch!='\0')
	{printf("%c",*ch);
		ch++;
		i++;}
		printf("\nEnter a character to search\n");
		scanf("%c",&s);
		for(j=0;j<=i;j++)
		{if((int)sent[j]==(int)s)
			{flag=1;
				x++;}}
				if(flag==1)
				{printf("yes %c present %d times\n",s,x);}
				x=0;
				for(j=0;j<=i;j++)
				{if((int)sent[j]==32)
					{x++;}}
					printf("The number of alphabets are %d\n",i-x);
		}
		
