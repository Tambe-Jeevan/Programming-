void main()
{
int g,v,t,s=0;
 printf("Enter a no:");
 scanf("%d",&g);
 t=g;
 while(t!=0)
 {
     v=t%10;
     s=(s*10)+v;
     t=t/10;
 }
 printf("Reverse Number is %d",s);
 getch();
}
