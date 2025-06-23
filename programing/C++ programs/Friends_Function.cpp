#include<iostream>
#include<conio.h>
using namespace std;
class g1
{
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x; b=y;
    }
    friend void display(g1 z);
};
void display(g1 z)
{
    cout<<z.a+z.b<<endl;
}
int main()
{
    g1 c,d;
    c.setData(7,8);
    d.setData(9,5);
    display(c);
    display(d);
    getch();
}
