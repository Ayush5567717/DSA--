//Write a program to input three integers a, b, c and print the value of the expression: a + b * c - (++b)
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any three numbers :"<<endl;
    int a,b,c,d;
    cin>>a>>b>>c;
    d=a+b*c-(++b);
    cout<<"Result :"<<d;
}