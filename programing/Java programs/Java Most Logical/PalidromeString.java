import java.util.Scanner;

public class PalidromeString {
    public void checkPalindrome(String str){
        String rev = "";//Object of string class 
        int length;
        //Get length of the string 
        length = str.length();
        //Reverse string
        for(int i = length-1; i >= 0; i--)
            rev = rev + str.charAt(i);

    //Cheking whether the given string is equal to the reverse string or not   
            if(str.equals(rev))
            System.out.println(str+" is a palindrome string");
            else
            System.out.println("Not palindrome");
    }
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String str = sc.nextLine();
    PalidromeString s = new PalidromeString();
    s.checkPalindrome(str);
    }
}
