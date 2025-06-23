import java.util.Scanner;
class Demo{
    static int fact(int n){
       int f = 1;
       for(int i = 1; i <= n; i++){
            f = f * i;
       } 
       return f;
    }
}
public class FactorialNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
        System.out.println("Enter a number for factorial: ");
        int n = sc.nextInt();
        int factorial = Demo.fact(n);
        System.out.println("Factorial is : "+factorial);
    }
}
}