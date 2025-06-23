#include<iostream>
#include<conio.h>
using namespace std;
class Nokia1
{
public:
    int speaker;
    int mic;
};
class Nokia2 : public Nokia1     //Inherit class Nokia1 using ":"
{
public:
    int sensors;
    int radio;
};
class Nokia3 : public Nokia2      //Inherit class Nokia1 and Nokia2
{
public:
    int faceid;
    int camera;
};
int main()
{
    Nokia3 n1;
    n1.speaker=10;
    n1.mic=18;
    n1.radio=20;
    n1.camera=876;
    cout<<n1.radio<<" "<<n1.camera<<" "<<n1.speaker<<" "<<n1.mic;
    getch();
}
