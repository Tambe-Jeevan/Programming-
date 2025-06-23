#include<iostream>
#include<conio.h>
using namespace std;
class student
{
  public:
      int x,y;
      ~student()            //create destructor
      {
         cout<<"end";
      }
};
int main()
{
    student a1;
    a1.x=10;
    cout<<"Program end"<<endl;
    getch();
}
