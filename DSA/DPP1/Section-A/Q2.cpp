// Write a program to take an integer x as input and print the result of ++x, x++, and the final value of x.
#include<iostream>
using namespace std;
int main()
{
    int x,pre,post,final;
    cout<<"Enter any number:"<<endl;
    cin>>x;
    pre=++x;
    post=x++;
    final=x;
    cout<<"Pre-increment:"<<pre<<endl<<"Post-increment:"<<post<<endl<<"final value:"<<final;
    return 0;
}