#include <iostream>
using namespace std;
int main()
{
	int n, a, d, An=0, Sn=0;
cout<<"Value of A = ";
cin>>a;
cout<<"Value of D = ";
cin>>d;
cout<<"Number of Terms = ";
cin>>n;
	
	for(int i=1; i<=n; i++)
	{
	An=(a+((i-1)*d));
	cout<<"Term "<<i<<" = "<<An<<endl;
Sn=Sn+An;
}
	cout<<"Sum = "<<Sn<<endl;
return 0;
}