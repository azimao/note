import java.util.Scanner;


public class a30 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			  int number;// ���������
			    int j = 2; 

			    Scanner input = new Scanner(System.in);
			    System.out.println("����������");
			    number = input.nextInt();// ��������

			    for(j=2;j<number;j++){
			     
			     if(number%j == 0) {
			     
			     System.out.println("�ⲻ����");
			     break;
			     } 
			    }
			    if(j>=number)
			     System.out.println("��������");
			 }

	}


