#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"\n1. ADDITION";
    cout<<"\n2. Substraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";
    cout<<"\n5. Exit";

    while(1)
    {
        cout<<"\nEnter your choice: ";
        cin>>ch;

    switch(ch)
    {
    case 1:
        {
            cout<<"Enter two no: ";
            cin>>a>>b;
            cout<<"The addition is: "<<a+b;
            break;
        }
    case 2:
        {
            cout<<"Enter two no: ";
            cin>>a>>b;
            cout<<"The substraction is: "<<a-b;
            break;
        }
    case 3:
        {
            cout<<"Enter two no: ";
            cin>>a>>b;
            cout<<"The multiplication is: "<<a*b;
            break;
        }
    case 4:
        {
            cout<<"Enter two no: ";
            cin>>a>>b;
            cout<<"The Division is: "<<a/b;
            break;
        }
    case 5:
        {
            exit(0);
        }
    default:
        {
            cout<<"Wrong Input!!!!!!";
        }
     }
    }
getch();
}
