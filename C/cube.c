#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	printf("Enter range of no. to find perfect cube\n");
	scanf("%d",&a);
	for(d=1;d<a;d++)
	{
		b=c;
		c=b+1;
		b=pow(c,3);
		if(b<=a)
	printf("The perfect cube is=%d\n",b);
		}
	return 0;
	}
	
