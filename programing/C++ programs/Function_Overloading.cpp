#include<iostream>
#include<conio.h>
using namespace std;
class Fun_Over
{
    public:
//here two function are created with same name but different arguments
fun1(int x)
{
    cout<<x<<endl;
}
fun1()
{
    cout<<"function overloading";
}
};
int main()
{
    Fun_Over a1;
    a1.fun1(4);
    a1.fun1();
    getch();
}
