//C

import java.util.Scanner;

public class BubbleSort2 {
    public static void main(String[] args) {
        int a[]= new int[100];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Numbers: ");
        int n = sc.nextInt();
        for(int i = 0; i < n; i++)
        {
             a[i] = sc.nextInt();
        }
        System.out.println("After Sorting: ");
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
                }
            }
        }
        for(int i = 0; i < n; i++)
            System.out.print(a[i]+" ");
    }
}
