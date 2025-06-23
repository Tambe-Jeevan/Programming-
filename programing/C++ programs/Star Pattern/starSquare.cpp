#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        
        for(int i=1;i<=n;i++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
    getch();
}