#include<iostream>
using namespace std;
class Bank{
int x,y; //private
public:
virtual void ROI()=0;
Bank(){
x = 8;
y = 9;
cout<<"Parent Constructor"<<" x="<<x<<" y="<<y<<endl;
}
};
class SavingAccount : Bank{
public:
void ROI(){

}
SavingAccount(){
cout<<"Child Constructor: "<<endl;
}
};
int main(){
SavingAccount s1;
}