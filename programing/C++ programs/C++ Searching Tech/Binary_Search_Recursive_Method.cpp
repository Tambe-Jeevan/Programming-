// Binary Search in C++
//Time complexity of binary search is O(log(n)).

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
  if (high >= low)
  {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid+1;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }
  return -1;
}
int main(void)
{
  int array[10];
  int x = 7, n;
  while (1)
  {
    cout <<"\nEnter a range: ";
    cin >> n;
    for (int i = 0; i < n; i++)
      cin >> array[i];
    cout << "Enter a element you want to search: ";
    cin >> x;
  int result = binarySearch(array, x, 0, n - 1);
   (result == -1) ? printf("Not found") : printf("Element is found at position %d", result);
  }
}