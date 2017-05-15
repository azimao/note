class A
{
	public int i = 10;

	public A(int i)
	{
		this.i = i;
		System.out.printf("%d\n", i);
	}

	public void show()
	{
		System.out.printf("%d\n", i);
	}
}

public class TestThis
{
	public static void main(String[] args)
	{
		A aa1 = new A(2);

		aa1.show();
	}
}