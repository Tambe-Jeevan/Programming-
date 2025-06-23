#include<iostream>
#include<conio.h>
using namespace std;
class samsungS1
{
public:
    int speaker;
    int mic;
};
class samsungS2 : public samsungS1   //Reused by inherited child to parent class
{
    //int speaker;
    //int mic;
    int sensors;
    int radio;
};
int main()
{
    samsungS1 a1,a2;
    samsungS2 b1;
    getch();
}
