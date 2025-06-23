// copy Constructor using reference variable 

#include<iostream>
#include<conio.h>
using namespace std;
class Demo{
    int x,y;
    public:
    Demo(Demo &a){                  //copy  contructor created by refrence
        a.x++;
        a.y++;
       cout<<a.x<<" "<<a.y<<endl; 
    }
    Demo(int p,int q){
        x=p; y=q;
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    Demo d1(1,2),d2(d1);            // paass the d1 Object using d2 object 
}