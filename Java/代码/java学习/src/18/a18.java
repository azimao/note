import java.util.Scanner;


public class a18 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		 int month,days;
		    Scanner reader=new Scanner(System.in);
		    System.out.println("�������·ݣ�");
		    month=reader.nextInt();
		    switch(month){
		      case 2: days=28;
		               break;
		      case 4: 
		      case 6:
		      case 9:
		      case 11: days=30;
		               break; 
		      default: days=31;
		    }
		  System.out.println(month+"�·�Ϊ��"+ days +"�졿");
		  }
		}


		// TODO Auto-generated method stub

	


