import java.util.Scanner;
public class PrimeNumber {
    static void primeNumber(int n){
        int m = 0;
        m = n / 2;
       if(n == 0 || n == 1){
        System.out.println("Is not prime");
       }
       else{
       for(int i = 2; i < m; i++){
            if(n % i == 0){
                System.out.println(n+" Is not prime");
                break;
            }
            else{
                System.out.println(n+" Is prime.");
                break;
            }
       }
    }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        primeNumber(n);
    }
}
}