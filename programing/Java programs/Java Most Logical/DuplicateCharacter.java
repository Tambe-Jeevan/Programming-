import java.util.Scanner;

class DuplicateCharacter {

    public void findDuplicate(String str) {
        int count;
        char strArray[] = str.toCharArray();                            // Convert string in array form A A B B C C \0
        System.out.println("Duplicate character in a given string: ");
        for (int i = 0; i < strArray.length; i++)                        // Loop is go up to size of array ex - 6
        { 
            count = 1;
            for (int j = i + 1; j < strArray.length; j++)                // secont loop go up to array length and difersnce to i+1 ex- i=0 that time j=1
            {
                if (strArray[i] == strArray[j] && strArray[i] != ' ')    // First time compare A As next A and array not null contain space
                {
                    count++;                                             // count is increase by 1
                    strArray[j] = '0';                                   // Set strArray[j] to 0 to avoid printing visited character
                }
            }
            if (count > 1 && strArray[i] != '0')
                System.out.println(strArray[i] + " " + count + " times");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter line: ");                             // AABBCC
        String str = sc.nextLine();
        DuplicateCharacter d = new DuplicateCharacter();    
        d.findDuplicate(str);                                              // pass the inpute as string AABBCC
    }
}