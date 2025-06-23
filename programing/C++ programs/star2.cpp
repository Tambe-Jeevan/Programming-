#include <iostream>
#include <conio.h>
using namespace std;
class star
{
    int ch, a[100][100], i, j, row, column;

public:
    void output()
    {
        cout << "1 For star a\n";
        cout << "2 For star b\n";
        cout << "3 For star c\n";
        cout << "4 For star d\n";
        cout << "5 Exit\n";
        while (1)
        {
            cout << "Enter your choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
            {
                cout << "Enter row star: ";
                cin >> row;
                cout << "Enter column star: ";
                cin >> column;
                for (i = 1; i <= row; i++)
                {
                    for (j = 1; j <= column; j++)
                    {
                        if (j <= i)
                        {
                            cout << "*";
                        }
                        else
                            (" ");
                    }
                    cout << "\n";
                }
            }

            case 2:
            {
                cout << "Enter row star: ";
                cin >> row;
                cout << "Enter column star: ";
                cin >> column;
                for (i = 1; i <= row; i++)
                {
                    for (j = 1; j <= column; j++)
                    {
                        if (j >= i)
                        {
                            cout << "*";
                        }
                        else
                            (" ");
                    }
                    cout << "\n";
                }
                break;
            }
            case 3:
            {
                cout << "Enter row star: ";
                cin >> row;
                cout << "Enter column star: ";
                cin >> column;
                for (i = 1; i <= row; i++)
                {
                    for (j = 1; j <= column; j++)
                    {
                        if (j <= i)
                        {
                            cout << "*";
                        }
                        else
                            (" ");
                    }
                    cout << "\n";
                }
                break;
            }
            case 4:
            {
                cout << "Enter row star: ";
                cin >> row;
                cout << "Enter column star: ";
                cin >> column;
                for (i = 1; i <= row; i++)
                {
                    for (j = 1; j <= column; j++)
                    {
                        if (j <= i)
                        {
                            cout << "*";
                        }
                        else
                            (" ");
                    }
                    cout << "\n";
                }
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                cout << "Wrong input!!!]\n";
            }
            }
        }
    }
};
int main()
{
    star a;
    a.output();
    return 0;
    getch();
}
