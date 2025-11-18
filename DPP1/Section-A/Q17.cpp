//Write a program to input two integers `a` and `b` and print: (a * b) % 10 and (a + b) % 5
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two numbers :"<<endl;
    int a,b,c,d;
    cin>>a>>b;
    c=(a*b)%10;
    d=(a+b)%5;
    cout<<"Result 1:"<<c<<endl<<"Result 2:"<<d;
}