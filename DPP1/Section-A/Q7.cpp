//Write a program to input an integer and print the value of x+5,x-3,x*2,x/2,x%2.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any number :"<<endl;
    int x,a,b,c,d,e;
    cin>>x;
    a=x+5;
    b=x-3;
    c=x*2;
    d=x/2;
    e=x%2;
    cout<<"Output:"<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
}