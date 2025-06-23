#include<iostream>
using namespace std;
class Parent{
public:
int x,y;
void fun(){
cout<<"Patrent x= "<<x<<"  Patrent y= "<<y<<endl;
}
};
class Child :public Parent{

int x, y;
public:
public:
void fun1(int x,int y){
this->x = x;     // Child x
Parent::y = y;   //Parent y
}
void Display(){
    cout<<"Child x= "<<x<<"  Child y= "<<y<<endl;
}
};
int main(){
Child c1;
c1.fun1(2,3);
c1.Display();
c1.fun();
// Parent p1;
// p1.fun();
}
