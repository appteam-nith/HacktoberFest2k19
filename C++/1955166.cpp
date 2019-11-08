#include<stdio.h>
int main()
{

	 int e,i;
	float x,y;
	y=0;
	x=0;
	printf("Hello guys calculate your cgpi upto the semesters you have attended");
		printf("\nEnter how many semesters are over ");
		scanf("%d",&e);
		float m[e],n[e];
		for(i=0;i<e;i++)
		{
		  printf("\nEnter your sgpi in sem %d : ",i+1);
		  scanf("%f",&m[i]);
		  
		 
			
		}
		for(i=0;i<e;i++)
		{
			printf("\nEnter your credits in sem %d : ",i+1);
		  scanf("%f",&n[i]);
		}
		for(i=0;i<e;i++)
		{
			 x+=m[i]*n[i];
		  y+=n[i];	
		}
		printf("Your cgpi till now is %f",(x/y));
		
	
}
	
