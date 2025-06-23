void main()
{
 int x,y,i;
 printf("Enter 2 no: ");
 scanf("%d%d",&x,&y);
 for(i=x>y?x:y;i<=x*y;i++)  //conditional operator ?x:y when x is greater then print x else print y
  {
     if(i%x==0 && i%y==0)
     {
         printf("LCM is:%d",i);
         break;
     }
 }
getch();
}
