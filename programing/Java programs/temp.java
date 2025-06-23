// class staticmember{
// static void fun(){
//  int x = 8;
// System.out.print(x);
// }
// }
// class temp{
// public static void main(String[] args){
// staticmember.fun();
// }
// }
// class Construct{
//     int x;
//     private Construct(){
//     }
//     }
//     class temp{
//     public static void main(String args[]){
//     Construct c = new Construct();
//     }
//     }
// class copyconstructor {
//     int x, y;

//     copyconstructor(int a, int b) {
//         x = a;
//         y = b;
//         System.out.println(x + " " + y);
//     }

//     copyconstructor(copyconstructor c) {
//         c.x++;
//         c.y++;
//         System.out.println(c.x + " " + c.y);
//     }
// }

// class temp {
//     public static void main(String[] args) {
//         copyconstructor c = new copyconstructor(1, 2);
//         copyconstructor d = new copyconstructor(c);
//     }
// }
// class Parent {
//     Parent() {
//         System.out.println("Parent class executed");
//     }
// }

// class Child extends Parent {
//     // Here compiler automatically type the "super" keyword and go to parent class
//     Child() {
//         System.out.println("Child Class executed");
//     }
// }

// class temp {
//     public static void main(String[] args) {
//         Child c = new Child();
//     }
// }
// class temp {
//     public static void main(String[] args) {
//         for (int i = 0; i < args.length; i++)
//             System.out.println(args[i]);
//     }
// }
// class Private{
//     private int x;
//     public void fun(){
//     x = 9;
//     System.out.println(x);
//     }
//     }

// class AccessModifiers{
//     public int x;
//     public void Fun(){
//      x = 8;
//     }
//     } 
// class temp{
//     public static void main(String[] args){
//     // AccessModifiers a = new AccessModifiers();
//     // a.Fun();
//     // System.out.println(a.x);
//     Private p = new Private();
//     p.fun();
//     }
//  }
// class Overload {
//     void fun(){
//     int x = 1;
//     System.out.println(x);
//     }
//     void fun(int y){
//     int a = y;
//     System.out.println(a);
//     }
// }

// class temp {
//     public static void main(String[] args) {
//         Overload a = new Overload();
//         a.fun();
//         a.fun(5);
//     }
// }

abstract class Abstract {
    abstract public void fun();

    int x, y;
}

class Override extends Abstract {
   public void fun() {
        int a = 7;
        System.out.println(a);
    }
}

class temp {
    public static void main(String[] args) {
        Override a = new Override();
        a.fun();
    }
}

// class Parent{
// static void fun(){
// int x = 8;
// System.out.println(x);
// }
// }
// class Child extends Parent{
// void fun(){ //static member can not be inherite
// int x = 9;
// System.out.println("Child ");
// }
// }
// class temp{
// public static void main(String[] args) {
// Child c = new Child();
// c.fun();
// }
// }