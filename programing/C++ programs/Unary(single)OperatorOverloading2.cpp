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
Box operator ++(int)      //Unary(single) ++ operator
{
Box z;
  z.a=a++;
  z.b=a++;
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
c=a++;                //call as a function to (++)operator
c.display();
getch();
}