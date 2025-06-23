import java.util.Scanner;

public class ReverseNumber {
    public static void ReverseNumber(long n){
        long reminder,reverse=0;
        while(n > 0){
            reminder = n % 10;
            reverse = (reverse * 10) + reminder; 
            n = n / 10;
        }
        System.out.println(reverse);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        ReverseNumber(n);
    }
}
