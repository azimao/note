class A
{
	private int i;
	private int j;

	public A(int a, int b)
	{
		i = a;
		j = b;
	}//为毛不能写成   a=i，b=j

	public void show()
	{
		System.out.printf("%d %d\n", i, j);
	}
}

class TestConst
{
	public static void main(String[] args)
	{
		A aa = new A(1, 2);

		aa.show();
	}
}