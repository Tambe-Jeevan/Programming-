// Binary Search in Java

import java.util.Scanner;

class BinarySearch_Interative {
  int binarySearch(int array[], int x, int low, int high) {

    // Repeat until the pointers low and high meet each other
    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (array[mid] == x)
        return mid+1;

      if (array[mid] < x)
        low = mid + 1;

      else
        high = mid - 1;
    }

    return -1;
  }

  public static void main(String args[]) {
    BinarySearch_Interative ob = new BinarySearch_Interative();
    int a[] = new int[100];
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Number: ");
    int n = sc.nextInt();
    for(int i = 0; i < n; i++){
         a[i] = sc.nextInt();
    }
    System.out.println("Enter number you want to search: ");
    int x = sc.nextInt();
    int result = ob.binarySearch(a, x, 0, n - 1);
    if (result == -1)
      System.out.println("Not found");
    else
      System.out.println("Element found at index " + result);
  }
}
