#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swaped no is: "<<a<<" "<<b<<endl;
}