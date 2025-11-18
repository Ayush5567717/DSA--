//Write a program to input an integer and print its ASCII equivalent character if converted using char(x).
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any number:"<<endl;
    int x;
    cin>>x;
    cout<<"Equivalent character of entered number :"<<char(x);
}