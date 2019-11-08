#include<iostream>
using namespace std;
class age
{
private:
int day;
int month;
int year;
public:
age():day(1), month(1), year(1)
{}
void get()
{
cout<<endl;
cout<<"enter the day(dd):";
cin>>day;
cout<<"enter the month(mm):";
cin>>month;
cout<<"enter the year(yyyy):";
cin>>year;
cout<<endl;
}
void print(age a1, age a2)
{
if(a1.day>a2.day && a1.month>a2.month)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<a1.year-a2.year<<"-"<<a1.month-a2.month<<"-"<<a1.day-a2.day;
cout<<endl<<endl;
}
else if(a1.day<a2.day && a1.month>a2.month)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<a1.year-a2.year<<"-"<<(a1.month-1)-a2.month<<"-"<<(a1.day+30)-a2.day;
cout<<endl<<endl;
}
else if(a1.day>a2.day && a1.month<a2.month)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<(a1.year-1)-a2.year<<"-"<<(a1.month+12)-a2.month<<"-"<<a1.day-a2.day;
cout<<endl<<endl;
}
else if(a1.day<a2.day && a1.month<a2.month)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<(a1.year-1)-a2.year<<"-"<<(a1.month+11)-a2.month<<"-"<<(a1.day+30)-a2.day;
cout<<endl<<endl;
}
else if(a1.month==a2.month && a1.day>a2.day)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<(a1.year)-a2.year<<"-"<<"00"<<"-"<<(a1.day)-a2.day;
cout<<endl<<endl;
}
else if(a1.month==a2.month && a1.day<a2.day)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<(a1.year)-a2.year-1<<"-"<<"11"<<"-"<<30-((a2.day)-a1.day);
cout<<endl<<endl;
}
else if(a1.month==a2.month && a1.day==a2.day)
{
cout<<"your age is YYYY-MM-DD"<<endl;
cout<<"\t\t"<<(a1.year)-a2.year<<"-"<<"00"<<"-"<<"00"<<endl;
cout<<"HAPPY BIRTHDAY";
cout<<endl<<endl;
}
else if(a1.year<a2.year)
{
cout<<"you entered wrong date. please enter the correct date."<<endl;
}
}
};
int main()
{
age a1, a2, a3;
cout<<"\t enter the current date.";
cout<<endl<<endl;
a1.get();
cout<<"\t enter your DOB.";
cout<<endl<<endl;
a2.get();
a3.print(a1,a2);
    return 0;
}
