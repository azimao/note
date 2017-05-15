class Human
{
	public String name = "zhangsan";
	public int age = 22;
}

class Student extends Human
{

	public double score = 66.6;

}
 
class Graduate extends Student
{
	
	public String tutor = "xiaosan";

}

public class TestExtends
{
	public static void main(String[] args)
	{
		Graduate gd = new Graduate();
		System.out.printf("%s %f\n", gd.name, gd.score);
	}
}

