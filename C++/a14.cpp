#include<stdio.h>
int main()
{
	//prograam to saparate vovels and conconents
	int a,i,k=0,j;
	printf("size of character array");
	scanf("%d",&a);
	char arr[a];
	printf("enter the %d elements of array",a);
	for(i=0;i<a;i++)
	scanf("%c",&arr[i]);
	for(i=0;i<a;i++)
	{
		if(arr[i]=='a'&&arr[i]=='A'&&arr[i]=='e'&&arr[i]=='E'&&arr[i]=='i'&&arr[i]=='I'&&arr[i]=='o'&&arr[i]=='O'&&arr[i]=='u'&&arr[i]=='U')
		{
			k=arr[j];
			arr[j]=arr[i];
			arr[i]=k;
			k++;
		}
	}
		for(i=0;i<a;i++)
		printf("%d",&arr[i]);
	
}
