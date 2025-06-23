// Default Contructor
class Demo{
    int x,y;
    Demo(){ //create a constructor
        System.out.println("Constructor 1 execute");
    }
}
class Construct{
    public static void main(String[] args) {
        Demo d1=new Demo();
    }
}