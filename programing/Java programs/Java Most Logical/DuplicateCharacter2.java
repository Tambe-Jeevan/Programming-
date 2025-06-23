import java.util.Scanner;
class Demo{
   void Char(String str){
        int count;
        char strarray[]  = str.toCharArray();
        for(int i = 0; i < strarray.length; i++)
        {
            count = 1;
            for(int j = i+1; j < strarray.length; j++)
            {
                if(strarray[i] == strarray[j] && strarray[i] != ' ')
                {
                    count++;
                    strarray[j] = '0';
                }
            }
            if(count > 1 && strarray[i] != '0')
            System.out.println(strarray[i]+ " " + count + " times");
        }
    }
}

public class DuplicateCharacter2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Line");
        String str = sc.nextLine();
        Demo d = new Demo();
         d.Char(str);
    }
}
