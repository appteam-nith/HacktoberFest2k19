#include<iostream>
using namespace std;
void Selection(int A[],int n)
{	int a;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
			{
				a=A[j];
				A[j]=A[i];
				A[i]=a;		
			}
		}
	}
}
int main()
{	char ch='y';
	do{
	
	int size;
	cout<<"Enter the Size of the array";
	cin>>size;
	int A[size];
	cout<<"\nEnter the elements of the array\n";
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	Selection(A,size);
	cout<<"\nSorted Array in Ascending order is-->\n";
	for(int i=0;i<size;i++)
	cout<<A[i]<<"\t";
	cout<<"\nWant to sort one more array?(y/n)\n";
	cin>>ch;
	
}while(ch=='y'||ch=='Y');
	return 0;
}
