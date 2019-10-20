#include<iostream>
using namespace std;
int main()
{
	int A[5],output=1;
	cout<<"Enter 5 Numbers:-\n";
	for(int i=0;i<5;i++)
	cin>>A[i];
	for(int i=0;i<5;i++)
	output=output*A[i];
	cout<<"\nOutput= "<<output;
	return 0;
}
