abstract class Demo{          //Abstrct class has no ctreated any object
    int x,y;
   public int z;
    abstract void f1();
    void f2(int p,int q){
        x=p;
        y=q;
        System.out.println(x);
        System.out.println(y);
    }
    Demo(){                     //Constructor
        x=23;
        y=43;
        System.out.println(x);
        System.out.println(y);
    }
}
class Demo1 extends Demo{       //child class created for Abtract
    int c;
    int d;
    void f1(){

    }
 static void f4(){                      
        System.out.println("Static function executed");
    }
     void f2(){

     }
   void f3(){

    }
    
   Demo1(){
        c=2;
        d=1;
        System.out.println(c);
        System.out.println(d);
    }
    void main(){

    }
}
public class AbstractClass {
    public static void main(String[] args) {
         Demo a1 = new Demo1();
         a1.f2(2,5);
        Demo1.f4();

    //    Demo1 a2 = new Demo1();
       
    }
   
}

