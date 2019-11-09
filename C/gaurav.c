#include<stdio.h>
void main()
{
	
char str[20];
int i,k;
printf("enter full name :");
gets(str);
printf("%c",str[0]);
for(i=0;str[i]!='\0';i++)
{
	
	if(str[i]==' ')
	{ 
	 k=i+1;
	
		printf(".%c",str[k]);
    }

}

}
