void main()
{
    int x,y,i;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);
    for(i=x<y?x:y;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
         printf("GCD is %d",i);
         break;
        }
    }
 getch();
}
