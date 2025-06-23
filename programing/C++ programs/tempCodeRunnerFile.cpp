 #include<iostream>
 #include<conio.h>
using namespace std;
// class Demo{
// static int x;
// public:
// static void fun(){
// cout<<x<<endl;
// }
// };
// int Demo::x=9;		//initialize the static variable
// int main(){
// Demo::fun();
// }
class construct{
		   int x;
	     private: construct(){
		    }
		};
	     int main(){
		construct c1; //we can't create object because constructor is private
		}
