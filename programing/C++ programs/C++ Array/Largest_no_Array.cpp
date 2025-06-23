#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[10];

  cout << "Enter total number of elements(1 to 10): ";
  cin >> n;
  cout << endl;

  while(n > 10 || n <=0){
    cout<<"Wrong Input!!!!!!!!"<<endl<<"Enter a number again: ";
    cin>>n;
  }
  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 0;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
