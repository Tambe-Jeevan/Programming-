import java.util.Scanner;

class BubbleSort{
    public static void main(String[] args) {
        int a[] = new int[20];
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++)
        {
            a[i] = sc.nextInt();
        }
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