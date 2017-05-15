class B
{
	public int i = 10;
	
	// public void f()
	// {
	// 	int a = 0;
	// 	i = a;
	// }

	public void show()
	{
		System.out.printf("%d\n", i);
	}
}

class M
{
	public static void main(String[] args)
	{
		B bb1 = new B();
		B bb2 = new B();

		bb1 = bb2;//当bb1 不等于 bb2时，修改bb2.i的值bb1.i的值是不会改变的！

		bb2.i = 40;

		bb1.show();
	}
}