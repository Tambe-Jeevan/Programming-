import java.util.Scanner;
public class SelectionSort2 {
    public static void main(String[] args) {
        int a[] = new int[100];
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++)
        {
            a[i] = sc.nextInt();
        }
       
        for(int i = 0; i < n-1; i++)
        {
            
            int pivot = i;
            for(int j = i+1; j < n; j++)
            {
                if(a[j] < a[pivot])
                {
                    pivot = j;
                }
            }
            a[i] = a[i] + a[pivot]; 
            a[pivot] = a[i] - a[pivot]; 
            a[i] = a[i] - a[pivot];
        }
        for(int i = 0; i < n; i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}
