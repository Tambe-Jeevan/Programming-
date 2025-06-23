void main()
{
    int a,b,c,x,y,d;
    printf("Enter a number:");
    scanf("%d",&x);
    a=x%10;
    y=x/10;
    b=y%10;
    c=y/10;

    d=(a*a*a)+(b*b*b)+(c*c*c);
    if(d==x)
    {
        printf("It is amstrong number.");
    }
    else
    {
        printf("It is not amstrong no.");
    }
    getch();
}
