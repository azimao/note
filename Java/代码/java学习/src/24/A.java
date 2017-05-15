import java.util.Scanner;


public class A {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("请输入数字:");
		int n=input.nextInt();
		int sum=0;
		  for(int i=1;i<=n;i++)
		  {
		   sum+=i;
		  }
		  System.out.println("运算得到:"+sum);
		  
		// TODO Auto-generated method stub

	}

}
