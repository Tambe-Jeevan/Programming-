#include<iostream>
#include<conio.h>
using namespace std;
class Static {
private:
    static int x;

//not create object using static function Type 3
public:
 static void f1(){
        x=567;
        cout<<x<<endl;
    } 

//Constructor Type 4
Static(){
     x=21;
     cout<<x<<endl;
    } 

};
int Static::x;
int main()
{
// Static s1;
// s1.x=98;        //type 1
// Static::x=90;   //type2

//no create object we can access that direct using first create static function.. Type3
Static::f1();

}