// Linear Search in C++
// Time Complexity is Big O(n), Best case=O(1),and Worst-case O(n).

#include <iostream>
using namespace std;

int search(int array[], int &n, int &x)
{

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i + 1;
  return -1;
}
int main()
{

  int array[10], n, x;
  cout << "Enter a range: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  cout << "Enter a element you want to search: ";
  cin >> x;

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at position: " << result;
}