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
Box operator -()      //Unary(single) - operator
{
Box z;
  z.a=-a;
  z.b=-b;
  return z;
}
void display()
{
cout<<a<<" "<<b<<endl;
}
};
int main()
{
Box a,c;
a.accept(5,6);
c=-a;                //call as a function to (-)operator
a.display();
c.display();
getch();
}
