import java.util.Scanner;


public class A22 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input=new Scanner(System.in);
		System.out.println("����������:");
		double a=input.nextDouble();
		double b=input.nextDouble();
		double h=a+b;
		double c=a-b;
		double j=a*b;
		double s=a/b;
		System.out.println("�������� ��Ϊ:" +h);
		System.out.println("�������Ĳ�Ϊ:" +c);
		System.out.println("�������Ļ�Ϊ:" +j);
		System.out.println("����������Ϊ:" +s);

	}

}
