import java.util.Scanner;


public class a30 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			  int number;// 输入的数字
			    int j = 2; 

			    Scanner input = new Scanner(System.in);
			    System.out.println("请输入数字");
			    number = input.nextInt();// 输入数字

			    for(j=2;j<number;j++){
			     
			     if(number%j == 0) {
			     
			     System.out.println("这不素数");
			     break;
			     } 
			    }
			    if(j>=number)
			     System.out.println("这是素数");
			 }

	}


