// Parameterize_Construct
class ParaConstruct{
    int x,y;
    ParaConstruct(int p,int q){
        x = p;
        y = q;
    }
    ParaConstruct()             //constructor Overloading
    {}
    void fun1(){
        System.out.println(x+y);
    }
}
public class Parameterize_Construct {
    public static void main(String[] args) {
        ParaConstruct p1 = new ParaConstruct(4, 3);
        p1.fun1();
    }
}
