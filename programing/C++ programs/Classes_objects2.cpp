#include<iostream>
#include<conio.h>
using namespace std;
class Nokia
{
    int mic;                 //instance(object) member variables
    int cam;
    int speaker;
public:
 void setData(int x,int y,int z)
 {
     mic=x;
     cam=y;
     speaker=z;
 }
void display()
{
    cout<<mic<<" "<<cam<<" "<<speaker;
}
};
int main()
{
Nokia m1;                   //created objects m1 is object
m1.setData(32,23,23);
m1.display();
getch();
}
