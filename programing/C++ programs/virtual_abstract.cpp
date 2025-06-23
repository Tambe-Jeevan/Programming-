#include<iostream>
#include<conio.h>
using namespace std;
class Bank{
    virtual void roi()=0;
};
class CA : Bank{
    public:
    void roi(){
        cout<<"CA Roi"<<endl;
    }
};
class SA : Bank{
    public:
    void roi(){
        cout<<"SA Roi"<<endl;
    }
};
int main(){
    CA c1;
    SA s1;
    c1.roi();
    s1.roi();
}