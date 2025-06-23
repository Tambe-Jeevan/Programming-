#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int ld,sum=0,n;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        ld=n%10;
        n/=10;
        sum+=ld;
    }
    cout<<sum;
    getch();
}
