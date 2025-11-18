//Write a program to input a character and print its ASCII value.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any character:"<<endl;
    char c;
    cin>>c;
    cout<<"ASCII value of "<<c<<" is "<<int(c);
    return 0;
}