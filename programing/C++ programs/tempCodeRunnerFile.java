class staticmember{
static void fun(){
 int x = 8;
System.out.println(x);
}
}
class Static{
public static void main(String[] args){
staticmember.fun();
}
}