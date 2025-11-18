//Write a program to input two float numbers and print - sum,difference,product and division.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two float numbers :"<<endl;
    float a,b,sum,diff,pro,division;
    cin>>a>>b;
    sum=a+b;
    diff=a-b;
    pro=a*b;
    division=a/b;
    cout<<"Sum:"<<sum<<endl<<"Difference:"<<diff<<endl<<"Product:"<<pro<<endl<<"Division:"<<division;
}