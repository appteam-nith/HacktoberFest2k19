/* this is a program to calculate cost of painting the walls of rooms */
# include<iostream>
using namespace std;
int main(){
	float l,b,h,Nrooms,Cpm,Tcost;
	cout<<"give length of walls : ";
	cin>>l;
	cout<<"give breadth of walls : ";
	cin>>b;
	cout<<"give height of room : ";
	cin>>h;
	cout<<"give number of rooms : ";
	cin>>Nrooms;
	cout<<"give cost of painting per metre : ";
	cin>>Cpm;
	Tcost=2*(l*b+b*h+l*h)*Nrooms*Cpm;
	cout<<"total cost of painting the rooms is Rs. "<<Tcost;
	return 0;
}
