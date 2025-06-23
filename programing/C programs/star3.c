void main()
{
    int i,j,p=65;
    for(i=1;i<=26;i++)
    {
        for(j=1;j<=26;j++)
        {
            if(j<=i)
            {
            printf("%c",p);
            //p++;
            }
            else
            {
                printf(" ");
            }
        }
         printf("\n");
        p++;
    }
    getch();
}
