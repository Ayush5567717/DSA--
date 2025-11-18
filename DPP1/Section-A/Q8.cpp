//Write a program to input a double value and print its integer part using type casting.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a double value:"<<endl;
    double a;
    int b;
    cin>>a;
    b=(int)a;
    cout<<"Integer part of entered value :"<<b;
}