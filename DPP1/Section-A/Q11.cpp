//Write a program to input a character and print the previous character using decrement operator.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any character :"<<endl;
    char c,d;
    int a;
    cin>>c;
    a=(int)c;
    --a;
    d=(char)a;
    cout<<"Previous character is "<<d;
}