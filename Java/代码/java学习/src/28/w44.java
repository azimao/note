import java.util.Scanner;


public class w44 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Scanner input=new Scanner(System.in);
			System.out.println("������Բ����ĸ�,����Բ�İ뾶,�е�ֵ��");
			int h=input.nextInt();
			int r=input.nextInt();
			double PI= input.nextDouble();
			double c;
			double s;
			c=h*r*r;
			s=c*PI;
			System.out.println("�е�ֵ:" +PI);
			System.out.println("Բ�����Բ�뾶:" +r);
			System.out.println("Բ����ĸ�:" +h);
			System.out.println("Բ����ĵ�Բ���:" +c);
			System.out.println("Բ��������Ϊ:" +s);
			

	}

}
