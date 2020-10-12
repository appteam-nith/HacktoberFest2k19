#include<iostream>
#include<string>
using namespace std;
void end()
		{
			cout<<"Thanks for using our services\n";
		}
const int size=5;
class bank_account{
	string name;
	string type;
	float balance;
	int acc_no;
	public:
		bank_account()
		{
			cout<<"\n\nEnter customer name: ";
			cin>>name;
			cout<<"\nEnter Account number: ";
			cin>>acc_no;
			cout<<"\nEnter type of account: ";
			cin>>type;
			cout<<"\nEnter balance amount: ";
			cin>>balance;
		}
		void add(float i);
		void withdraw(float i);
		void display();
		int fun1();
		
};
int bank_account::fun1()
{
	return acc_no;
}
void bank_account::add(float i)
{
	balance=balance+i;
}
void bank_account::withdraw(float i)
{
	if(i<=balance)
	{
		balance=balance-i;
	}
	else
	{
		cout<<"\nError!!!! NOT ENOUGH MONEY\n";
	}
	
}
void bank_account::display() 
{
	cout<<"Name of cutomer is: "<<name<<"\nBalance amount is: "<<balance;
}
int main()
{
	bank_account B[size];
	char ch;
	int a;
	float money;
	sos:
	cout<<"\n\nWhat do you want to do: \n\nPress W for Withdrawing Money\nPress D to Deposit money\nPress B to Check Balance\n Press Q to quit ";
	cin>>ch;
	switch(ch)
	{
		case 'W':
			case 'w':
			cout<<"Enter Account number: ";
			cin>>a;
			for(int i=0;i<size;i++)
			{
				if(a==B[i].fun1())
				{
					cout<<"\n\nEnter the amount you want to withdraw: ";
					cin>>money;
					B[i].withdraw(money);
					B[i].display();
					break;
				}
				if(a!=B[i].fun1()&&i==size-1)
				{
					cout<<"Searching the database...Please wait\n";
				}
				if(i==size-1)
				{
					cout<<"\n\nError... input error, Enter again correct account number\n\n";
					break;
				}
			}
			goto sos;
			break;
		case 'D':
			case 'd':
			cout<<"Enter account number: ";
			cin>>a;
			for(int i=0;i<size;i++)
			{
				if(a==B[i].fun1())
				cout<<"Enter the amount you want to deposit: ";
				cin>>money;
				B[i].add(money);
				B[i].display();
		        break;
				if(a!=B[i].fun1()&&i!=size-1)
				{
					cout<<"Searching the database...Please wait\n";			
			    }
			    if(i==size-1)
				{
					cout<<"\n\nError... input error, Enter again correct account number\n\n";
					break;
				}
			}    
			    goto sos;
			break;
		case 'B':
			case 'b':
			cout<<"Enter Account number: ";
			cin>>a;
			for(int i=0;i<size;i++)
			{
				if(a==B[i].fun1())
				{
				B[i].display();
				break;
			    }
				if(a!=B[i].fun1()&&i!=size-1)
				{
					cout<<"Searching the database...Please wait\n";			
				}
				if(i==size-1)
				{
					cout<<"\n\nError... input error, Enter again correct account number\n\n";
					break;
				}
			}
			goto sos;
			break;
		case 'Q':
			case 'q':
			end();
	       break;
	    default:
	    	cout<<"\nError in input...Please try again\n";
	    	goto sos;						
	}
}
