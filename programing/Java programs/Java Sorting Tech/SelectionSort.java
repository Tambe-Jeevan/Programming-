// Selection sort in Java
import java.util.Scanner;

class SelectionSort {
  void selectionSort(int a[],int n) {
   for(int i = 0; i < n-1; i++)
   {
    int min = a[i];
    int pivot = i;
      for(int j = i+1; j < n; j++)
      {
        if(min > a[j])
        {
          min = a[j];
          pivot = j;
        }
      }
      int temp = a[i];
      a[i] = a[pivot];
      a[pivot] = temp;
      // a[pivot] = a[pivot] + a[i];
      // a[i] = a[pivot] - a[i];
      // a[pivot] = a[pivot] - a[i];
   }
   for(int i = 0; i < n; i++)
   {
    System.out.print(a[i]+ " ");
   }
  }

  // driver code
public static void main(String args[]) {
    int b[] =new int[100];
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number: ");
    int n = sc.nextInt();
    for(int i = 0; i < n; i++)
    {
      b[i] = sc.nextInt();
    }  
    SelectionSort ss = new SelectionSort();
    ss.selectionSort(b,n);
  }
}