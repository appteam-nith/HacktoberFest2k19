#include<stdio.h>
int main(){
	int x;
	
	printf("Enter the number to be reversed: ");
	scanf("%d",&x);
	int sum=0;
	while(x>0) 
	{ sum= sum*10 + x%10;
	 x= x/10;
	
	 
	}
 printf("The Reverese of the Number= %d ",sum);
	
	
	return 0;
	
	
	
}
