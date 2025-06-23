#include<iostream>
#include<conio.h>
using namespace std;
class StaticMember
{
  int x;
  int y;
  public:
  static int z;
};
int StaticMember::z;
int main()
{
    StaticMember s1,s2;
    StaticMember::z=10;        //::resolution operator
    cout<<s1.z<<endl;
    cout<<s2.z;
getch();
}