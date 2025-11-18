//Write a program to input a double value and print only its decimal part.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a double value :"<<endl;
    double a;
    int b;
    float c;
    cin>>a;
    b=(int)a;
    c=a-b;
    cout<<"Decimal part of entered value :"<<c;
}