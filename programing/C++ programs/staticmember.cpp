#include<iostream>
#include<conio.h>
using namespace std;

class StaticMember
{
    int x,y;
private:
   static int z;
public: 
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void static Display()
    {
        z=9876;
        cout<<z<<endl;
    }
};
int StaticMember::z;  //static meber declaration
int main()
{
    StaticMember::Display();  //no any object creation
    // StaticMember a;
    // a.setdata(3,5);
    // a.z=6; 
    // a.Display();
}