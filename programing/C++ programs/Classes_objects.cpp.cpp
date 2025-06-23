#include<iostream>
#include<conio.h>
using namespace std;
class Nokia
{
    int mic;                 //instanceO(object) member variables
    int cam;
    int speaker;
public:
    void setMic(int x)       //instance(object) member functions
    {
      mic=x;
      cout<<mic<<endl;
    }
    void setCam(int y)
    {
      cam=y;
      cout<<cam<<endl;
    }
    void setSpeaker(int z)
    {
      speaker=z;
      cout<<speaker<<endl;
    }
};
int main()
{
Nokia m1;                   //created objects m1 is object
m1.setMic(90);
m1.setSpeaker(100);
m1.setCam(110);

Nokia m2;                   //created objects m1 is object
m2.setMic(10);
m2.setSpeaker(20);
m2.setCam(30);
    getch();
}
