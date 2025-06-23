#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
while(1)
{
    cout<<"\nEnter a number: ";
    cin>>n;
    if(n%2==0)
        cout<<"The number is even.";
    else
        cout<<"The number is odd.";
}
    getch();
}
