//Write a program to input two integers a and b and print a%b and b%a.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two numbers;"<<endl;
    int a,b,x,y;
    cin>>a>>b;
    x=a%b;
    y=b%a;
    cout<<"a%b:"<<x<<endl<<"b%a:"<<y;
    return 0;
}