import java.util.Scanner;
public class Array_2D{
    static void printArray(int[][] arr){
        for(int i=0; i < arr.length; i++)
        {
            // System.out.println(arr[i]);
            for(int j = 0; j < arr[i].length; j++)
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();  
        }     
    }

    public static void main(String a[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no of row");
        int r = sc.nextInt();
        System.out.println("Enter no of column");
        int c = sc.nextInt();
        int[][] arr = new int[r][c];

        System.out.println("Enter " + r*c + " Elements");
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        printArray(arr);
    }
}
