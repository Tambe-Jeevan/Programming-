
class ArrayExample{
    void demoArray(){
        int []ages=new int[5];
        ages[0]=98;
        ages[1]=9;
        ages[2]=8;
        ages[3]=6;
        ages[4]=7;
        for(int i=0;i<6;i++)
        {
            System.out.println(ages[i]);
        }
    }
}
class Array{
 public static void main(String args[])
 {  
    ArrayExample a=new ArrayExample();
    a.demoArray();
 }
}