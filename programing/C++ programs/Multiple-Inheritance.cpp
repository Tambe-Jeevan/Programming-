#include<iostream>
#include<conio.h>
using namespace std;
class Samsung1
{
    public:
    int speaker;
    int mic;

};
class Samsung2
{
    public:
    int camera;
    int radio;

};
class Samsung3 : public Samsung1,Samsung2     //Multiple parent
{
public:
    int faceid;

};
int main()
{
 Samsung1 s1;
 s1.speaker=67;
 s1.mic=90;
// s1.radio=67;
// s1.faceid=90;
 cout<<s1.mic<<" "<<s1.speaker;

    getch();
}
