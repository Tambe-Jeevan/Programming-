// Two Types Constructur 1.Default, 2.Parameterized, 3.NO args, Copy Constructer 
class Demo {
    private int x, y;

    Demo()
    {
        x = 5;
        y = 6;
        System.out.println(x);
        System.out.println(y);
    }
    Demo(int p,int q)
    {
        x=p;
        y=q;
        System.out.println(x);
        System.out.println(y);
    }

}

public class Construct {
    public static void main(String[] args) {
        Demo d1 = new Demo();
        Demo d2 = new Demo(1,2);

    }
}
