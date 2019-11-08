#include<iostream>
using namespace std;
void Bubble(int A[],int n)
{	int a;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				a=A[j];
				A[j]=A[j+1];
				A[j+1]=a;		
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
	Bubble(A,size);
	cout<<"\nSorted Array is-->\n";
	for(int i=0;i<size;i++)
	cout<<A[i]<<"\t";
	cout<<"\nWant to sort one more array?(y/n)\n";
	cin>>ch;
	
}while(ch=='y'||ch=='Y');
	return 0;
}
