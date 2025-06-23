import java.util.Scanner;

public class ReverseString {
    public static void reverseString(String str){
        //Reverse string using StringBuilder  
        //Creating instance of the StringBuilder  
        StringBuilder newString = new StringBuilder(str);
        //Using reverse() method to reverse string   
        newString.reverse();
        //Showing reverse string   
        System.out.println("Reverse String using StringBuilder: "+newString.toString());
        
    //*************************************************************************************//    
        //Reverse string using string iteration  
        //Converting string to character array  
        char ch[] = str.toCharArray();    
        String reverseString="";    
        //Reverse string using character array  
        for(int i = ch.length-1; i >= 0 ; i--){    
            reverseString+=ch[i];
            System.out.println(reverseString);    
        }  
        //Showing reverse string  
        System.out.println("Reverse string using string iteration: "+reverseString);   
//*************************************************************************************//

}

    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        String str = sc.nextLine();
        reverseString(str);
    }
}
