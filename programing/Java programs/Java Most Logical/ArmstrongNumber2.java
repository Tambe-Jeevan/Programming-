import java.util.Scanner;

public class ArmstrongNumber2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int number = sc.nextInt();
        int a, temp2=0;
        int temp = number;
        while(number > 0)
        {
            a = number % 10;
            number = number / 10;
            temp2 = temp2 + (a*a*a);
        }
        if(temp == temp2)
        {
            System.out.println(temp+" is Armstrong");
        }
        else
        {
            System.out.println(temp+" is not Armstrong");
        }
    }
}
