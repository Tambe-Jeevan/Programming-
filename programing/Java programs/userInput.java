import java.util.Scanner;
public class userInput{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
         System.out.print("Enter two numbers: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.println("Adition is: "+(x+y));
    }
}