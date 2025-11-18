#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter 2-digit number:"<<endl;
    int a,b,rev;
    cin>>a;
    for(int i=0;i<3;i++)
    {
        b=a%10;
        a=a/10;
        rev=(b*10)+a;
    }    
    cout<<"Reversed number :"<<rev;
}