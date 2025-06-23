void main()
{
    int a,b,c;
    while(1)
    {
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greter\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greter\n",b);
    }
    else
    {
        printf("%d is greter\n",c);
    }
    }
getch();
}
