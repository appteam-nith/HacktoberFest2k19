#include<iostream>
using namespace std;
int main()
{
	int A[5],output=1;
	cout<<"\nEnter A\n"
	cin>>A[0];
	cout<<"\nEnter B"
	cin>>A[1];
	cout<<"\nEnter C"
	cin>>A[2];
	cout<<"\nEnter D"
	cin>>A[3];
	cout<<"\nEnter E
	cin>>A[4];
	for(int i=0;i<5;i++)
	output=output*A[i];
	cout<<"\nOutput is = "<<output;
	return 0;
}
