class Student
{
int roll;
double per;
private int marks;
void setData()
{
 roll=1;
 per=56.12;
 marks=765;
}
void display()
{
System.out.println(roll);
System.out.println(per);
System.out.println(marks);
}
}
class Classes_Objects
{
public static void main(String args[])
{
  Student s1=new Student();
  Student s2=new Student();
  s2.setData();
  s2.display();
  s1.setData();
  s1.display();
}
}