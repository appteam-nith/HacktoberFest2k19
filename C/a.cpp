#include<stdio.h>
int main()
{
	int i=-1,j=-1,k=0,n=2,m;
	m=i++&&j++&&k++||n++;
	printf("%d",m);
	return 0;

}
