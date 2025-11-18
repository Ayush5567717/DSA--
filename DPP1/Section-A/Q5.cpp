//Write a program to input an ASCII value (integer) and print the corresponding character.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter ASCII value of any character :"<<endl;
    int c;
    cin>>c;
    cout<<"Corresponding character of entered number :"<< char(c);
}