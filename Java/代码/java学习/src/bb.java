import java.util.Scanner;
	
public class bb
{
	public void mian(String[] args)
	{
		  
		    double r;
		    int h;
		    double pi;
		
			Scanner reader=new Scanner(System.in);
			System.out.print("请输出圆柱体的底面半径");
			r=reader.nextDouble();
			
			System.out.print("请输入圆柱体的高");
			h=reader.nextInt();
			
			System.out.print("请输入π的值");
			pi=reader.nextDouble();
			
			
			System.out.println("底圆半径="+r);
			
			
	}
}
	
	