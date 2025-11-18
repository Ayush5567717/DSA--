//Write a program to input your age in years and print your age in days.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your age in years : ";
    int y;
    cin>>y;
    y=y*365;
    cout<<"your age in days : "<<y;
}