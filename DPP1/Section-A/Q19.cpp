// Write a program to input a floating number and print it rounded down using type casting (convert to int).
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any floating number:"<<endl;
    float a;
    cin>>a;
    a=(int)a;
    cout<<"Rounded down value :"<<a;
}