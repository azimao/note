class A
{
	private int i;
	static int cnt = 0;
	public static int j = 10;

	public A()
	{
		++cnt;
	}

	public A(int i)
	{
		this.i = i;
		++cnt;
	}

	public static int getCnt()
	{
		return cnt;//判断调用对象的个数
	}

}

public class TestStatic
{
	public static void main(String[] args)
	{
		A aa1 = new A();
		A aa2 = new A();

		System.out.printf("%d\n", A.getCnt());
	}
}
