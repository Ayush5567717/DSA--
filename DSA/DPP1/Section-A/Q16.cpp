//Write a program to input two numbers and print the result of : (a + b) * (a - b)
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two numbers:"<<endl;
    int a,b,c;
    cin>>a>>b;
    c=(a+b)*(a-b);
    cout<<"Result :"<<c;
}