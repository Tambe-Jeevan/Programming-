import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */  
        Scanner sc = new Scanner(System.in);
        int z = sc.nextInt();
        for(int i=0;i<z;i++){
        int a = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();
        
        for(int j=0;j<n;j++){
            a = a +b;
            System.out.print(a+" ");
            b = b * 2;  
        }
        System.out.println();
    }
    sc.close();
    }
}