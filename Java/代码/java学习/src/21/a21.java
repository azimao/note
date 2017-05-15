import java.util.Scanner;


public class a21 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("请输入三个数:");
		double a=input.nextDouble();
		double b=input.nextDouble();
		double c=input.nextDouble();
		double max,min;
		max=min=a;
		if (b>max)
			max=b;
		if (c>max)
			max=c;
		if (b<min)
			min=b;
		if (c<min)
			min=c;
		System.out.println("三个数的最小值为:" +min);
		System.out.println("三个数的最大值为:" +max);
		// TODO Auto-generated method stub

	}

}
