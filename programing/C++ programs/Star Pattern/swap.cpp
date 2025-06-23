#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swaped no is: "<<a<<" "<<b<<endl;
}