import java.util.Scanner;

public class AddtwoMatrix {
    public static void main(String[] args) {
            int r1,c1,r2,c2;
            Scanner s1 = new Scanner(System.in);
            System.out.print("Enter no of Rows and Columns for first matrix: ");
            r1 = s1.nextInt();
            c1 = s1.nextInt();
            System.out.print("\nEnter no of Rows and Columns for Second matrix: ");
            r2 = s1.nextInt();
            c2 = s1.nextInt();
            while(r1!=r2 || c1!=c2){
                System.out.println("Error!! Wrong Input \n Rows and Colomns are not same to Matrrix");
                System.out.println("Enter Again");
                System.out.print("Enter no of Rows and Columns for first matrix: ");
            r1 = s1.nextInt();
            c1 = s1.nextInt();
            System.out.print("\nEnter no of Rows and Columns for Second matrix: ");
            r2 = s1.nextInt();
            c2 = s1.nextInt();
            }
            int[][] a = new int[r1][c1];
            // int[][] b = new int[r2][c2];
            System.out.println("Enter "+ r1*c1 +" Elements For First Mtrix: ");
            for(int i=0; i<r1; i++)
                for(int j=0; j<c1; j++){
                System.out.print("Enter a"+(i+1)+(j+1)+" : ");
                 a[i][j] = s1.nextInt();  
                }      

            // int[][] a = new int[r1][c1];
            int[][] b = new int[r2][c2];
            System.out.println("Enter "+ r2*c2 +" Elements For First Mtrix: ");
            for(int i=0; i<r2; i++)
                for(int j=0; j<c2; j++){
                System.out.print("Enter b"+(i+1)+(j+1)+" : ");
                 b[i][j] = s1.nextInt();        
                }
            // addition
            // for(int i=0; i<r1; i++)
            //     for(int j=0; j<c1; j++){
            //         int[][] add = new int[i][j];
            //     }
            int[][] add = new int[r1][c1];
            for(int i=0; i<r1; i++)
            for(int j=0; j<c1; j++){
                add[i][j] = a[i][j] + b[i][j];
            System.out.print(add[i][j]+" ");
                if(j == r1-1)
                    System.out.println();
            }
        }
}