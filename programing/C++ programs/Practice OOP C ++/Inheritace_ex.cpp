#include<iostream>
#include<conio.h>
using namespace std;
class Example1{
public:
int x,y;
};
class Example2 : public Example1{
    public:
     int z;
    void setData(){
        x=6;
        y=7;
        z=1;
    }
};
class Example3 : public Example2{
    int a;
    public:
    void display(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main(){
Example3 e1;
e1.setData();
e1.display();
}