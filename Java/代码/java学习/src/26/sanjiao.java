import java.util.Scanner;


public class sanjiao {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input=new Scanner(System.in);
		System.out.println("请输入三角形的三条边:");
		double a=input.nextDouble();
		double b=input.nextDouble();
		double c=input.nextDouble();
		double p=(a+b+c)/2; 
		double s=Math.sqrt(p*(p-a)*(p-b)*(p-c)); 
		System.out.println("三角形的面积为:" +s);
		
		

	}

}
