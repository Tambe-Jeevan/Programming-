#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,m;
    cout<<"Enter a range you want to display: ";
    cin>>n;
    cout<<"Enter a difference: ";
    cin>>m;
    for(i=1;i<=n*2-1;i+=m)
    {
        cout<<i<<" ";
    }
    getch();
}
