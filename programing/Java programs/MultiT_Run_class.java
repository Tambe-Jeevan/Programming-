class Process1 implements Runnable{
public void run(){
        for(int i=1;i<=10;i++)
            System.out.println("P1:"+i);
}
}
class Process2 implements Runnable{
public void run(){
        for(int i=1;i<=10;i++)
            System.out.println("P2:"+i);
}
}

public class MultiT_Run_class {
    public static void main(String[] args) {
        Process1 p1 = new Process1();
        Process2 p2 = new Process2();

        Thread t1 = new Thread(p1);
        Thread t2 = new Thread(p2);

        t1.start();
        t2.start();
    }
    
}
