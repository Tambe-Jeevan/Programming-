import java.util.*;
public class aray2D {
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            int[][] aray= new int[6][6];
            
            
            for(int i=0;i<6;i++){
                String[] Row = sc.nextLine().split(" ");
              sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
                
                for(int j=0;j<6;j++){
                    int arr = Integer.parseInt(Row[j]);
                    aray[i][j] = arr;
                }
            }
            int max = Integer.MIN_VALUE;
            for(int i=0;i<=3;i++){
                for(int j=0;j<=3;j++){
                    int sum = aray[i][j] + aray[i][j+1] + aray[i][j+2]+         //a b c
                                        aray[i+1][j+1]+                         //  d
                              aray[i+2][j]+aray[i+2][j+1]+aray[i+2][j+2];       //e f g
                    if(sum>max){
                        max = sum;
                    }
                }
            }
            System.out.println(max);
            sc.close();
        }
    }
    

