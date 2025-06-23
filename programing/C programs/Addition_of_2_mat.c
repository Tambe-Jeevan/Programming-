#include<conio.h>
void main()
{
    int x[100][100], y[100][100], z[100][100], i, j, row, column;
    printf("Enter a Row: ");
    scanf("%d", &row);
    printf("Enter a Column: ");
    scanf("%d", &column);
    printf("Enter First Matrix: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Enter Second Matrix: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
    printf("Addition of two matrices:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
    getch();
}
