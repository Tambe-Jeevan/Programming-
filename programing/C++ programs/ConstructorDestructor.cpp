#include<iostream>
#include<conio.h>
using namespace std;
class Samsung1{
    public:
    	Samsung1(){
	cout<<"Parent constructer executed"<<endl;
    }
~Samsung1(){
cout<<"Parent Destructor"<<endl;
}
};
class Samsung2 : public Samsung1{
public:
	Samsung2()   //When we are created child constructor
	{
	cout<<"Child constructer executed"<<endl;
    }
~Samsung2(){
cout<<"Child Destructor"<<endl;
}
};
int main(){
    Samsung2 s1;
    getch();
return 0;
}