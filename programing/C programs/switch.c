void main()
{
    int ch,a,b,c;
printf("Press 1, Addition\n");
printf("Press 2, Substraction\n");
printf("Press 3, Multiplication\n");
printf("Press 4, Division\n");
printf("Enter Your Choice\n");
switch(ch)
{
while(1)
    {
    case 1:
       {
        printf("Enter Two Number:");
        scanf("%d%d",&a,&b);
        ch=a+b;
        printf("Addition Is:%d",ch);
        break;
       }
    case 2:
       {
        printf("Enter Two Number:");
        scanf("%d%d",&a,&b);
        printf("Substraction Is:%d",a-b);
        break;
       }
    case 3:
       {
        printf("Enter Two Number:");
        scanf("%d%d",&a,&b);
        printf("Multiplication Is:%d",a*b);
        break;
       }
    case 4:
       {
        printf("Enter Two Number:");
        scanf("%d%d",&a,&b);
        printf("Division Is:%d",a/b);
        break;
       }
    }
}
  getch();
}
