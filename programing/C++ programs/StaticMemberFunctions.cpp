#include<iostream>
#include<conio.h>
using namespace std;
class StaticMember
{
  int x;
  int y;
  static int z;
  public:
  // static void accept(int a)      //static declared create function
  // {
  //   z=a;
  // }
  static void display()
    {
      z=8;
        cout<<z;
    }
};
int StaticMember::z;
int main()
{
// StaticMember::accept(67);
StaticMember::display();

getch();
}
