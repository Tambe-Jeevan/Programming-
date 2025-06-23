#include<iostream>
#include<conio.h>
using namespace std;
template<class U,class W,class Y>void fun(U a, W b, Y c){
    U x = a;
    W y = b;
    W z = c;
    cout<<x<<" "<<y<<" "<<z<<endl;
}
int main(){
fun('A',65,'A');
}