#include <iostream>
#include <conio.h>
using namespace std; // namspanamespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int m = n;
    int r = 0;
    while (n != 0)
    {
        int ld = n % 10;
        r *= 10;
        r += ld;
        n /= 10;
    }
    cout << "Reverse is: " << r << endl;
    cout << "Addition is: " << m + r;
    getch();
}