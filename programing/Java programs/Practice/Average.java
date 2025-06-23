import java.util.Scanner;
public class Average {
    public static void main(String []args){
        float sum = 0;
        float a[] = new float[10];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no of elements: ");
        float x = sc.nextFloat();     
        for(int i=0; i<x; i++){
            System.out.print("Enter "+ i+1 + " numbers : ");
            a[i] = sc.nextFloat();
        }
        for(int i=0; i<x; i++){
            sum += a[i]; 
        }
        float average = sum/x;
        System.out.format("Average  is: %.2f",average);
    }
}
