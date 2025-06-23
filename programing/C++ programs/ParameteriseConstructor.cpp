#include <iostream>
#include <conio.h>
using namespace std;
class Constructor
{
public:
    int x, y;
    Constructor(int a, int b) // parameterized constructor
    {
        x = a;
        y = b;
    }
    Constructor() // default constructor for don't use garbage value
    {
        x = 43;
        y = 34;
    }
};
int main()
{
    Constructor a1(4, 5), a2;

    cout << a1.x << " " << a1.y << " " << a2.x << " " << a2.y;
    getch();
}
