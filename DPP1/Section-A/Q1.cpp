//Write a program to take two integers as input and print their sum, difference, product, and quotient (integer division only).
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any two numbers :" << endl;
    int a,b,sum,diff,product,quotient;
    cin >> a>>b;
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    cout<<"sum:"<<sum<<endl<<"difference:"<<diff<<endl<<"product:"<<product<<endl<<"quotient:"<<quotient;
    return 0;
}