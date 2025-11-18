//Write a program to input a 2-digit number and print the reversed number.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two digit number:"<<endl;
    int a,rev,b;
    cin>>a;
    b=a%10;
    a=a/10;
    rev=(b*10)+a;
    cout<<"Reversed number : "<<rev;
}