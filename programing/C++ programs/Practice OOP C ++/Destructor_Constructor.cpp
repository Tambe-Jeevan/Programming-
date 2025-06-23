#include<iostream>
#include<conio.h>
using namespace std;
class Demo{
    int a;
    int b;
    public:
    Demo(){                  
        a=7;
        b=9;
    cout<<a<<" "<<b<<endl;  
    }
    ~Demo(){     
        //Destructor is executed
        cout<<"Destructor is executed";
    }
};
    int main(){
        Demo d1;

       getch(); //when Program in this point That time Destructor is Execute
    }       