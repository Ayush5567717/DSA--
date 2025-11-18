// Write a program to input a character and print the next character using pre-increment (++).
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any character :"<<endl;
    char c,d;
    int a;
    cin>>c;
    a=(int)c;
    ++a;
    d=(char)a;
    cout<<"Next character is "<<d;
}