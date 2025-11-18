//Write a program to input an integer and print value before post-increment,value after post-increment and value after pre-increment.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any number:"<<endl;
    int a,b,c,original;
    cin>>a;
    original=a;
    a++;
    b=a;
    c=++a;
    cout<<"Value before post increment :"<<original<<endl<<"Value after post increment :"<<b<<endl<<"Value after pre increment :"<<c; 
}