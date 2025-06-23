import java.util.Scanner;

public class PalindromeNumber {
public static void checkPalindrome(int n){
    int rem,sum=0,temp;
    //Storing value of number into temp variable
    temp = n;
    //Reverse number 
    while(n > 0){
        rem = n % 10;
        sum = (sum*10) + rem;
        n = n/10; 
    }
    System.out.println(sum);
    //Checking whether the reversing number is equal to the number or not 
    if(temp == sum)
        System.out.println(temp+" is a palindrome number");
    else
    System.out.println(temp+" is not a palindrome");
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        checkPalindrome(n);
    }
}
