#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[10], sum=0.0, average;

    cout << "Enter the numbers of data(1 to 10): ";
    cin >> n;

    while (n > 10 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 10)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
