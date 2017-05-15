class A
{
	int i = 5;
	int j = 10;
}

class TestMemo
{
	public static void main(String[] args)
	{
		A aa1 = new A();

		A aa2 = aa1;

		aa1.j = 90;

		System.out.printf("%d\n", aa2.j);
	}
}