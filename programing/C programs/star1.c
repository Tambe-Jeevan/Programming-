star1()
{
int a[100][100],i,j,p=1,row,column;
printf("Enter row star: ");
scanf("%d",&row);
printf("Enter column star: ");
scanf("%d",&column);
  for(i=1;i<=row;i++)
{
    for(j=1;j<=column;j++)
    {
        if(j<=i)
        {
            printf("* ");
        }
        else
        {
        printf(" ");
        }
    }
          printf("\n");
}
}
star2()
{
    int a[100][100],i,j,row,column;
printf("Enter row star: ");
scanf("%d",&row);
printf("Enter column star: ");
scanf("%d",&column);
  for(i=1;i<=row;i++)
{
    for(j=1;j<=column;j++)
    {
        if(j<=(column+1)-i)
        {
            printf("*");
        }
        else(" ");
    }
          printf("\n");
}
}
star3()
{
int a[100][100],i,j,row,column;
printf("Enter row star: ");
scanf("%d",&row);
printf("Enter column star: ");
scanf("%d",&column);
  for(i=1;i<=row;i++)
{
    for(j=1;j<=column;j++)
    {
        if(j>=i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
          printf("\n");
}
}
star4()
{
int a[100][100],i,j,row,column;
printf("Enter row star: ");
scanf("%d",&row);
printf("Enter column star: ");
scanf("%d",&column);
  for(i=0;i<=row;i++)
{
    for(j=0;j<=column;j++)
    {
        if(j>=(column+1)-i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
          printf("\n");
}
}
star5()
{
int a[100][100],i,j,row,column;
printf("Enter row star: ");
scanf("%d",&row);
printf("Enter column star: ");
scanf("%d",&column);
  for(i=0;i<=row;i++)
{
    for(j=0;j<=column;j++)
    {
        if(j>=(column/2+1)-i && j<=(column/2+1)+i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
          printf("\n");
}
}

void main()
{
    int ch;
    printf("1 For star a\n");
    printf("2 For star b\n");
    printf("3 For star c\n");
    printf("4 For star d\n");
    printf("5 For star e\n");
    printf("6 Exit\n");
while(1)
{
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
    {
        star1();
        break;
    }
case 2:
    {
        star2();
        break;
    }
case 3:
    {
        star3();
        break;
    }
case 4:
    {
        star4();
        break;
    }
case 5:
    {
        star5();
        break;
    }
case 6:
    {
        exit(0);
        break;
    }
default:
    {
        printf("Wrong Input!!!!!!");
    }
    }
}
getch();
}