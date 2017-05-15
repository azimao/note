import java.util.Scanner;


public class w44 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Scanner input=new Scanner(System.in);
			System.out.println("请输入圆柱体的高,底面圆的半径,π的值：");
			int h=input.nextInt();
			int r=input.nextInt();
			double PI= input.nextDouble();
			double c;
			double s;
			c=h*r*r;
			s=c*PI;
			System.out.println("π的值:" +PI);
			System.out.println("圆柱体的圆半径:" +r);
			System.out.println("圆柱体的高:" +h);
			System.out.println("圆柱体的底圆面积:" +c);
			System.out.println("圆柱体的面积为:" +s);
			

	}

}
