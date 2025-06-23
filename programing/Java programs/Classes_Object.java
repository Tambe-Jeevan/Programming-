class Nokia
{
int x;                //instance(object) member variable
int y;				  //instance(object) member variable
static void fun1()           // instance(object) member variable
{
System.out.println("Nokia function executed.");
}
void fun2()
{
	System.out.println("Fun2 execut");
}
}
class Classes_Object
{
	public static void main(String []args)
	{
	Nokia n1=new Nokia();
	n1.fun1();
	n1.fun2();
	}
}