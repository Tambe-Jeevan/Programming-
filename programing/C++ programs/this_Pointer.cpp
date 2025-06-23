#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    int x;
    int y;
public:
    void  add(int x,int y)
    {
     this->x=y;                         //this pointer called by object this pointer is nothing but an object;
     this->y=x;
    }
    void display()
    {
        cout<<this->x<<" "<<this->y<<endl;
    }
};
int main()
{
    Student a1,a2;
    a1.add(7,8);
    a2.add(9,6);
    a1.display();
    a2.display();
    getch();
}
