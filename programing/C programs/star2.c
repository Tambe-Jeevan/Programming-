star1()
{
/*int a[100][100],i,j,row,column;
printf("Enter row star: ");
scanf("%d",&row);
printf("Enter column star: ");
scanf("%d",&column);*/
int i,j;
for(i=1;i<=8;i++)
{
    for(j=1;j<=8;j++)
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
star2()
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

void main()
{
    int ch;
    printf("1 For star a\n");
    printf("2 For star b\n");
    printf("3 Exit\n");
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
