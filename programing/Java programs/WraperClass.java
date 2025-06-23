//java is "almost" 100% Object Oriented Language but not 100%
//Because of predefine data Types is used in java
//We can create it an 100% oop using Wrapper classes.
//Wraper classes is help to you used an classes which is already present in java
public class WraperClass {
    public static void main(String[] args) {
        // int as class Integer
        // Type-1 we can used it an paseint function
        // parseInt method is static in the Integer class so
        // we can access it an using 'dot' Operater
        // syntax Integer.paseInt();
        // it can help to you convert any data string in integer form.
        int x = Integer.parseInt("123");    //static function
        System.out.println(x);

        double d = Double.parseDouble("56"); //static function
        System.out.println(d);

        //type-2
        // you can also convert a binary number into integer of base 10
        // using of valueof function
        //static function
        Integer i1 = Integer.valueOf("1000110101010110110010100100101", 2); // 1185637669 //static function
        int i2 = i1.intValue(); //non static it is instance member function 
        System.out.println(i2);

        //static function
        Long l1 = Long.valueOf("111101010101010101010101010101010110101110101011011010101010110", 2); // 8839064868839863638 
        long l2 = l1.longValue();   //non static it is instance member function 
        System.out.println(l2);
    }
}
