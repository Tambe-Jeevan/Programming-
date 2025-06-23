void main()
{
int g,v,t,s=0;
 printf("Enter a no:");
 scanf("%d",&g);
 t=g;

 while(t!=0)
 {
     v=t%10;
     s=s+v;
     t=t/10;
 }

 printf("Sum of number is %d",s);
 getch();
}
