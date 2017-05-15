class A
{
	public int i = 20;
	private static A aa = new A();

	private A()
	{
	}

	public static A getA()
	{
		return aa;
	}
}

public class TestStatic_1
{
	public static void main(String[] args)
	{
		A aa1 = A.getA();
		A aa2 = A.getA();
		aa1.i = 99;
		System.out.printf("%d\n", aa2.i);

		if(aa1 == aa2)
		{
			System.out.printf("aa1 == aa2");
		}
	}
}



