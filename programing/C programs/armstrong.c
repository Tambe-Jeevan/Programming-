void main()
{
int g,v,t,s=0;
 printf("Enter a no:");
 scanf("%d",&g);
 t=g;
 while(t!=0)
 {
     v=t%10;
     s=s+(v*v*v);
     t=t/10;
 }
 if(s==g)
 {
     printf("It is Armstrong no.");
 }
 else
 {
     printf("Not armstrong no.");
 }
 getch();
}
