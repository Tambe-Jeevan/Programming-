// Just like the Armstrong number, the Perfect Number is also a special type of 
//positive number. When the number is equal to the sum of its positive divisors 
// excluding the number, it is called a Perfect Number. For example, 28 is the perfect 
// number because when we sum the divisors of 28, it will result in the same number. 
// The divisors of 28 are 1, 2, 4, 7, and 14. So,
// 28 = 1+2+4+7
// 28 = 28
import java.util.Scanner;

public class PerfectNumber {

    // public static void main(String[] args) {
    //     Scanner sc = new Scanner(System.in);
    //     int n = sc.nextInt();
    //     perfectnumber();

    static boolean check(int number)   
    {   
        int sum = 1;   
    
        // Finding all the divisors   
        for (int j = 2; j * j <= number; j++)   
        {   
            if (number % j==0)   
            {   
                if(j * j != number)   
                    sum = sum + j + number / j;   
                else  
                    sum = sum + j;   
            }   
        }    
        // Checking whether the sum of the divisors and number both are equal or not  
        if (sum == number && number != 1)   
            return true;   
    
        return false;   
    }   
    public static void main(String[] args) {
        System.out.println("Perfect numbers between 0-5000:");   
        for (int n = 2; n < 5000; n++){   
            if (check(n))   
                System.out.println( n +" is a perfect number");   
        }  
    }
}
