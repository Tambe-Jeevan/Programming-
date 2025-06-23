//import java.util.Scanner;
public class SelectionSort 
{
    public static void main(String[] args) 
    {
        int a[] = {9, 7, 8, 9, 2, 1, 20, 4};
        //Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();
        for(int i = 0; i < 7; i++)
        {
            int min = a[i];
            int pivot = i;
            for(int j = 0; j < 8; j++)
            {
                if(min > a[j])
                {
                    pivot = a[j];
                    min = pivot;
                }
            }
            a[i]   = a[i] + a[min];
            a[min] = a[i] - a[min];
            a[i]   = a[i] - a[min];
        }
        for(int i = 0; i < 8; i++)
            System.out.print(a[i]+" ");
    }
}
