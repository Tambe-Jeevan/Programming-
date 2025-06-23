void main()
{
    int x,y,s=0,p;
    printf("Enter a number:");
    scanf("%d",&x);
     y=x;
    while(y!=0)
    {
        p=y%10;
        s=s+(p*p*p);
        y=y/10;
    }
        if(x==s)
            printf("It is amstrong no.");
        else
            printf("It is not amstrong no.");
    getch();
}
