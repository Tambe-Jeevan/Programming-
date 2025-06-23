#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows and columns: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {    
        for(int j=1;j<=n;j++)
        {
        cout<<i<<" ";
        }
        cout<<endl;
    }
    getch();
}