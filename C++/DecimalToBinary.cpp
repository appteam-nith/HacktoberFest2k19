#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a , arr[32] , i=0;
    cout<<"Enter any decimal number : ";
    cin>>a;
    while(a>0)
    {
        arr[i] = a%2;
        a = a/2;
        i++;
    }
    cout<<"The Binary form is : ";
    for(int j=i-1; j>=0 ; j--)
      cout<<arr[j];
    return 0;
}
