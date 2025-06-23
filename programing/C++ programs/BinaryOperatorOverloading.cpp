#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
int a,b;
public:
void accept(int x,int y)
{
a=x; b=y;
}
Box operator +(Box z)    //binary(+) operator
{
Box z1;
z1.a=z.a+a;
z1.b=z.b+b;
return z1;
}
void display()
{
cout<<a<<endl<<b;
}
};
int main()
{
Box a,a2,a3;
a.accept(5,6);
a2.accept(6,8);
a3=a+a2;                 //call as a function to (+)operator
a3.display();
getch();
}
