// Write a program to input two integers a and b, convert them into double using type casting, and print the floating division result.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two numbers :"<<endl;
    int a,b;
    double c,d,division;
    cin>>a>>b;
    c=(double)a;
    d=(double)b;
    division=c/d;
    cout<<"Floating Division result ="<<division;
}