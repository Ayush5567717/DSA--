//Write a program to input a 3-digit number and print the sum of its digits.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any three digit number:"<<endl;
    int a,sum=0,b;
    cin>>a;
    for(int i=0;i<4;i++)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
    }
    cout<<"Sum : "<<sum;
}