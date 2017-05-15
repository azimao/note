class A
{
	public int i;
	protected int j;
	private int k;

	public void g()
	{

	}

	private void s()
	{

	}

	protected void b()
	{

	}

}

class B extends A
{
	public void f()
	{
		i = 10;
		j = 20;
		//   k = 40;  error
		

		g();
		b();
		//s();//私有的方法不能被继承
	}
}

public class TestExtends_1
{
	public static void main(String[] args)
	{

	}
}