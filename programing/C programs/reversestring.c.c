void main()
{
    int i,l;
    char a[999],temp;
    printf("Enter a string ");
    gets(a);
    l=strlen(a);

    for(i=0;i<l/2;i++)
    {
        temp=a[l-1-i];
        a[l-1-i]=a[i];
        a[i]=temp;
    }
    printf("Reverse string is: %s",a);
    getch();
}
