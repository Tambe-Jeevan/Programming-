import java.util.Scanner;

class CLA{
	public static void main(String []args)
	{
	// 	float s = 0;
	// 	for(int i=0; i<args.length; i++){
	// 	s = s + Integer.parseInt(args[i]);
	// }
	// System.out.print("Average is: "+s/args.length);
	Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        double b = sc.nextDouble();
        String c = sc.nextLine();
        System.out.println("String: "+c);
        System.out.println("Double: "+b);
        System.out.println("Int: "+a);

}
}