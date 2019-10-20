#include<stdio.h>
main(){
int i,s,n;
printf("Enter the size of array= ");
scanf("%d",&n);
 int A[n];
for(i=0;i<n;i++){
	printf("Enter the elements of array= ");
scanf("%d",&A[i]);

}
s=0;
for (i=0;i<n;i++)
{s=s+A[i];
}printf("Sum of all elements=%d",s);}














