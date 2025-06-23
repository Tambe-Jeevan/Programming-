//Contructer is used for access private members in class
#include<iostream>
#include<conio.h>
using namespace std;
class Demo{
public:
Demo(){
cout<<"Parent Contructor"<<endl;
}
~Demo(){
    cout<<"Parrent Destructor"<<endl;
}
};
class Demo2 : public Demo{
public:
Demo2() : Demo(){
cout<<"Child Contructor"<<endl;
}
~Demo2(){
     cout<<"Child Destructor"<<endl;
}
};
int main(){
Demo2 d1;
getch();
return 0;
}