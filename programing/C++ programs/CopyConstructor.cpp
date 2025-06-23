#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int x,y;
    student(int a,int b)   //Parameterized Constructor
    {
     x=a;
     y=b;

    }
    student()
    {
        cout<<"Default"<<endl;
    }
    student(student &z)   //recursion Copy Constructor
    {
        cout<<"Copy Constructor.";
    }
};

int main()
{
  student a1(4,3);
  student a2;
  student a3(a1);
  cout<<endl<<a1.x<<" "<<a1.y;
    getch();
}
