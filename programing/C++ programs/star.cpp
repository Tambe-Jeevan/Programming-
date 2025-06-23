#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[100][100], i, j, row, column;
    cout << "Enter row star: ";
    cin >> row;
    cout << "Enter column star: ";
    cin >> column;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (i>=j)
            {
                cout << "* ";
            }
            else
                (" ");
        }
        cout << "\n";
    }
}
