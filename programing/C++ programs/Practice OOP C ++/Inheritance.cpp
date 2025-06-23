//Inheritance Total 5 Types
//1.Single Ex:
//  class A{
//  }
//  class B:A{
//  }
//2.Multilevel
//  class A{
//  }
//  class B:A{
//  }
// class C:B{
// }
//3.Multiple //One exception Abiguti Confuce the child when two parrent is created
//  class A{
//  }
//  class B{
//  }
// class C:A,B{
// }
//4.Hierarchical
//  class A{
//  }
//  class B:A{
//  }
// class C:A{
// }
//5.Hybrid
//  class A{
//  }
//  class B{
//  }
// class C:A,B{
// }
// class D:C{
// }
// class E:D{
// }

//The property of child class with help of parent class is called Inheritance

#include<iostream>
#include<conio.h>
using namespace std;
class Samsung{
    int keypad,mic,speaker,volum;
    public:
    void setValue(){
        keypad=67;
        mic=56;
        speaker=90;
        volum=23;
    }
};
class Samsung2 : protected Samsung{
int cam,display;
public:
void setValue2(){
    cam=678;
    display=34;
    cout<<cam<<" "<<display<<endl;
    }
};
int main(){
    Samsung2 s1;
    s1.setValue2();
}
