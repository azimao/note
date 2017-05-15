import java.util.Scanner;


public class A22 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input=new Scanner(System.in);
		System.out.println("请输两个数:");
		double a=input.nextDouble();
		double b=input.nextDouble();
		double h=a+b;
		double c=a-b;
		double j=a*b;
		double s=a/b;
		System.out.println("两个数的 和为:" +h);
		System.out.println("两个数的差为:" +c);
		System.out.println("两个数的积为:" +j);
		System.out.println("两个数的商为:" +s);

	}

}
