void main()
{
 char z[99];
 int i,l;
 printf("Enter a string: ");
 gets(z);
 l=strlen(z);
 for(i=0;i<l/2;i++)
 {
     if(z[i]!=z[l-1-1])
     {
         printf("It is not Palindrome");
         break;
     }

    else
     {
         printf("Palindrome");
         break;
     }
 }
    getch();
}
