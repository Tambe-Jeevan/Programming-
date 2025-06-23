#include<iostream>
#include<conio.h>
using namespace std;
class A{
int x,y;
public:
void setData(int p,int q){
    x=p;
    x=q;
    cout<<x<<" "<<y<<endl;
}
};
class B : public A  {
 int x,y;
public:
setData1(int x,int y){
    this->x=x;
    this->y=y;
    cout<<x<<" "<<y<<endl;
}
};
int main(){
    B b1;
    b1.setData1(4,5);
    getch();
}