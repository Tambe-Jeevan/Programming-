void main()
{
  float a[5],s=0,b;
  int i;
  printf("Enter Marks of 5 suject\n");
  for(i=0;i<5;i++)
  {
   scanf("%f",&a[i]);
  }
    for(i=0;i<5;i++)
    {
     s=s+a[i];
    }
printf("Total marks is %f\n ",s);
b=(s/500)*100;
printf("Percentage is: %f\n",b);
if(b<40)
{
    printf("You are fail!!!!");
}
else if(b=40 && b<50)
{
    printf("Congrats you got pass class");
}
else if(b=50 && b<60)
{
    printf("Congrats you got second class");
}
else if(b>60 && b<70)
{
    printf("Congrats you got first class");
}
else
{
    printf("Congrats You Got First Class With Distictions");
}
  getch();
}
